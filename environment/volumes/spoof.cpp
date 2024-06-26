#include "common.h"

int main()
{
    char buffer[PACKET_LEN];
    memset(buffer, 0, PACKET_LEN);

    ipheader *ip = (ipheader *)buffer;
    udpheader *udp = (udpheader *)(buffer + sizeof(ipheader));

    // add data
    char *data = (char *)udp + sizeof(udpheader);
    int data_len = strlen(CLIENT_IP);
    strncpy(data, CLIENT_IP, data_len);

    // create udp header
    // TODO:
    udp->udp_dport = htons(9999);
    udp->udp_sport = htons(12345);
    udp->udp_ulen = htons(sizeof(struct udpheader) + data_len);

    // create ip header
    // TODO:
    ip->iph_ver = 4;
    ip->iph_ihl = 5;
    ip->iph_ttl = 64;
    ip->iph_sourceip.s_addr = inet_addr("192.168.0.1");
    ip->iph_destip.s_addr = inet_addr("10.9.0.5");
    ip->iph_protocol = IPPROTO_UDP;
    ip->iph_len = htons(sizeof(struct ipheader) + sizeof(struct udpheader) + data_len);

    // send packet
    // TODO:
    send_raw_ip_packet(ip);

    return 0;
}
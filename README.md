# Cyber-Attacker
## Overview
The Cyber-Attacker project involves writing a sniffer and a spoofer program to perform network attacks using spoofing and sniffing techniques. The goal is to intercept and manipulate network packets to retrieve confidential information.

## Features
- *Packet Sniffing*: Intercepts and inspects network packets.
- *Packet Spoofing*: Creates fake packets to impersonate other users.
- *Network Security*: Demonstrates techniques used in network security and cyber-attacks.
## Technologies
- *C++*: Primary programming language.
- *PCAP Library*: For packet capture and manipulation.
- *Docker*: For creating isolated testing environments.
## Installation
To set up the Cyber-Attacker project on your local system, follow these steps:

```bash
git clone https://github.com/SamiMelhem/Cyber-Attacker.git
cd Cyber-Attacker
make
```
## Usage
Start the Docker environment and run the sniffer and spoofer programs:

```bash
./start_docker_environment.sh
./sniff
./spoof
```
## File Descriptions
- *sniff.cpp*: Contains the implementation of the sniffer.
- *spoof.cpp*: Contains the implementation of the spoofer.
- *common.h*: Contains common definitions and utility functions.

## Features

- **TCP Connect Scanning** - Uses reliable TCP connection-based scanning
- **Customizable Port Range** - Specify start and end ports for targeted scanning
- **Simple Interface** - Easy to use for both technical and non-technical users
- **Open Port Detection** - Identifies and lists all open ports on the target system
- **Port Count Summary** - Displays the total number of open ports found

## Prerequisites

- GCC compiler
- Linux/Unix environment

### Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/tcp-port-scanner.git
cd tcp-port-scanner

# Compile the program
gcc scan.c -o scan
```
## Usage

### Command Syntax

```bash
./scan <IPaddress> <Startport> <Endport>
```
### Example: Basic Localhost Scan

**Command:**
```bash
./scan 127.0.0.1 1 100
```
**Output**
```
Port 22 is open
Port 80 is open
Total number of open ports: 2
```

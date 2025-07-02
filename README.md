# Simple TCP Port Scanner

This is a simple **TCP connect port scanner** written in C. It attempts to connect to a range of ports on a target IP address to identify which TCP ports are open.

---

## Project Files

- `scan.c` — The C source code for the port scanner.

---

## 🛠️ Requirements

- GCC or any C compiler
- Linux environment (or compatible Unix-like OS)

---

## 🔧 Compilation

Use `gcc` to compile the program:

```bash
gcc -o scan scanner.c
```

## Usage

**Arguments:**

- `<IP address>`: The target IP to scan (e.g., `192.168.1.1`)
- `<Start port>`: The first port in the scan range
- `<End port>`: The last port in the scan range

---

**Example:**
./scan 192.168.1.1 20 1024


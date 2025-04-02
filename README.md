# LXMAKE

A simple C program to install .deb packages using dpkg. This tool verifies that the provided file is a valid .deb package and installs it. If there are issues during installation, it attempts to fix the problem using apt-get install -f.
Features

- Verifies if the file is a .deb package.
- Uses dpkg to install .deb packages.
- Automatically tries to fix broken dependencies with apt-get install -f.

## Requirements

- Linux-based operating system
- dpkg and apt-get (usually pre-installed on Debian-based distributions
- C compiler (such as GCC)

## Installation

- Clone the repository:

```bash
git clone https://github.com/oileo/LXMAKE.git
cd LXMAKE
```
- Install the program:

You need to have dpkg installed to install the LXMAKE:
```bash
sudo dpkg -i LXMAKE.deb
```

### Usage:

After installed, open the .deb that you want to install and open it with LXMAKE and put your password for sudo.

### How it Works

- Verifies the .deb file:
- The program checks if the file provided has a .deb extension.

- Attempts to install:
- The program uses dpkg -i to install the package.

- Fixes broken dependencies:
- If the installation fails, the program runs apt-get install -f to attempt to fix missing dependencies.

### Contributing

Feel free to fork this repository, submit issues, or send pull requests if you'd like to contribute to the project!
License

#### This project is open-source and available under the MIT License.

These SAMA5D4 Applets were built from the Atmel Software Package:

Repository: https://github.com/atmelcorp/atmel-software-package
Commit: 718a417ace12efdc65b66f0d21ccad41c3c06d01

To get the sources and rebuild an applet (using GCC):

1. get the software package source git checkout:
        git clone https://github.com/atmelcorp/atmel-software-package
        git checkout 718a417ace12efdc65b66f0d21ccad41c3c06d01

2. build the applet (for example: serialflash):
        cd samba_applets/serialflash
        make TARGET=sama5d4-generic RELEASE=1

3. copy the applet binary to SAM-BA directory
        cp build/applet-serialflash_sama5d4-generic_sram.bin $SAMBADIR/qml/SAMBA/Device/SAMA5D4/applets


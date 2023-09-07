obj-m:=Module.o

all:build

build:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

install:build
	sudo insmod Module.ko

uninstall:
	sudo rmmod Module.ko

list:
	sudo lsmod

find:
	sudo lsmod | grep Module

logs:
	sudo dmesg | tail

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean

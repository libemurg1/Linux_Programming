# Author : Magumise Liberty
# 2023
#
# Hello World Driver Writing in Linux

# Make commands:
You might want to use sudo here 
-------------------------------
make all        ; build all
make build      ; build
make install    ; install       @insmod
make uninstall  ; uninstall     @rmmod 
make list       ; list drivers  @lsmod 
make find       ; find = list and grep for the current driver

# Driver Interface (Functions)

# Source Files
Module.c
Makefile

# Build Files

# Module.c

# Kernel Headers
#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

# hello_init(void):
The driver prints to kernel  the message "Hello World Driver Does Nothing" at insmod that in _init(...)

# code:
 // Driver Specific Operations
// This is like the main function
static int hello_init(void){
    printk(KERN_ALERT "Hello World Driver Does Nothing\n");
    return 0;
} 

# hello_exit(void):
The Driver prints to Kernel "Exit Driver : Here you can call clean up methods\
     e.g that remove any files installed or binary file installed by driver\n"

# code:
 // This is the function that is run at exit. 
// run @exit to clean up anjd release resources or ports ...
static void hello_exit(void){
    printk(KERN_ALERT "Exit Driver : Here you can call clean up methods\
     e.g that remove any files installed or binary file installed by driver\n");
}

# Insert Kernel Module/Driver
# set the function to be run @ insmod mod_name
module_init(hello_init);

# Remove Kernel Module/Driver
# set the function to be run @ rmmod mod_name
module_exit(hello_exit);

# Kernel Module Meta Data
# Author , License, Description
MODULE_AUTHOR("mAGUMISe lIBERTy");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("gETTINg sTARTEd wITh dRIVERs by LibertY MagumisE 2oo3");



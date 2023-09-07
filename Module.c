/*
*/

#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>


// Driver Specific Operations
// This is like the main function
static int hello_init(void){
    printk(KERN_ALERT "Hello World Driver Does Nothing\n");
    return 0;
}

// This is the function that is run at exit. 
// run @exit to clean up anjd release resources or ports ...
static void hello_exit(void){
    printk(KERN_ALERT "Exit Driver : Here you can call clean up methods\
     e.g that remove any files installed or binary file installed by driver\n");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_AUTHOR("mAGUMISe lIBERTy");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("gETTINg sTARTEd wITh dRIVERs by LibertY MagumisE 2oo3");

// int main(){

//     return 0;
// }
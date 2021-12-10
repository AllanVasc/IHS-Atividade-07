#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_INFO */
#include <linux/init.h>         /* Needed for the macros */
#include <linux/moduleparam.h>
MODULE_LICENSE("Dual BSD/GPL");

static int parametro = 10;

static int __init hello_start(void){

    printk(KERN_INFO "ESPERE UM POUCO...\n");
    printk(KERN_INFO "OLA MAIS UMA VEZ...\n");
    return 0;
}

static void __exit hello_end(void){

    printk(KERN_INFO "ADEUS MUNDO CRUEL... - PARAMETRO = %d\n", parametro);
}

module_param(parametro, int, 0);
module_init(hello_start);
module_exit(hello_end);
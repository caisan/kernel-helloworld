#include<linux/init.h>
#include<linux/module.h>
/*
 * #include <stdio.h>
 * #include <stdlib.h>*/
MODULE_LICENSE("BSD");
MODULE_AUTHOR("caisan");

static int hello_init(void)
{
    printk(KERN_ALERT "hello wolrd");
    return 0;
}
static void hello_exit(void)
{
    printk(KERN_ALERT "good byeworld");
}
/*this is a new hello */
module_init(hello_init);
module_exit(hello_exit);


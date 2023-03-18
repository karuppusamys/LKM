#include <linux/module.h>

static int __init start_fun(void)
{
	printk(KERN_INFO "Hello World\n");
	return 0;
}

static void __exit exit_fun(void)
{
	printk(KERN_INFO "Good bye\n");
}

module_init(start_fun);
module_exit(exit_fun);


MODULE_LICENSE("GPL");
MODULE_VERSION("1.0");
MODULE_AUTHOR("KS");
MODULE_DESCRIPTION("Hello World");


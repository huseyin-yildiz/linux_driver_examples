#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("hsyn");
MODULE_DESCRIPTION("Selam to the kernel");

static int __init selam_init(void)
{
    printk("Selamun aleykum, kernel.\n");
    return 0;
}

static void __exit selam_exit(void)
{
    printk("Allah'a emanet, kernel.\n");
}

module_init(selam_init);
module_exit(selam_exit);
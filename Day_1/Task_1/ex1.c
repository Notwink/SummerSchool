#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Task_1 test module");
int init_module(void) {
printk(KERN_INFO "Hello World!\n");

return 0;
}
void cleanup_module(void) {
printk(KERN_INFO "Goodbye World!\n ");
}

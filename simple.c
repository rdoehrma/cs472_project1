/*Ryan Doehrmann
  CS472 - Operating System Design
  Project 1
  January 31, 2019
*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/*This functoin is called when the module is loaded. */
int simple_init(void)
{
  printk(KERN_INFO "Loading Module Doehrmann\n");
  return 0;
}

/*This function is called when the module is removed. */
void simple_exit(void)
{
  printk(KERN_INFO "Removing Module Doehrmann\n");
}

/*Macros for registering module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Modiule");
MODULE_AUTHOR("SGG");

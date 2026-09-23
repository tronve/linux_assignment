#include <linux/syscalls.h>

SYSCALL_DEFINE0(mycall)
{
	printk("System Call Example! 20221729 Minchan Kwon\n");

	return 0;
}

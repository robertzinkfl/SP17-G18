#include <types.h>
#include <lib.h>
#include <test.h>
#include <thread.h>
#include <synch.h>

int asst1_tests(int a, char **v)
{
	(void) a;
	(void) v;
	kprintf("\nTESTS FOR ASST1:\n\n");
	kprintf("Lock test:\n");

	struct lock *locktest = lock_create("locktest");

	lock_acquire(locktest);

	if(lock_do_i_hold(locktest))
	{
		kprintf("Lock sucessfully held.\n");
	}

	kprintf("Trying to take lock without releasing it...\n");

	// Add more here

	return 0;
}

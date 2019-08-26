#include <stdio.h>

static void __attribute__((constructor(101)))
clib_init(void)
{
	printf("%s, hello\n", __func__);
}

extern int
clib_hello(void)
{
	printf("%s, hello\n", __func__);
}

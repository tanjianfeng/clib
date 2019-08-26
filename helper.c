#include <stdio.h>

static void __attribute__((constructor(101)))
helper_init(void)
{
	printf("%s, hello\n", __func__);
}

/*
 * SYSCALL_DEFINE0(getuid16)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_getuid16 = {
	.name = "getuid16",
	.num_args = 0,
};

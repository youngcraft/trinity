/*
 * SYSCALL_DEFINE0(getpid)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_getpid = {
	.name = "getpid",
	.num_args = 0,
};

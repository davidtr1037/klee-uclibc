/* vi: set sw=4 ts=4: */
/*
 * read() for uClibc
 *
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#include <sys/syscall.h>
#include <unistd.h>

extern __typeof(read) __libc_read;
#define __NR___libc_read __NR_read
_syscall3(ssize_t, __libc_read, int, fd, __ptr_t, buf, size_t, count);
libc_hidden_proto(read)
weak_alias(__libc_read,read)
libc_hidden_weak(read)

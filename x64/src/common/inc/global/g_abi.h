/* Copyright 2016 secXsQuared
 * Distributed under GPL license
 * See COPYING under root for details
 */

#ifndef _G_ABI_H_
#define _G_ABI_H_

#include <stddef.h>
#include <stdarg.h>

#define KAPI __attribute__((sysv_abi))
#define UAPI __attribute__((sysv_abi))

#endif
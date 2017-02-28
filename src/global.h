/*
 * global.h
 *
 *  Created on: Feb 20, 2017
 *      Author: garrett
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_


#if !defined(__cplusplus)
#include <stdbool.h> /* C doesn't have booleans by default. */
#endif
#include <stddef.h>
#include <stdint.h>

#define BREAKPOINT asm("xchgw %%bx, %%bx" : : : "%bx");
#define KernelPageDirStart 768
#define kernelPageStart 786432
#define fourKb 4096


#endif /* GLOBAL_H_ */
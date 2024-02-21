/* SPDX-License-Identifier: BSD-2-Clause OR GPL-2.0-only */
/*
 *  linux/lib/cobs-test.c
 *
 *  Consistent Overhead Byte Stuffing self test
 *
 *  Author:    Jevin Sweval
 *  Created:   Febuary 17, 2024
 *  Copyright: 2024 Jevin Sweval
 */

#include <linux/cobs.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init cobs_encode_test(void)
{
	int failed = 0;
	(void)cobs_encode(NULL, 0, NULL, 0);
	return failed;
}

static int __init cobs_decode_test(void)
{
	int failed = 0;
	(void)cobs_decode(NULL, 0, NULL, 0);
	return failed;
}


static int __init cobs_test_init(void)
{
	int res = 0;
	printk(KERN_DEBUG "COBS test module loading\n");

	res -= cobs_encode_test();
	res -= 2 * cobs_decode_test();

	printk(KERN_DEBUG "COBS test module result: %d\n", res);
	// 0 = pass
	// -1 = encode failed, decode passed
	// -2 = encode passed, decode failed
	// -3 = encode failled, decode failed
	// -4 = cobs module not built-in and failed to load
	return res;
}

module_init(cobs_test_init);

MODULE_DESCRIPTION("COBS encoding/decoding self test");
MODULE_AUTHOR("Jevin Sweval");
MODULE_LICENSE("Dual BSD/GPL");

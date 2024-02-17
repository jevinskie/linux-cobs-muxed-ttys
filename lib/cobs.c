/* SPDX-License-Identifier: BSD-2-Clause OR GPL-2.0-only */
/*
 *  linux/lib/cobs.c
 *
 *  Consistent Overhead Byte Stuffing
 *
 *  Author:    Jevin Sweval
 *  Created:   Febuary 17, 2024
 *  Copyright: 2024 Jevin Sweval
 */

#include <linux/cobs.h>
#include <linux/module.h>
#include <linux/init.h>

ssize_t cobs_encode(const u8 *in, ssize_t in_len, u8 *out, ssize_t *out_len)
{
	return -1;
}
EXPORT_SYMBOL(cobs_encode);

ssize_t cobs_decode(const u8 *in, ssize_t in_len, u8 *out, ssize_t *out_len) {
	return -1;
}
EXPORT_SYMBOL(cobs_decode);

MODULE_DESCRIPTION("COBS encoding/decoding");
MODULE_AUTHOR("Jevin Sweval");
MODULE_LICENSE("Dual BSD/GPL");

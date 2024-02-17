/* SPDX-License-Identifier: BSD-2-Clause OR GPL-2.0-only */
/*
 *  linux/include/linux/cobs.h
 *
 *  Consistent Overhead Byte Stuffing
 *
 *  Author:    Jevin Sweval
 *  Created:   Febuary 17, 2024
 *  Copyright: 2024 Jevin Sweval
 */

#ifndef _LINUX_COBS_H
#define _LINUX_COBS_H

#include <linux/types.h>

extern ssize_t cobs_encode(const u8 *in, ssize_t in_len, u8 *out, ssize_t *out_len);
extern ssize_t cobs_decode(const u8 *in, ssize_t in_len, u8 *out, ssize_t *out_len);

#endif // _LINUX_COBS_H

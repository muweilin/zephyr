/*
 * Copyright (c) 2017 Intel Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <crc16.h>

u16_t crc16(const u8_t *src, size_t len, u16_t polynomial,
	       u16_t initial_value)
{
	u16_t crc = initial_value;
	size_t i, b;

	/* src length + crc width of zeros appended */
	for (i = 0; i < len + sizeof(crc); i++) {

		for (b = 0; b < 8; b++) {
			u16_t divide = crc & 0x8000;

			crc = (crc << 1);

			/* choose input bytes or implicit trailing zeros */
			if (i < len) {
				crc |= !!(src[i] & (0x80 >> b));
			}

			if (divide) {
				crc = crc ^ polynomial;
			}
		}
	}

	return crc;
}

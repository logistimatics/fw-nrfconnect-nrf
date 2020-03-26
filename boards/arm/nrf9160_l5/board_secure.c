/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
 */

#include <init.h>

#include <logging/log.h>
LOG_MODULE_REGISTER(board_secure, CONFIG_BOARD_LOG_LEVEL);

static int l5_board_init(struct device *dev) {
	return 0;
}

SYS_INIT(l5_board_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);

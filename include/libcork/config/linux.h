/* -*- coding: utf-8 -*-
 * ----------------------------------------------------------------------
 * Copyright © 2011, RedJack, LLC.
 * All rights reserved.
 *
 * Please see the LICENSE.txt file in this distribution for license
 * details.
 * ----------------------------------------------------------------------
 */

#ifndef LIBCORK_CONFIG_LINUX_H
#define LIBCORK_CONFIG_LINUX_H

/**
 * @file
 * @brief Linux-specific configuration auto-detection
 */

#if !defined(CORK_DOCUMENTATION)


/*-----------------------------------------------------------------------
 * Endianness
 */

#include <endian.h>

#if __BYTE_ORDER == __BIG_ENDIAN
#define CORK_CONFIG_IS_BIG_ENDIAN      1
#define CORK_CONFIG_IS_LITTLE_ENDIAN   0
#elif __BYTE_ORDER == __LITTLE_ENDIAN
#define CORK_CONFIG_IS_BIG_ENDIAN      0
#define CORK_CONFIG_IS_LITTLE_ENDIAN   1
#else
#error "Cannot determine system endianness"
#endif


#endif /* !CORK_DOCUMENTATION */
#endif /* LIBCORK_CONFIG_LINUX_H */
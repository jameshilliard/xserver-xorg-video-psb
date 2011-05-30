/**************************************************************************
 *
 * Copyright (c) Intel Corp. 2007.
 * All Rights Reserved.
 *
 * Intel funded Tungsten Graphics (http://www.tungstengraphics.com) to
 * develop this driver.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDERS, AUTHORS AND/OR ITS SUPPLIERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 **************************************************************************/
/*
 */

#ifndef _PSB_DRI_H
#define _PSB_DRI_H

#include <inttypes.h>
#include "psb_drm.h"

#define PSB_DRIDDX_VERSION_MAJOR 0
#define PSB_DRIDDX_VERSION_MINOR 1
#define PSB_DRIDDX_VERSION_PATCH 0

typedef struct _PsbDriRec
{
    unsigned lockSAreaSize;	       /* Size of the lock-containing device sarea */
    drm_handle_t lockSAreaHandle;      /* Handle to the lock containing device sarea */
    unsigned sAreaSize;
    unsigned sAreaPrivOffset;
    /* Note: The two sareas may be the same. */
    unsigned pciVendor;		       /* Chip vendor */
    unsigned pciDevice;		       /* Chip device */
    unsigned cpp;		       /* For visual compatibility */
    unsigned exaBufHandle;	       /* Handle to exa offscreen buffer */
} PsbDRIRec, *PsbDRIPtr;

typedef struct _PsbDRIContextRec
{
    unsigned dummy;
} PsbDRIContextRec, *PsbDRIContextPtr;

typedef struct
{
    int dummy;
} PsbConfigPrivRec, *PsbConfigPrivPtr;
#endif

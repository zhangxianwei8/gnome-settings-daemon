/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2013 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

/* The blank delay when the screensaver is active */
#define SCREENSAVER_TIMEOUT_BLANK                       20 /* seconds */

/* The dim delay when dimming on idle is requested but idle-delay
 * is set to "Never" */
#define IDLE_DIM_BLANK_DISABLED_MIN                     60 /* seconds */

/* How much smaller than idle-delay the dim delay is */
#define IDLE_DELAY_TO_IDLE_DIM_FRACTION                  3

/* The dim delay under which we do not bother dimming */
#define MINIMUM_IDLE_DIM_DELAY                          10 /* seconds */
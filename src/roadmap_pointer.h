/* roadmap_pointer.h - Manage mouse/pointer events
 *
 * LICENSE:
 *
 *   Copyright 2005 Ehud Shabtai
 *
 *   This file is part of RoadMap.
 *
 *   RoadMap is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   RoadMap is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with RoadMap; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * DESCRIPTION:
 *
 */

#ifndef INCLUDED__ROADMAP_POINTER__H
#define INCLUDED__ROADMAP_POINTER__H

#include "roadmap_gui.h"


typedef void (*RoadMapPointerHandler)    (RoadMapGuiPoint *point);

void roadmap_pointer_initialize (void);

RoadMapPointerHandler
   roadmap_pointer_register_short_click (RoadMapPointerHandler handler);
RoadMapPointerHandler
   roadmap_pointer_register_long_click (RoadMapPointerHandler handler);
RoadMapPointerHandler
   roadmap_pointer_register_drag_start (RoadMapPointerHandler handler);
RoadMapPointerHandler
   roadmap_pointer_register_drag_motion (RoadMapPointerHandler handler);
RoadMapPointerHandler
   roadmap_pointer_register_drag_end (RoadMapPointerHandler handler);

/* These events are available only on desktops (mouse). */

RoadMapPointerHandler
   roadmap_pointer_register_middle_click (RoadMapPointerHandler handler);

RoadMapPointerHandler
   roadmap_pointer_register_right_click (RoadMapPointerHandler handler);

RoadMapPointerHandler
   roadmap_pointer_register_scroll_up (RoadMapPointerHandler handler);

RoadMapPointerHandler
   roadmap_pointer_register_scroll_down (RoadMapPointerHandler handler);

#endif // INCLUDED__ROADMAP_POINTER__H


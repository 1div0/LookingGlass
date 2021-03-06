/*
Looking Glass - KVM FrameRelay (KVMFR) Client
Copyright (C) 2017-2021 Geoffrey McRae <geoff@hostfission.com>
https://looking-glass.hostfission.com

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef _H_X11DS_ATOMS_
#define _H_X11DS_ATOMS_

#define DEF_ATOMS() \
  DEF_ATOM(_NET_REQUEST_FRAME_EXTENTS) \
  DEF_ATOM(_NET_FRAME_EXTENTS) \
  DEF_ATOM(_NET_WM_STATE) \
  DEF_ATOM(_NET_WM_STATE_FULLSCREEN) \
  DEF_ATOM(_NET_WM_STATE_MAXIMIZED_HORZ) \
  DEF_ATOM(_NET_WM_STATE_MAXIMIZED_VERT) \
  DEF_ATOM(_NET_WM_WINDOW_TYPE) \
  DEF_ATOM(_NET_WM_WINDOW_TYPE_NORMAL) \
  DEF_ATOM(_NET_WM_WINDOW_TYPE_UTILITY) \
  DEF_ATOM(WM_DELETE_WINDOW) \
  DEF_ATOM(_MOTIF_WM_HINTS) \
  \
  DEF_ATOM(CLIPBOARD) \
  DEF_ATOM(TARGETS) \
  DEF_ATOM(SEL_DATA) \
  DEF_ATOM(INCR)

#include <X11/Xlib.h>

#define DEF_ATOM(x) Atom x;
struct X11DSAtoms
{
  DEF_ATOMS()
};
#undef DEF_ATOM

extern struct X11DSAtoms x11atoms;

void X11AtomsInit(void);

#endif

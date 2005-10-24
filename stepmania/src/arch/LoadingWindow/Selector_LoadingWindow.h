#ifndef SELECTOR_LOADING_WINDOW_H
#define SELECTOR_LOADING_WINDOW_H

#include "arch/arch_platform.h"

/* LoadingWindow driver selector. */
#include "LoadingWindow_Null.h"

#if defined(__MACOSX__)
#include "LoadingWindow_Cocoa.h"

#elif defined(HAVE_GTK)
#include "LoadingWindow_Gtk.h"

#elif defined(HAVE_SDL)
#include "LoadingWindow_SDL.h"

#elif defined(WINDOWS)
#include "LoadingWindow_Win32.h"

#elif defined(HAVE_XDK)
#include "LoadingWindow_Xbox.h"
#endif

#endif

/*
 * (c) 2005 Ben Anderson
 * All rights reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, provided that the above
 * copyright notice(s) and this permission notice appear in all copies of
 * the Software and that both the above copyright notice(s) and this
 * permission notice appear in supporting documentation.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF
 * THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS
 * INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

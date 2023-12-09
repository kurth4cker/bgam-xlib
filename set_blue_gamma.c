#include <X11/Xlib.h>
#include <X11/extensions/xf86vmode.h>

#include "gamma.h"

void
set_blue_gamma(Display *dpy, int screen, float blue_gamma)
{
	XF86VidModeGamma gamma = { 0 };

	XF86VidModeGetGamma(dpy, screen, &gamma);
	gamma.blue = blue_gamma;
	XF86VidModeSetGamma(dpy, screen, &gamma);
}

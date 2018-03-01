#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;
#include <unistd.h>
#include <X11/Xlib.h>
//#include <X11/Xutil.h>
////#include <GL/gl.h>
////#include <GL/glu.h>
//#include <X11/keysym.h>
//#include <GL/glx.h>
//#include "log.h"
#include "fonts.h"

void showCesarL() {
    Rect r;
    r.bot = 500;
    r.center = 0;
    r.left = 600;
    ggprint16(&r, 16, 0xff00ff, "Cesar Lara");
}

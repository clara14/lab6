#include <GL/glx.h>
#include "fonts.h"

void showCesarL() {
    Rect r;
    r.bot = 220;
    r.center = 20;
    r.left = 312;
    ggprint16(&r, 16, 0x0000ff, "Cesar Lara");
}

void drawBox(int x, int y) {
    static float angle = 0.0;
    glColor3f(255.0f, 0.0f, 255.0f);
    glPushMatrix();
    glTranslatef(x, y, 0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    angle = angle + 2.5;
    glBegin(GL_QUADS);
    	glVertex2f(-60.0f, 60.0f);
	glVertex2f(-60.0f, -60.0f);
	glVertex2f(60.0f, -60.0f);
	glVertex2f(60.0f, 60.0f);
    glEnd();
    Rect r;
    r.bot = 0;
    r.center = 10;
    r.left = 0;
    ggprint16(&r, 16, 0x0000ff, "Cesar Lara");
    glPopMatrix();
}

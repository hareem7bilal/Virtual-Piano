#include <windows.h>
#include <string.h>
#include <stdio.h>
#include "glut.h"
#include <stdlib.h>
#include <time.h>
#include <MMSystem.h>

void keyboard(unsigned char, int, int);

float p = 0.1, q = 0, r = 0.1, a = 1, b = 0, c = 0, d = 0, c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0,
ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0, ad4 = 0.0,
af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0, ag6 = 0.0,
aa6 = 0.0;
int angle1 = 0, angle2 = 0;

void idle() {
    angle1 += 2;
    angle2 += 4;

    glutPostRedisplay();
}
void color(int value) {
    p = p - 0.1;
    q = q + 0.1;
    r = r + 0.1;
    glutTimerFunc(70, color, 0);
}

void frontscreen()
{
    glPushMatrix();
    glRotatef(angle1, 0, 0, 1);
    glBegin(GL_POLYGON);
    glColor3f(p, q, r);
    glVertex2f(-1.35, -1.35);
    glVertex2f(-1.35, 1.35);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2f(1.35, 1.35);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(1.35, -1.35);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(angle2, 0, 1, 0);
    char msg0[] = "Keyboard Piano";
    glTranslatef(-0.7, 0.5, 0);
    glScalef(0.0015, 0.0015, 0.0015);
    glColor3f(1, 1, 1);
    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);
    glLineWidth(3.0);
    for (int i = 0; i < strlen(msg0); i++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN, msg0[i]);
    glPopMatrix();

    glPushMatrix();
    char msg1[] = "By Hareem Bilal";
    glTranslatef(-0.25, 0.2, 0);
    glScalef(0.00055, 0.00055, 0.00055);
    glColor3f(1, 1, 1);
    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);
    glLineWidth(1.0);
    for (int i = 0; i < strlen(msg1); i++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN, msg1[i]);
    glPopMatrix();

    glColor3f(1, 1, 1);
    glRasterPos2f(-0.1, -0.5);
    char msg3[] = "Press Enter to start";
    for (int i = 0; i < strlen(msg3); i++)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg3[i]);
    glutSwapBuffers();

}


void C2() {
    glBegin(GL_POLYGON);
    glColor3f(c2, c2, c2); // white
    glVertex2f(-0.975f, -0.35f);
    glVertex2f(-0.975f, 0.2f);
    glVertex2f(-0.925f, 0.2f);
    glVertex2f(-0.925f, -0.35f);
    glEnd();
}
void D2() {
    glBegin(GL_POLYGON);
    glColor3f(d2, d2, d2); // white
    glVertex2f(-0.92f, -0.35f);
    glVertex2f(-0.92f, 0.2f);
    glVertex2f(-0.87f, 0.2f);
    glVertex2f(-0.87f, -0.35f);
    glEnd();
}
void E2() {
    glBegin(GL_POLYGON);
    glColor3f(e2, e2, e2); // white
    glVertex2f(-0.865f, -0.35f);
    glVertex2f(-0.865f, 0.2f);
    glVertex2f(-0.815f, 0.2f);
    glVertex2f(-0.815f, -0.35f);
    glEnd();
}
void F2() {
    glBegin(GL_POLYGON);
    glColor3f(f2, f2, f2); // white
    glVertex2f(-0.81f, -0.35f);
    glVertex2f(-0.81f, 0.2f);
    glVertex2f(-0.76f, 0.2f);
    glVertex2f(-0.76f, -0.35f);
    glEnd();
}
void G2() {
    glBegin(GL_POLYGON);
    glColor3f(g2, g2, g2); // white
    glVertex2f(-0.755f, -0.35f);
    glVertex2f(-0.755f, 0.2f);
    glVertex2f(-0.705f, 0.2f);
    glVertex2f(-0.705f, -0.35f);
    glEnd();
}
void A2() {
    glBegin(GL_POLYGON);
    glColor3f(a2, a2, a2); // white
    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.65f, 0.2f);
    glVertex2f(-0.65f, -0.35f);
    glEnd();
}
void B2() {
    glBegin(GL_POLYGON);
    glColor3f(b2, b2, b2); // white
    glVertex2f(-0.645f, -0.35f);
    glVertex2f(-0.645f, 0.2f);
    glVertex2f(-0.595f, 0.2f);
    glVertex2f(-0.595f, -0.35f);
    glEnd();
}
void C3() {
    glBegin(GL_POLYGON);
    glColor3f(c3, c3, c3); // white
    glVertex2f(-0.59f, -0.35f);
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.54f, 0.2f);
    glVertex2f(-0.54f, -0.35f);
    glEnd();
}
void D3() {
    glBegin(GL_POLYGON);
    glColor3f(d3, d3, d3); // white
    glVertex2f(-0.535f, -0.35f);
    glVertex2f(-0.535f, 0.2f);
    glVertex2f(-0.485f, 0.2f);
    glVertex2f(-0.485f, -0.35f);
    glEnd();
}
void E3() {
    glBegin(GL_POLYGON);
    glColor3f(e3, e3, e3); // white
    glVertex2f(-0.48f, -0.35f);
    glVertex2f(-0.48f, 0.2f);
    glVertex2f(-0.43f, 0.2f);
    glVertex2f(-0.43f, -0.35f);
    glEnd();
}
void F3() {
    glBegin(GL_POLYGON);
    glColor3f(f3, f3, f3); // white
    glVertex2f(-0.425f, -0.35f);
    glVertex2f(-0.425f, 0.2f);
    glVertex2f(-0.375f, 0.2f);
    glVertex2f(-0.375f, -0.35f);
    glEnd();
}
void G3() {
    glBegin(GL_POLYGON);
    glColor3f(g3, g3, g3); // white
    glVertex2f(-0.37f, -0.35f);
    glVertex2f(-0.37f, 0.2f);
    glVertex2f(-0.32f, 0.2f);
    glVertex2f(-0.32f, -0.35f);
    glEnd();
}
void A3() {
    glBegin(GL_POLYGON);
    glColor3f(a3, a3, a3); // white
    glVertex2f(-0.315f, -0.35f);
    glVertex2f(-0.315f, 0.2f);
    glVertex2f(-0.265f, 0.2f);
    glVertex2f(-0.265f, -0.35f);
    glEnd();
}
void B3() {
    glBegin(GL_POLYGON);
    glColor3f(b3, b3, b3); // white
    glVertex2f(-0.26f, -0.35f);
    glVertex2f(-0.26f, 0.2f);
    glVertex2f(-0.21f, 0.2f);
    glVertex2f(-0.21f, -0.35f);
    glEnd();
}
void C4() {
    glBegin(GL_POLYGON);
    glColor3f(c4, c4, c4); // white
    glVertex2f(-0.205f, -0.35f);
    glVertex2f(-0.205f, 0.2f);
    glVertex2f(-0.155f, 0.2f);
    glVertex2f(-0.155f, -0.35f);
    glEnd();
}
void D4() {
    glBegin(GL_POLYGON);
    glColor3f(d4, d4, d4); // white
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.1f, -0.35f);
    glEnd();
}
void E4() {
    glBegin(GL_POLYGON);
    glColor3f(e4, e4, e4); // white
    glVertex2f(-0.095f, -0.35f);
    glVertex2f(-0.095f, 0.2f);
    glVertex2f(-0.045f, 0.2f);
    glVertex2f(-0.045f, -0.35f);
    glEnd();
}
void F4() {
    glBegin(GL_POLYGON);
    glColor3f(f4, f4, f4); // white
    glVertex2f(-0.04f, -0.35f);
    glVertex2f(-0.04f, 0.2f);
    glVertex2f(0.01f, 0.2f);
    glVertex2f(0.01f, -0.35f);
    glEnd();
}
void G4() {
    glBegin(GL_POLYGON);
    glColor3f(g4, g4, g4); // white
    glVertex2f(0.015f, -0.35f);
    glVertex2f(0.015f, 0.2f);
    glVertex2f(0.065f, 0.2f);
    glVertex2f(0.065f, -0.35f);
    glEnd();
}
void A4() {
    glBegin(GL_POLYGON);
    glColor3f(a4, a4, a4); // white
    glVertex2f(0.07f, -0.35f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.12f, 0.2f);
    glVertex2f(0.12f, -0.35f);
    glEnd();
}
void B4() {
    glBegin(GL_POLYGON);
    glColor3f(b4, b4, b4); // white
    glVertex2f(0.125f, -0.35f);
    glVertex2f(0.125f, 0.2f);
    glVertex2f(0.175f, 0.2f);
    glVertex2f(0.175f, -0.35f);
    glEnd();
}
void C5() {
    glBegin(GL_POLYGON);
    glColor3f(c5, c5, c5); // white
    glVertex2f(0.18f, -0.35f);
    glVertex2f(0.18f, 0.2f);
    glVertex2f(0.23f, 0.2f);
    glVertex2f(0.23f, -0.35f);
    glEnd();
}
void D5() {
    glBegin(GL_POLYGON);
    glColor3f(d5, d5, d5); // white
    glVertex2f(0.235f, -0.35f);
    glVertex2f(0.235f, 0.2f);
    glVertex2f(0.285f, 0.2f);
    glVertex2f(0.285f, -0.35f);
    glEnd();
}
void E5() {
    glBegin(GL_POLYGON);
    glColor3f(e5, e5, e5); // white
    glVertex2f(0.29f, -0.35f);
    glVertex2f(0.29f, 0.2f);
    glVertex2f(0.34f, 0.2f);
    glVertex2f(0.34f, -0.35f);
    glEnd();
}
void F5() {
    glBegin(GL_POLYGON);
    glColor3f(f5, f5, f5); // white
    glVertex2f(0.345f, -0.35f);
    glVertex2f(0.345f, 0.2f);
    glVertex2f(0.395f, 0.2f);
    glVertex2f(0.395f, -0.35f);
    glEnd();
}
void G5() {
    glBegin(GL_POLYGON);
    glColor3f(g5, g5, g5); // white
    glVertex2f(0.4f, -0.35f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.45f, 0.2f);
    glVertex2f(0.45f, -0.35f);
    glEnd();
}
void A5() {
    glBegin(GL_POLYGON);
    glColor3f(a5, a5, a5); // white
    glVertex2f(0.455f, -0.35f);
    glVertex2f(0.455f, 0.2f);
    glVertex2f(0.505f, 0.2f);
    glVertex2f(0.505f, -0.35f);
    glEnd();
}
void B5() {
    glBegin(GL_POLYGON);
    glColor3f(b5, b5, b5); // white
    glVertex2f(0.51f, -0.35f);
    glVertex2f(0.51f, 0.2f);
    glVertex2f(0.56f, 0.2f);
    glVertex2f(0.56f, -0.35f);
    glEnd();
}
void C6() {
    glBegin(GL_POLYGON);
    glColor3f(c6, c6, c6); // white
    glVertex2f(0.565f, -0.35f);
    glVertex2f(0.565f, 0.2f);
    glVertex2f(0.615f, 0.2f);
    glVertex2f(0.615f, -0.35f);
    glEnd();
}
void D6() {
    glBegin(GL_POLYGON);
    glColor3f(d6, d6, d6); // white
    glVertex2f(0.62f, -0.35f);
    glVertex2f(0.62f, 0.2f);
    glVertex2f(0.67f, 0.2f);
    glVertex2f(0.67f, -0.35f);
    glEnd();
}
void E6() {
    glBegin(GL_POLYGON);
    glColor3f(e6, e6, e6); // white
    glVertex2f(0.675f, -0.35f);
    glVertex2f(0.675f, 0.2f);
    glVertex2f(0.725f, 0.2f);
    glVertex2f(0.725f, -0.35f);
    glEnd();
}
void F6() {
    glBegin(GL_POLYGON);
    glColor3f(f6, f6, f6); // white
    glVertex2f(0.73f, -0.35f);
    glVertex2f(0.73f, 0.2f);
    glVertex2f(0.78f, 0.2f);
    glVertex2f(0.78f, -0.35f);
    glEnd();
}
void G6() {
    glBegin(GL_POLYGON);
    glColor3f(g6, g6, g6); // white
    glVertex2f(0.785f, -0.35f);
    glVertex2f(0.785f, 0.2f);
    glVertex2f(0.835f, 0.2f);
    glVertex2f(0.835f, -0.35f);
    glEnd();
}
void A6() {
    glBegin(GL_POLYGON);
    glColor3f(a6, a6, a6); // white
    glVertex2f(0.839f, -0.35f);
    glVertex2f(0.839f, 0.2f);
    glVertex2f(0.879f, 0.2f);
    glVertex2f(0.879f, -0.35f);
    glEnd();
}
void B6() {
    glBegin(GL_POLYGON);
    glColor3f(b6, b6, b6); // white
    glVertex2f(0.883f, -0.35f);
    glVertex2f(0.883f, 0.2f);
    glVertex2f(0.923f, 0.2f);
    glVertex2f(0.923f, -0.35f);
    glEnd();
}
void C7() {
    glBegin(GL_POLYGON);
    glColor3f(c7, c7, c7); // white
    glVertex2f(0.928f, -0.35f);
    glVertex2f(0.928f, 0.2f);
    glVertex2f(0.975f, 0.2f);
    glVertex2f(0.975f, -0.35f);
    glEnd();
}
void accidentalC2() {
    glBegin(GL_POLYGON);
    glColor3f(ac2, ac2, ac2); // black
    glVertex2f(-0.91f, -0.15f);
    glVertex2f(-0.91f, 0.2f);
    glVertex2f(-0.94f, 0.2f);
    glVertex2f(-0.94f, -0.15f);
    glEnd();
}
void accidentalD2() {
    glBegin(GL_POLYGON);
    glColor3f(ad2, ad2, ad2); // black
    glVertex2f(-0.855f, -0.15f);
    glVertex2f(-0.855f, 0.2f);
    glVertex2f(-0.885f, 0.2f);
    glVertex2f(-0.885f, -0.15f);
    glEnd();
}
void accidentalF2() {
    glBegin(GL_POLYGON);
    glColor3f(af2, af2, af2); // black
    glVertex2f(-0.745f, -0.15f);
    glVertex2f(-0.745f, 0.2f);
    glVertex2f(-0.775f, 0.2f);
    glVertex2f(-0.775f, -0.15f);
    glEnd();
}
void accidentalG2() {
    glBegin(GL_POLYGON);
    glColor3f(ag2, ag2, ag2); // black
    glVertex2f(-0.69f, -0.15f);
    glVertex2f(-0.69f, 0.2f);
    glVertex2f(-0.72f, 0.2f);
    glVertex2f(-0.72f, -0.15f);
    glEnd();
}
void accidentalA2() {
    glBegin(GL_POLYGON);
    glColor3f(aa2, aa2, aa2); // black
    glVertex2f(-0.635f, -0.15f);
    glVertex2f(-0.635f, 0.2f);
    glVertex2f(-0.665f, 0.2f);
    glVertex2f(-0.665f, -0.15f);
    glEnd();
}
void accidentalC3() {
    glBegin(GL_POLYGON);
    glColor3f(ac3, ac3, ac3); // black
    glVertex2f(-0.525f, -0.15f);
    glVertex2f(-0.525f, 0.2f);
    glVertex2f(-0.555f, 0.2f);
    glVertex2f(-0.555f, -0.15f);
    glEnd();
}
void accidentalD3() {
    glBegin(GL_POLYGON);
    glColor3f(ad3, ad3, ad3); // black
    glVertex2f(-0.47f, -0.15f);
    glVertex2f(-0.47f, 0.2f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.5f, -0.15f);
    glEnd();
}
void accidentalF3() {
    glBegin(GL_POLYGON);
    glColor3f(af3, af3, af3); // black
    glVertex2f(-0.36f, -0.15f);
    glVertex2f(-0.36f, 0.2f);
    glVertex2f(-0.39f, 0.2f);
    glVertex2f(-0.39f, -0.15f);
    glEnd();
}
void accidentalG3() {
    glBegin(GL_POLYGON);
    glColor3f(ag3, ag3, ag3); // black
    glVertex2f(-0.305f, -0.15f);
    glVertex2f(-0.305f, 0.2f);
    glVertex2f(-0.335f, 0.2f);
    glVertex2f(-0.335f, -0.15f);
    glEnd();
}
void accidentalA3() {
    glBegin(GL_POLYGON);
    glColor3f(aa3, aa3, aa3); // black
    glVertex2f(-0.25f, -0.15f);
    glVertex2f(-0.25f, 0.2f);
    glVertex2f(-0.28f, 0.2f);
    glVertex2f(-0.28f, -0.15f);
    glEnd();
}
void accidentalC4() {
    glBegin(GL_POLYGON);
    glColor3f(ac4, ac4, ac4); // black
    glVertex2f(-0.14f, -0.15f);
    glVertex2f(-0.14f, 0.2f);
    glVertex2f(-0.17f, 0.2f);
    glVertex2f(-0.17f, -0.15f);
    glEnd();
}
void accidentalD4() {
    glBegin(GL_POLYGON);
    glColor3f(ad4, ad4, ad4); // black
    glVertex2f(-0.085f, -0.15f);
    glVertex2f(-0.085f, 0.2f);
    glVertex2f(-0.115f, 0.2f);
    glVertex2f(-0.115f, -0.15f);
    glEnd();
}
void accidentalF4() {
    glBegin(GL_POLYGON);
    glColor3f(af4, af4, af4); // black
    glVertex2f(-0.005f, -0.15f);
    glVertex2f(-0.005f, 0.2f);
    glVertex2f(0.025f, 0.2f);
    glVertex2f(0.025f, -0.15f);
    glEnd();
}
void accidentalG4() {
    glBegin(GL_POLYGON);
    glColor3f(ag4, ag4, ag4); // black
    glVertex2f(0.05f, -0.15f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.08f, 0.2f);
    glVertex2f(0.08f, -0.15f);
    glEnd();
}
void accidentalA4() {
    glBegin(GL_POLYGON);
    glColor3f(aa4, aa4, aa4); // black
    glVertex2f(0.105f, -0.15f);
    glVertex2f(0.105f, 0.2f);
    glVertex2f(0.135f, 0.2f);
    glVertex2f(0.135f, -0.15f);
    glEnd();
}
void accidentalC5() {
    glBegin(GL_POLYGON);
    glColor3f(ac5, ac5, ac5); // black                         
    glVertex2f(0.215f, -0.15f);
    glVertex2f(0.215f, 0.2f);
    glVertex2f(0.245f, 0.2f);
    glVertex2f(0.245f, -0.15f);
    glEnd();
}
void accidentalD5() {
    glBegin(GL_POLYGON);
    glColor3f(ad5, ad5, ad5); // black                         
    glVertex2f(0.27f, -0.15f);
    glVertex2f(0.27f, 0.2f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.3f, -0.15f);
    glEnd();
}
void accidentalF5() {
    glBegin(GL_POLYGON);
    glColor3f(af5, af5, af5); // black                         
    glVertex2f(0.38f, -0.15f);
    glVertex2f(0.38f, 0.2f);
    glVertex2f(0.41f, 0.2f);
    glVertex2f(0.41f, -0.15f);
    glEnd();
}
void accidentalG5() {
    glBegin(GL_POLYGON);
    glColor3f(ag5, ag5, ag5); // black                         
    glVertex2f(0.435f, -0.15f);
    glVertex2f(0.435f, 0.2f);
    glVertex2f(0.465f, 0.2f);
    glVertex2f(0.465f, -0.15f);
    glEnd();
}
void accidentalA5() {
    glBegin(GL_POLYGON);
    glColor3f(aa5, aa5, aa5); // black                         
    glVertex2f(0.49f, -0.15f);
    glVertex2f(0.49f, 0.2f);
    glVertex2f(0.52f, 0.2f);
    glVertex2f(0.52f, -0.15f);
    glEnd();
}
void accidentalC6() {
    glBegin(GL_POLYGON);
    glColor3f(ac6, ac6, ac6); // black                         
    glVertex2f(0.6f, -0.15f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.63f, 0.2f);
    glVertex2f(0.63f, -0.15f);
    glEnd();
}
void accidentalD6() {
    glBegin(GL_POLYGON);
    glColor3f(ad6, ad6, ad6); // black                         
    glVertex2f(0.655f, -0.15f);
    glVertex2f(0.655f, 0.2f);
    glVertex2f(0.685f, 0.2f);
    glVertex2f(0.685f, -0.15f);
    glEnd();
}
void accidentalF6() {
    glBegin(GL_POLYGON);
    glColor3f(af6, af6, af6); // black                         
    glVertex2f(0.765f, -0.15f);
    glVertex2f(0.765f, 0.2f);
    glVertex2f(0.795f, 0.2f);
    glVertex2f(0.795f, -0.15f);
    glEnd();
}
void accidentalG6() {
    glBegin(GL_POLYGON);
    glColor3f(ag6, ag6, ag6); // black                         
    glVertex2f(0.82f, -0.15f);
    glVertex2f(0.82f, 0.2f);
    glVertex2f(0.85f, 0.2f);
    glVertex2f(0.85f, -0.15f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1, 1, 1);
    glVertex2f(-0.15, 0.75);
    glVertex2f(0.15, 0.75);
    glVertex2f(0.15, 0.55);
    glVertex2f(-0.15, 0.55);
    glEnd();
}
void keylabel(char label[], float x, float y) {
    glColor3f(1, 0, 0);
    glRasterPos2f(x, y);
    for (int i = 0; i < strlen(label); i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, label[i]);

}
void accidentalA6() {
    glBegin(GL_POLYGON);
    glColor3f(aa6, aa6, aa6); // black                         
    glVertex2f(0.868f, -0.15f);
    glVertex2f(0.868f, 0.2f);
    glVertex2f(0.897f, 0.2f);
    glVertex2f(0.897f, -0.15f);
    glEnd();

    keylabel("1/C2", -0.975, -0.25);
    keylabel("2/D2", -0.919, -0.3);
    keylabel("3/E2", -0.863, -0.25);
    keylabel("4/F2", -0.807, -0.3);
    keylabel("5/G2", -0.751, -0.25);
    keylabel("6/A2", -0.695, -0.3);
    keylabel("7/B2", -0.641, -0.25);
    keylabel("8/C3", -0.587, -0.3);
    keylabel("9/D3", -0.533, -0.25);
    keylabel("0/E3", -0.479, -0.3);
    keylabel("q/F3", -0.425, -0.25);
    keylabel("w/G3", -0.371, -0.3);
    keylabel("e/A3", -0.317, -0.25);
    keylabel("r/B3", -0.263, -0.3);
    keylabel("t/C4", -0.209, -0.25);
    keylabel("y/D4", -0.155, -0.3);
    keylabel("u/E4", -0.101, -0.25);
    keylabel("i/F4", -0.047, -0.3);
    keylabel("o/G4", 0.007, -0.25);
    keylabel("p/A4", 0.063, -0.3);
    keylabel("a/B4", 0.119, -0.25);
    keylabel("s/C5", 0.175, -0.3);
    keylabel("d/D5", 0.231, -0.25);
    keylabel("f/E5", 0.287, -0.3);
    keylabel("g/F5", 0.343, -0.25);
    keylabel("h/G5", 0.399, -0.3);
    keylabel("j/A5", 0.455, -0.25);
    keylabel("k/B5", 0.511, -0.3);
    keylabel("l/C6", 0.567, -0.25);
    keylabel("z/D6", 0.623, -0.3);
    keylabel("x/E6", 0.677, -0.25);
    keylabel("c/F6", 0.731, -0.3);
    keylabel("v/G6", 0.785, -0.25);
    keylabel("b/A6", 0.839, -0.3);
    keylabel("n/B6", 0.885, -0.25);
    keylabel("m/C7", 0.931, -0.3);

    keylabel("!/C#2", -0.97, 0);
    keylabel("@/D#2", -0.91, -0.07);
    keylabel("$/F#2", -0.8, 0);
    keylabel("%/G#2", -0.75, -0.07);
    keylabel("^/A#2", -0.68, 0);
    keylabel("*/C#3", -0.58, -0.07);
    keylabel("(/D#3", -0.5, -0.07);
    keylabel("Q/F#3", -0.42, 0);
    keylabel("W/G#3", -0.36, -0.07);
    keylabel("E/A#3", -0.3, 0);
    keylabel("T/C#4", -0.2, -0.07);
    keylabel("Y/D#4", -0.14, 0);
    keylabel("I/F#4", -0.02, -0.07);
    keylabel("O/G#4", 0.025, 0);
    keylabel("P/A#4", 0.08, -0.07);
    keylabel("S/C#5", 0.19, -0.07);
    keylabel("D/D#5", 0.25, 0);
    keylabel("G/F#5", 0.35, -0.07);
    keylabel("H/G#5", 0.41, 0);
    keylabel("J/A#5", 0.48, -0.07);
    keylabel("L/C#6", 0.58, 0);
    keylabel("Z/D#6", 0.63, -0.07);
    keylabel("C/F#6", 0.74, 0);
    keylabel("V/G#6", 0.8, -0.07);
    keylabel("B/A#6", 0.86, 0);
    glutSwapBuffers();

}
void msg(float x, float y, float m, float k, float p, float q, float r, char msg[]) {
    glTranslatef(x, y, 0);
    glScalef(m, m, m);
    glColor3f(p, q, r);
    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);
    glLineWidth(k);
    for (int i = 0; i < strlen(msg); i++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN, msg[i]);
}
void piano_screen_msg() {
    glPushMatrix();
    msg(-0.48, -0.6, 0.00035, 1.7, 0.1, 0, 0.1, "Play a tune: hold down enter, and select");
    glPopMatrix();
    glPushMatrix();
    msg(-0.15, -0.67, 0.00025, 0.7, 1, 1, 1, "1. Fur Elise");
    glPopMatrix();
    glPushMatrix();
    msg(-0.15, -0.72, 0.00025, 0.7, 1, 1, 1, "2. Twinkle Twinkle Little Star");
    glPopMatrix();
    glPushMatrix();
    msg(-0.15, -0.77, 0.00025, 0.7, 1, 1, 1, "3. Happy Birthday");
    glPopMatrix();
    glPushMatrix();
    msg(-0.15, -0.82, 0.00025, 0.7, 1, 1, 1, "4. London bridge is falling down");
    glPopMatrix();
    glPushMatrix();
    msg(-0.3, -0.92, 0.00035, 1.7, 0.1, 0, 0.1, "Key assist: hold down X");
    glPopMatrix();
}
void drawrect() {
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, -0.55);
    glVertex2f(0.48, -0.55);
    glVertex2f(0.48, -0.97);
    glVertex2f(-0.5, -0.97);
    glEnd();
}


void display1() {

    glClearColor(a, b, c, d);
    glClear(GL_COLOR_BUFFER_BIT);

    piano_screen_msg();
    drawrect();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); // black
    glVertex2f(-0.985f, -0.5f);
    glVertex2f(-0.985f, 0.5f);
    glVertex2f(0.985f, 0.5f);
    glVertex2f(0.985f, -0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f); // grey
    glVertex2f(-0.975f, -0.45f);
    glVertex2f(-0.975f, 0.2f);
    glVertex2f(0.975f, 0.2f);
    glVertex2f(0.975f, -0.45f);
    glEnd();
    C2();
    D2();
    E2();
    F2();
    G2();
    A2();
    B2();
    C3();
    D3();
    E3();
    F3();
    G3();
    A3();
    B3();
    C4();
    D4();
    E4();
    F4();
    G4();
    A4();
    B4();
    C5();
    D5();
    E5();
    F5();
    G5();
    A5();
    B5();
    C6();
    D6();
    E6();
    F6();
    G6();
    A6();
    B6();
    C7();
    accidentalC2();
    accidentalD2();
    accidentalF2();
    accidentalG2();
    accidentalA2();
    accidentalC3();
    accidentalD3();
    accidentalF3();
    accidentalG3();
    accidentalA3();
    accidentalC4();
    accidentalD4();
    accidentalF4();
    accidentalG4();
    accidentalA4();
    accidentalC5();
    accidentalD5();
    accidentalF5();
    accidentalG5();
    accidentalA5();
    accidentalC6();
    accidentalD6();
    accidentalF6();
    accidentalG6();
    glBegin(GL_POLYGON);
    glColor3f(aa6, aa6, aa6); // black                         
    glVertex2f(0.868f, -0.15f);
    glVertex2f(0.868f, 0.2f);
    glVertex2f(0.897f, 0.2f);
    glVertex2f(0.897f, -0.15f);
    glEnd();
    glutSwapBuffers();
    glutKeyboardFunc(keyboard);

}
void display2() {


    glClearColor(a, b, c, d);
    glClear(GL_COLOR_BUFFER_BIT);
    drawrect();
    piano_screen_msg();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f); // black
    glVertex2f(-0.985f, -0.5f);
    glVertex2f(-0.985f, 0.5f);
    glVertex2f(0.985f, 0.5f);
    glVertex2f(0.985f, -0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.1f, 0.1f); // grey
    glVertex2f(-0.975f, -0.45f);
    glVertex2f(-0.975f, 0.2f);
    glVertex2f(0.975f, 0.2f);
    glVertex2f(0.975f, -0.45f);
    glEnd();
    C2();
    D2();
    E2();
    F2();
    G2();
    A2();
    B2();
    C3();
    D3();
    E3();
    F3();
    G3();
    A3();
    B3();
    C4();
    D4();
    E4();
    F4();
    G4();
    A4();
    B4();
    C5();
    D5();
    E5();
    F5();
    G5();
    A5();
    B5();
    C6();
    D6();
    E6();
    F6();
    G6();
    A6();
    B6();
    C7();
    accidentalC2();
    accidentalD2();
    accidentalF2();
    accidentalG2();
    accidentalA2();
    accidentalC3();
    accidentalD3();
    accidentalF3();
    accidentalG3();
    accidentalA3();
    accidentalC4();
    accidentalD4();
    accidentalF4();
    accidentalG4();
    accidentalA4();
    accidentalC5();
    accidentalD5();
    accidentalF5();
    accidentalG5();
    accidentalA5();
    accidentalC6();
    accidentalD6();
    accidentalF6();
    accidentalG6();
    accidentalA6();
    glutSwapBuffers();

}
void update(int value)
{
    p = p - 0.1;
    q = q + 0.1;
    r = r + 0.1;
    if (a == 1 && b == 0 && c == 0 && d == 0) {
        a = 0;
        b = 1;
        c = 0;
        d = 0;
    }
    else if (a == 0 && b == 1 && c == 0 && d == 0) {
        a = 1;
        b = 0;
        c = 1;
        d = 0;
    }
    else if (a == 1 && b == 0 && c == 1 && d == 0) {
        a = 0;
        b = 0;
        c = 1;
        d = 0;
    }
    else {
        a = 1;
        b = 0;
        c = 0;
        d = 0;
    }
    glutPostRedisplay();
    glutTimerFunc(900, update, 0);
}

void start(unsigned char key, int x, int y) {
    if (key == 13)
    {
        glutDisplayFunc(display1);
        PlaySound(TEXT("chime (1).wav"), NULL, SND_ASYNC | SND_FILENAME);
    }
    glutPostRedisplay();
}


void thinrect(float a, float b, float c, float x, float y, float m, float n) {
    glBegin(GL_POLYGON);
    glColor3f(a, b, c);
    glVertex2f(x, m);
    glVertex2f(x, n);
    glVertex2f(y, n);
    glVertex2f(y, m);
    glEnd();
}
void repeat() {

    Beep(659, 300);
    thinrect(1, 0, 0, -0.455, -0.43, -0.35, 0.2);
    thinrect(0, 0, 0, -0.47, -0.485, -0.15, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(622, 300);
    thinrect(1, 1, 1, -0.455, -0.43, -0.35, 0.2);
    thinrect(1, 0, 0, -0.47, -0.485, -0.15, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(659, 300);
    thinrect(1, 0, 0, -0.455, -0.43, -0.35, 0.2);
    thinrect(0, 0, 0, -0.47, -0.485, -0.15, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(494, 300);
    thinrect(1, 1, 1, -0.455, -0.43, -0.35, 0.2);
    thinrect(1, 0, 0, -0.21, -0.235, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(587, 300);
    thinrect(1, 1, 1, -0.21, -0.235, -0.35, 0.2);
    thinrect(1, 0, 0, -0.5, -0.515, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(523, 300);
    thinrect(1, 1, 1, -0.5, -0.515, -0.35, 0.2);
    thinrect(1, 0, 0, -0.565, -0.59, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(440, 300);
    thinrect(1, 1, 1, -0.565, -0.59, -0.35, 0.2);
    thinrect(1, 0, 0, -0.3, -0.28, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(262, 300);
    thinrect(1, 1, 1, -0.3, -0.28, -0.35, 0.2);
    thinrect(1, 0, 0, -0.95, -0.975, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(330, 300);
    thinrect(1, 1, 1, -0.95, -0.975, -0.35, 0.2);
    thinrect(1, 0, 0, -0.045, -0.07, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(440, 300);
    thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
    thinrect(1, 0, 0, -0.3, -0.28, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(494, 300);
    thinrect(1, 1, 1, -0.3, -0.28, -0.35, 0.2);
    thinrect(1, 0, 0, -0.21, -0.235, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(330, 300);
    thinrect(1, 1, 1, -0.21, -0.235, -0.35, 0.2);
    thinrect(1, 0, 0, -0.045, -0.07, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
}
void FurElise() {
    thinrect(1, 0, 0, -0.455, -0.43, -0.35, 0.2);
    Beep(659, 300);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(622, 300);
    thinrect(1, 1, 1, -0.455, -0.43, -0.35, 0.2);
    thinrect(1, 0, 0, -0.47, -0.485, -0.15, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    repeat();
    Beep(415, 300);
    thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
    thinrect(1, 0, 0, -0.69, -0.705, -0.15, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(494, 300);
    thinrect(0, 0, 0, -0.69, -0.705, -0.15, 0.2);
    thinrect(1, 0, 0, -0.21, -0.235, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(523, 300);
    thinrect(1, 1, 1, -0.21, -0.235, -0.35, 0.2);
    thinrect(1, 0, 0, -0.565, -0.59, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(330, 300);
    thinrect(1, 1, 1, -0.565, -0.59, -0.35, 0.2);
    thinrect(1, 0, 0, -0.045, -0.07, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(659, 300);
    thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
    thinrect(1, 0, 0, -0.455, -0.43, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(622, 300);
    thinrect(1, 1, 1, -0.455, -0.43, -0.35, 0.2);
    thinrect(1, 0, 0, -0.47, -0.485, -0.15, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    repeat();
    Beep(523, 300);
    thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
    thinrect(1, 0, 0, -0.565, -0.59, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(494, 300);
    thinrect(1, 1, 1, -0.565, -0.59, -0.35, 0.2);
    thinrect(1, 0, 0, -0.21, -0.235, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
    Beep(440, 600);
    thinrect(1, 1, 1, -0.21, -0.235, -0.35, 0.2);
    thinrect(1, 0, 0, -0.3, -0.28, -0.35, 0.2);
    glutSwapBuffers();
    glutPostRedisplay();
}
void keydisplay(char name[]) {
    glPushMatrix();
    glTranslatef(-0.07, 0.63, 0);
    glScalef(0.0008, 0.0008, 0.0008);
    glColor3f(0, 0, 0);
    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);
    glLineWidth(3.5);
    for (int i = 0; i < strlen(name); i++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN, name[i]);
    glPopMatrix();
    glutSwapBuffers();
}

void choice(unsigned char key, int x, int y) {
    switch (key) {
    case '1':FurElise();
        break;
    case '2':
        Beep(262, 400);
        thinrect(0, 0, 1, -0.18, -0.205, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(262, 400);
        Beep(392, 400);
        Beep(392, 400);
        thinrect(1, 1, 1, -0.18, -0.205, -0.35, 0.2);
        thinrect(0, 0, 1, 0.05, 0.025, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(440, 400);
        Beep(440, 400);
        thinrect(1, 1, 1, 0.05, 0.025, -0.35, 0.2);
        thinrect(0, 0, 1, 0.105, 0.08, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(392, 400);
        thinrect(1, 1, 1, 0.105, 0.08, -0.35, 0.2);
        thinrect(0, 0, 1, 0.055, 0.025, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(300);

        Beep(349, 400);
        Beep(349, 400);
        thinrect(1, 1, 1, 0.055, 0.025, -0.35, 0.2);
        thinrect(0, 0, 1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(330, 400);
        Beep(330, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0, 0, 1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(294, 400);
        Beep(294, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0, 0, 1, -0.115, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(262, 400);
        thinrect(1, 1, 1, -0.115, -0.14, -0.35, 0.2);
        thinrect(0, 0, 1, -0.18, -0.205, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(300);

        Beep(392, 400);
        Beep(392, 400);
        thinrect(1, 1, 1, -0.18, -0.205, -0.35, 0.2);
        thinrect(0, 0, 1, 0.05, 0.025, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(349, 400);
        Beep(349, 400);
        thinrect(1, 1, 1, 0.05, 0.025, -0.35, 0.2);
        thinrect(0, 0, 1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(330, 400);
        Beep(330, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0, 0, 1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(294, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0, 0, 1, -0.115, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(300);

        Beep(392, 400);
        Beep(392, 400);
        thinrect(1, 1, 1, -0.115, -0.14, -0.35, 0.2);
        thinrect(0, 0, 1, 0.05, 0.025, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(349, 400);
        Beep(349, 400);
        thinrect(1, 1, 1, 0.05, 0.025, -0.35, 0.2);
        thinrect(0, 0, 1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(330, 400);
        Beep(330, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0, 0, 1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(294, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0, 0, 1, -0.115, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(300);

        Beep(262, 400);
        Beep(262, 400);
        thinrect(1, 1, 1, -0.115, -0.14, -0.35, 0.2);
        thinrect(0, 0, 1, -0.18, -0.205, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(392, 400);
        Beep(392, 400);
        thinrect(1, 1, 1, -0.18, -0.205, -0.35, 0.2);
        thinrect(0, 0, 1, 0.05, 0.025, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(440, 400);
        Beep(440, 400);
        thinrect(1, 1, 1, 0.05, 0.025, -0.35, 0.2);
        thinrect(0, 0, 1, 0.105, 0.08, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(392, 400);
        thinrect(1, 1, 1, 0.105, 0.08, -0.35, 0.2);
        thinrect(0, 0, 1, 0.055, 0.025, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(300);

        Beep(349, 400);
        Beep(349, 400);
        thinrect(1, 1, 1, 0.055, 0.025, -0.35, 0.2);
        thinrect(0, 0, 1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(330, 400);
        Beep(330, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0, 0, 1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(294, 400);
        Beep(294, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0, 0, 1, -0.115, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(262, 400);
        thinrect(1, 1, 1, -0.115, -0.14, -0.35, 0.2);
        thinrect(0, 0, 1, -0.18, -0.205, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        break;
    case '3':
        Beep(392, 400);
        thinrect(0, 1, 0, -0.595, -0.62, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(392, 400);
        Beep(440, 400);
        thinrect(1, 1, 1, -0.595, -0.62, -0.35, 0.2);
        thinrect(0, 1, 0, -0.565, -0.59, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(392, 400);
        thinrect(1, 1, 1, -0.565, -0.59, -0.35, 0.2);
        thinrect(0, 1, 0, -0.595, -0.62, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(524, 400);
        thinrect(1, 1, 1, -0.595, -0.62, -0.35, 0.2);
        thinrect(0, 1, 0, -0.43, -0.455, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(492, 400);
        thinrect(1, 1, 1, -0.43, -0.455, -0.35, 0.2);
        thinrect(0, 1, 0, -0.5, -0.525, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(600);

        Beep(392, 400);
        Beep(392, 400);
        thinrect(1, 1, 1, -0.5, -0.525, -0.35, 0.2);
        thinrect(0, 1, 0, -0.595, -0.62, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(440, 400);
        thinrect(1, 1, 1, -0.595, -0.62, -0.35, 0.2);
        thinrect(0, 1, 0, -0.565, -0.59, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(392, 400);
        thinrect(1, 1, 1, -0.565, -0.59, -0.35, 0.2);
        thinrect(0, 1, 0, -0.595, -0.62, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(588, 400);
        thinrect(1, 1, 1, -0.595, -0.62, -0.35, 0.2);
        thinrect(0, 1, 0, -0.4, -0.425, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(524, 400);
        thinrect(1, 1, 1, -0.4, -0.425, -0.35, 0.2);
        thinrect(0, 1, 0, -0.43, -0.455, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(600);

        Beep(392, 400);
        Beep(392, 400);
        thinrect(1, 1, 1, -0.43, -0.455, -0.35, 0.2);
        thinrect(0, 1, 0, -0.595, -0.62, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(784, 400);
        thinrect(1, 1, 1, -0.595, -0.62, -0.35, 0.2);
        thinrect(0, 1, 0, -0.21, -0.235, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(660, 400);
        thinrect(1, 1, 1, -0.21, -0.235, -0.35, 0.2);
        thinrect(0, 1, 0, -0.334, -0.36, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(524, 400);
        thinrect(1, 1, 1, -0.334, -0.36, -0.35, 0.2);
        thinrect(0, 1, 0, -0.43, -0.455, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(492, 400);
        thinrect(1, 1, 1, -0.43, -0.455, -0.35, 0.2);
        thinrect(0, 1, 0, -0.5, -0.525, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(440, 400);
        thinrect(1, 1, 1, -0.5, -0.525, -0.35, 0.2);
        thinrect(0, 1, 0, -0.565, -0.59, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(600);

        Beep(700, 400);
        Beep(700, 400);
        thinrect(1, 1, 1, -0.565, -0.59, -0.35, 0.2);
        thinrect(0, 1, 0, -0.279, -0.305, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(660, 400);
        thinrect(1, 1, 1, -0.279, -0.305, -0.35, 0.2);
        thinrect(0, 1, 0, -0.334, -0.36, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(524, 400);
        thinrect(1, 1, 1, -0.334, -0.36, -0.35, 0.2);
        thinrect(0, 1, 0, -0.43, -0.455, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(588, 400);
        thinrect(1, 1, 1, -0.43, -0.455, -0.35, 0.2);
        thinrect(0, 1, 0, -0.4, -0.425, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(524, 400);
        thinrect(1, 1, 1, -0.4, -0.425, -0.35, 0.2);
        thinrect(0, 1, 0, -0.43, -0.455, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        break;
    case '4':
        Beep(1176, 400);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1320, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, 0.024, 0.052, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1176, 400);
        thinrect(1, 1, 1, 0.024, 0.052, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1048, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(988, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.113, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1048, 400);
        thinrect(1, 1, 1, -0.113, -0.14, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1176, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(400);

        Beep(880, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.18, -0.205, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(988, 400);
        thinrect(1, 1, 1, -0.18, -0.205, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.113, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1048, 400);
        thinrect(1, 1, 1, -0.113, -0.14, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(400);

        Beep(988, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.113, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1048, 400);
        thinrect(1, 1, 1, -0.113, -0.14, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1176, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(400);

        Beep(1176, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1320, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, 0.024, 0.052, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1176, 400);
        thinrect(1, 1, 1, 0.024, 0.052, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1048, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(988, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.113, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1048, 400);
        thinrect(1, 1, 1, -0.113, -0.14, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.045, -0.07, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(1176, 400);
        thinrect(1, 1, 1, -0.045, -0.07, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(400);

        Beep(880, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.18, -0.205, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(200);
        Beep(1176, 400);
        thinrect(1, 1, 1, -0.18, -0.205, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.015, -0.04, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Sleep(200);
        Beep(988, 400);
        thinrect(1, 1, 1, -0.015, -0.04, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.113, -0.14, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        Beep(784, 400);
        thinrect(1, 1, 1, -0.113, -0.14, -0.35, 0.2);
        thinrect(0.1, 0, 0.1, -0.21, -0.235, -0.35, 0.2);
        glutSwapBuffers();
        glutPostRedisplay();
        break;

    case '13':glutKeyboardFunc(keyboard);
        break;
    }
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case '1':Beep(220, 400);
        c2 = 0.6, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C2");
        glutPostRedisplay();
        break;
    case '2':Beep(248, 400);
        c2 = 1.0, d2 = 0.6, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D2");
        glutPostRedisplay();
        break;
    case '3':Beep(260, 400);
        c2 = 1.0, d2 = 1.0, e2 = 0.6, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("E2");
        glutPostRedisplay();
        break;
    case '4':Beep(292, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 0.6, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F2");
        glutPostRedisplay();
        break;
    case '5':Beep(328, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 0.6, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G2");
        glutPostRedisplay();
        break;
    case '6':Beep(348, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 0.6, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A2");
        glutPostRedisplay();
        break;
    case '7':Beep(392, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 0.6, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("B2");
        glutPostRedisplay();
        break;
    case '8':Beep(440, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 0.6, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C3");
        glutPostRedisplay();
        break;
    case '9':Beep(492, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 0.6, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D3");
        glutPostRedisplay();
        break;
    case '0':Beep(524, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 0.6, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("E3");
        glutPostRedisplay();
        break;
    case 'q':Beep(588, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 0.6,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F3");
        glutPostRedisplay();
        break;
    case 'w':Beep(660, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 0.6, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G3");
        glutPostRedisplay();
        break;
    case 'e':Beep(700, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 0.6, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A3");
        glutPostRedisplay();
        break;
    case 'r':Beep(784, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 0.6, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("B3");
        glutPostRedisplay();
        break;
    case 't':Beep(880, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 0.6, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C4");
        glutPostRedisplay();
        break;
    case 'y':Beep(988, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 0.6, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D4");
        glutPostRedisplay();
        break;
    case 'u':Beep(1048, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 0.6, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("E4");
        glutPostRedisplay();
        break;
    case 'i':Beep(1176, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 0.6, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F4");
        glutPostRedisplay();
        break;
    case 'o':Beep(1320, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 0.6, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G4");
        glutPostRedisplay();
        break;
    case 'p':Beep(1396, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 0.6, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A4");
        glutPostRedisplay();
        break;
    case 'a':Beep(1568, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 0.6, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("B4");
        glutPostRedisplay();
        break;
    case 's':Beep(1760, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 0.6, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C5");
        glutPostRedisplay();
        break;
    case 'd':Beep(1976, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 0.6,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D5");
        glutPostRedisplay();
        break;
    case 'f':Beep(2092, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 0.6, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("E5");
        glutPostRedisplay();
        break;
    case 'g':Beep(2348, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 0.6, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F5");
        glutPostRedisplay();
        break;
    case 'h':Beep(2636, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 0.6, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G5");
        glutPostRedisplay();
        break;
    case 'j':Beep(2792, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 0.6, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A5");
        glutPostRedisplay();
        break;
    case 'k':Beep(3136, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 0.6, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("B5");
        glutPostRedisplay();
        break;
    case 'l':Beep(3520, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 0.6, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C6");
        glutPostRedisplay();
        break;
    case 'z':Beep(3992, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 0.6, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D6");
        glutPostRedisplay();
        break;
    case 'x':Beep(4188, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 0.6, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("E6");
        glutPostRedisplay();
        break;
    case 'c':Beep(4700, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 0.6, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F6");
        glutPostRedisplay();
        break;
    case 'v':Beep(5276, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 0.6, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G6");
        glutPostRedisplay();
        break;
    case 'b':Beep(5588, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 0.6, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A6");
        glutPostRedisplay();
        break;
    case 'n':Beep(6272, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 0.6, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("B6");
        glutPostRedisplay();
        break;
    case 'm':Beep(8372, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 0.6;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C7");
        glutPostRedisplay();
        break;
    case '!':Beep(69 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.2, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C#2");
        glutPostRedisplay();
        break;
    case '@':Beep(78 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.2, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D#2");
        glutPostRedisplay();
        break;
    case '$':Beep(93 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.2, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F#2");
        glutPostRedisplay();
        break;
    case '%':Beep(104 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.2, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G#2");
        glutPostRedisplay();
        break;
    case '^':Beep(117 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.2, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A#2");
        glutPostRedisplay();
        break;
    case '*':Beep(139 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.2, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C#3");
        glutPostRedisplay();
        break;
    case '(':Beep(156 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.2, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D#3");
        glutPostRedisplay();
        break;
    case 'Q':Beep(185 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.2, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F#3");
        glutPostRedisplay();
        break;
    case 'W':Beep(208 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.2, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G#3");
        glutPostRedisplay();
        break;
    case 'E':Beep(233 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.2, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A#3");
        glutPostRedisplay();
        break;
    case 'T':Beep(277 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.2, ag3 = 0.0, aa3 = 0.0, ac4 = 0.2,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C#4");
        glutPostRedisplay();
        break;
    case 'Y':Beep(311 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.2, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D#4");
        glutPostRedisplay();
        break;
    case 'I':Beep(370 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.2, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F#4");
        glutPostRedisplay();
        break;
    case 'O':Beep(415 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.2, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G#4");
        glutPostRedisplay();
        break;
    case 'P':Beep(466 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.2, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A#4");
        glutPostRedisplay();
        break;
    case 'S':Beep(554 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.2, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C#5");
        glutPostRedisplay();
        break;
    case 'D':Beep(662 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.2, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D#5");
        glutPostRedisplay();
        break;
    case 'G':Beep(740 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.2, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F#5");
        glutPostRedisplay();
        break;
    case 'H':Beep(831 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.2, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("G#5");
        glutPostRedisplay();
        break;
    case 'J':Beep(932 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.2, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("A#5");
        glutPostRedisplay();
        break;
    case 'L':Beep(1109 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.2, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("C#6");
        glutPostRedisplay();
        break;
    case 'Z':Beep(1245 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.2, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("D#6");
        glutPostRedisplay();
        break;
    case 'C':Beep(1480 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.2,
            ag6 = 0.0, aa6 = 0.0;
        keydisplay("F#6");
        glutPostRedisplay();
        break;
    case 'V':Beep(1661 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.2, aa6 = 0.0;
        keydisplay("G#6");
        glutPostRedisplay();
        break;
    case 'B':Beep(1865 * 4, 400);
        c2 = 1.0, d2 = 1.0, e2 = 1.0, f2 = 1.0, g2 = 1.0, a2 = 1.0, b2 = 1.0, c3 = 1.0, d3 = 1.0, e3 = 1.0, f3 = 1.0,
            g3 = 1.0, a3 = 1.0, b3 = 1.0, c4 = 1.0, d4 = 1.0, e4 = 1.0, f4 = 1.0, g4 = 1.0, a4 = 1.0, b4 = 1.0, c5 = 1.0, d5 = 1.0,
            e5 = 1.0, f5 = 1.0, g5 = 1.0, a5 = 1.0, b5 = 1.0, c6 = 1.0, d6 = 1.0, e6 = 1.0, f6 = 1.0, g6 = 1.0, a6 = 1.0, b6 = 1.0, c7 = 1.0;
        ac2 = 0.0, ad2 = 0.0, af2 = 0.0, ag2 = 0.0, aa2 = 0.0, ac3 = 0.0, ad3 = 0.0, af3 = 0.0, ag3 = 0.0, aa3 = 0.0, ac4 = 0.0,
            ad4 = 0.0, af4 = 0.0, ag4 = 0.0, aa4 = 0.0, ac5 = 0.0, ad5 = 0.0, af5 = 0.0, ag5 = 0.0, aa5 = 0.0, ac6 = 0.0, ad6 = 0.0, af6 = 0.0,
            ag6 = 0.0, aa6 = 0.2;
        keydisplay("A#6");
        glutPostRedisplay();
        break;

    case 13:
        glutKeyboardFunc(choice);
        break;

    case 'X':
        display2();
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("PIANO");
    glutInitWindowSize(2000, 2000);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(frontscreen);
    glutKeyboardFunc(start);
    glutTimerFunc(70, color, 0);
    glutTimerFunc(900, update, 0);
    glutReshapeWindow(1280, 700);
    glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}

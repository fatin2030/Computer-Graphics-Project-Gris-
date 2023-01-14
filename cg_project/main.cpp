#include<windows.h>
#include<mmsystem.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

float x,y,i;
float s=0;
float d=0;

float counter_circle = 0.0;



GLfloat position = 0.0f;
GLfloat speed = 0.0025f; //0.0025f

//clouds bottom
void cloud()
{
  glPushMatrix();
    glTranslatef(0.50,-0.73,0);

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.22*sin(i);
			y=0.22*cos(i);
			glVertex2f(x,y);
		}
    glEnd();

   glPopMatrix();


   glPushMatrix();

    glTranslatef(0.30,-0.68,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.23*sin(i);
			y=0.23*cos(i);
			glVertex2f(x,y);
		}

    glEnd();
   glPopMatrix();


    glPushMatrix();

    glTranslatef(0.45,-0.59,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.19*sin(i);
			y=0.18*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

    glPushMatrix();


    glTranslatef(0.32,-0.79,0);

    glBegin(GL_TRIANGLE_FAN);

        glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.19*sin(i);
			y=0.18*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

    glPushMatrix();

    glTranslatef(0.45,-0.84,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.17*sin(i);
			y=0.17*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();
    // cloud shader
    glPushMatrix();


    glTranslatef(0.50,-0.73,0);

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(31,61,111);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.20*sin(i);
			y=0.20*cos(i);
			glVertex2f(x,y);
		}
    glEnd();

   glPopMatrix();


   glPushMatrix();

    glTranslatef(0.30,-0.68,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(31,61,111);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.21*sin(i);
			y=0.21*cos(i);
			glVertex2f(x,y);
		}

    glEnd();
   glPopMatrix();


    glPushMatrix();

    glTranslatef(0.45,-0.59,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(31,61,111);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.18*sin(i);
			y=0.17*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

    glPushMatrix();


    glTranslatef(0.32,-0.79,0);

    glBegin(GL_TRIANGLE_FAN);

        glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.17*sin(i);
			y=0.16*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

    glPushMatrix();

    glTranslatef(0.45,-0.84,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(31,61,111);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.15*sin(i);
			y=0.15*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

}

//clouds middle
  void cloud_middle()
  {
  glPushMatrix();

    glTranslatef(0.0,0.0,0.0);

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.175*sin(i);
			y=0.175*cos(i);
			glVertex2f(x,y);
		}
    glEnd();

   glPopMatrix();


   glPushMatrix();

    glTranslatef(-0.2,0.0,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.15*sin(i);
			y=0.15*cos(i);
			glVertex2f(x,y);
		}

    glEnd();
   glPopMatrix();


    glPushMatrix();

    glTranslatef(0.2,0.0,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.17*sin(i);
			y=0.16*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

    glPushMatrix();


    glTranslatef(0.0,0.1,0);

    glBegin(GL_TRIANGLE_FAN);

        glColor3ub(32,65,118);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.19*sin(i);
			y=0.18*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

    // cloud shader
    glPushMatrix();


    glTranslatef(0.0,0.0,0.0);

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(31,61,111);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.17*sin(i);
			y=0.15*cos(i);
			glVertex2f(x,y);
		}
    glEnd();

   glPopMatrix();


   glPushMatrix();

    glTranslatef(-0.2,0.0,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(31,61,111);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.12*sin(i);
			y=0.12*cos(i);
			glVertex2f(x,y);
		}

    glEnd();
   glPopMatrix();


    glPushMatrix();

    glTranslatef(0.2,0.0,0);

    glBegin(GL_TRIANGLE_FAN);

		glColor3ub(31,61,111);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.14*sin(i);
			y=0.13*cos(i);
			glVertex2f(y,x);
		}

    glEnd();
    glPopMatrix();

}

void update(int value) {

    if(position > 2.00f)
        position = -1.25f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   // background
   glBegin(GL_QUADS);
      glColor3ub(2,26,56);
      glVertex2f(-1.0f, -1.0f);
      glVertex2f(1.0f, -1.0f);
      glVertex2f( 1.0f,  1.0f);
      glVertex2f(-1.0f,  1.0f);
   glEnd();

   //stars
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.7f, 0.7f);
      glVertex2f(-0.705f, 0.7f);
      glVertex2f(-0.705f, 0.69f);
      glVertex2f(-0.7f, 0.69f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.3f, 0.7f);
      glVertex2f(-0.305f, 0.7f);
      glVertex2f(-0.305f, 0.69f);
      glVertex2f(-0.3f, 0.69f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.3f, 0.3f);
      glVertex2f(-0.305f, 0.3f);
      glVertex2f(-0.305f, 0.29f);
      glVertex2f(-0.3f, 0.29f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.3f, 0.3f);
      glVertex2f(0.305f, 0.3f);
      glVertex2f(0.305f, 0.29f);
      glVertex2f(0.3f, 0.29f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.1f, -0.3f);
      glVertex2f(0.105f, -0.3f);
      glVertex2f(0.105f, -0.29f);
      glVertex2f(0.1f, -0.29f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.1f, -0.1f);
      glVertex2f(-0.105f, -0.1f);
      glVertex2f(-0.105f, -0.11f);
      glVertex2f(-0.1f, -0.11f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.05f, 0.1f);
      glVertex2f(0.055f, 0.1f);
      glVertex2f(0.055f, 0.11f);
      glVertex2f(0.05f, 0.11f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.6f, 0.6f);
      glVertex2f(-0.605f, 0.6f);
      glVertex2f(-0.605f, 0.59f);
      glVertex2f(-0.6f, 0.59f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.95f, 0.6f);
      glVertex2f(-0.955f, 0.6f);
      glVertex2f(-0.955f, 0.59f);
      glVertex2f(-0.95f, 0.59f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.95f, 0.95f);
      glVertex2f(-0.955f, 0.95f);
      glVertex2f(-0.955f, 0.94f);
      glVertex2f(-0.95f, 0.94f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(-0.91f, 0.92f);
      glVertex2f(-0.915f, 0.92f);
      glVertex2f(-0.915f, 0.93f);
      glVertex2f(-0.91f, 0.93f);
   glEnd();
   glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.8f);
      glVertex2f(0.005f, 0.8f);
      glVertex2f(0.005f, 0.81f);
      glVertex2f(0.0f, 0.81f);
   glEnd();
   glPushMatrix();
    glTranslatef(-0.2,-0.3,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.25,0.25,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.15,-0.1,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.0,-0.2,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.05,-0.5,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(-0.15,-0.45,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.95,0.2,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.85,0.35,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(-0.2,0.55,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(-0.05,0.5,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.75,0.27,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.82,0.12,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.67,0.08,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.3,-0.7,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(0.22,-0.57,0);
    glBegin(GL_QUADS);
     glColor3ub(107,134,163);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.005f, 0.0f);
      glVertex2f(0.005f, -0.01f);
      glVertex2f(0.0f, -0.01f);
    glEnd();
   glPopMatrix();



   //cloud static left side
   glPushMatrix();
   glTranslatef(-0.8,-0.2,0);
   glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,12,26);
     for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.415*sin(i);
			y=0.415*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(-1.0,0.15,0);
   glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,12,26);
     for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.3*sin(i);
			y=0.3*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(-0.35,-1.0,0);
   glBegin(GL_TRIANGLE_FAN);
     glColor3ub(60,44,70);
     for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.415*sin(i);
			y=0.415*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(-0.7,-0.75,0);
   glBegin(GL_TRIANGLE_FAN);
     glColor3ub(60,44,70);
     for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.415*sin(i);
			y=0.415*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(-0.3,-1.0,0);
   glBegin(GL_TRIANGLE_FAN);
     glColor3ub(60,44,70);
     for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.415*sin(i);
			y=0.415*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();

   //cloud static right side
   glPushMatrix();
   glTranslatef(0.8,-1.0,0);
   glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,12,26);
     for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.415*sin(i);
			y=0.415*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(1.0,-0.55,0);
   glBegin(GL_TRIANGLE_FAN);
     glColor3ub(0,12,26);
     for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.25*sin(i);
			y=0.25*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();



   //Moon
   glPushMatrix();
   s =0.5;
   d=0.7;
   glTranslatef(s,d,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(80,124,147);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.415*sin(i);
			y=0.415*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.5,0.7,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(218,233,203);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.4*sin(i);
			y=0.4*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.5,0.7,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(246,243,210);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.375*sin(i);
			y=0.375*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();


//clouds


    glPushMatrix();
    glLoadIdentity();
      position +=0.05;  // 0.05
      glTranslatef(-position,0,0);


    cloud();
    glPopMatrix();

    glPushMatrix();
    glLoadIdentity();
      position +=0.01;  // 0.05
      glTranslatef(-position,0,0);

    cloud_middle();
    glPopMatrix();



//structure left side
   //block (b_1.0)
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-1.0f, -0.3f);
      glVertex2f(-0.7f, -0.3f);
      glVertex2f(-0.7f, -0.9f);
      glVertex2f(-1.0f, -0.9f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.8f, -0.3f);
      glVertex2f(-0.8f, -0.6f);
   glEnd();
   glPushMatrix();
   glTranslatef(-0.8, -0.65,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.1)
		{
			x=0.05*sin(i);
			y=0.05*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(-0.8, -0.65,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=2*3.14;i+=0.1)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   //block structure (b_1.1)
    glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.7f, -0.9f);
      glVertex2f(-0.9f, -0.9f);
      glVertex2f(-0.9f, -1.0f);
      glVertex2f(-0.7f, -1.0f);
   glEnd();
   //stairs (b_1.2)
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.7f, -0.3f);
      glVertex2f(-0.3f, -1.0f);
      glVertex2f(-0.35f, -1.0f);
      glVertex2f(-0.7f, -0.4f);
   glEnd();
   //block line top (bw_1.0)
   glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f(-1.0f, -0.3f);
      glVertex2f(-0.7f, -0.3f);
      glVertex2f(-0.7f, -0.31f);
      glVertex2f(-1.0f, -0.31f);
   glEnd();
   //block line structure (bw_1.1)
   glBegin(GL_QUADS);
      glColor3d(255,255,255);
      glVertex2f(-0.7f, -0.9f);
      glVertex2f(-0.9f, -0.9f);
      glVertex2f(-0.9f, -0.91f);
      glVertex2f(-0.7f, -0.91f);
   glEnd();
   //block line structure (bw_1.2)
   glBegin(GL_QUADS);
      glColor3d(255,255,255);
      glVertex2f(-0.9f, -0.95f);
      glVertex2f(-0.7f, -0.95f);
      glVertex2f(-0.7f, -0.96f);
      glVertex2f(-0.9f, -0.96f);
   glEnd();
   //block line structure (bw_1.3)
   glBegin(GL_LINES);
      glColor3d(255,255,255);
      glVertex2f(-0.9f, -0.925f);
      glVertex2f(-0.7f, -0.925f);
      glVertex2f(-0.7f, -0.975f);
      glVertex2f(-0.9f, -0.975f);
   glEnd();
   //block shading (sh_1.0)
   glBegin(GL_QUADS);
      glColor3ub(41,126,154);
      glVertex2f(-0.9f, -0.9f);
      glVertex2f(-0.9f, -0.55f);
      glVertex2f(-1.0f, -0.55f);
      glVertex2f(-1.0f, -0.9f);
   glEnd();
   //block shading white
   glBegin(GL_QUADS);
      glColor3ub(63,153,181);
      glVertex2f(-0.9f, -0.9f);
      glVertex2f(-0.905f, -0.9f);
      glVertex2f(-0.905f, -0.55f);
      glVertex2f(-0.9f, -0.55f);
   glEnd();
   //block shading white
   glBegin(GL_QUADS);
      glColor3ub(63,153,181);
      glVertex2f(-0.9f, -0.55f);
      glVertex2f(-1.0f, -0.55f);
      glVertex2f(-1.0f, -0.557f);
      glVertex2f(-0.9f, -0.557f);
   glEnd();
   //stair structure
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.65f, -1.0f);
      glVertex2f(-0.63f, -1.0f);
      glVertex2f(-0.63f, -0.5f);
      glVertex2f(-0.65f, -0.45f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.57f, -1.0f);
      glVertex2f(-0.55f, -1.0f);
      glVertex2f(-0.55f, -0.6f);
      glVertex2f(-0.57f, -0.55f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.49f, -1.0f);
      glVertex2f(-0.47f, -1.0f);
      glVertex2f(-0.47f, -0.75f);
      glVertex2f(-0.49f, -0.7f);
   glEnd();
   glBegin(GL_TRIANGLES);
      glColor3ub(43,141,170);
      glVertex2f(-0.4f, -1.0f);
      glVertex2f(-0.4f, -0.9f);
      glVertex2f(-0.35f, -1.0f);
   glEnd();
   //stair structure triangles
   glBegin(GL_TRIANGLES);
      glColor3ub(43,141,170);
      glVertex2f(-0.7f, -0.4f);
      glVertex2f(-0.7f, -0.48f);
      glVertex2f(-0.649f, -0.48f);
   glEnd();
   glBegin(GL_TRIANGLES);
      glColor3ub(43,141,170);
      glVertex2f(-0.63f, -0.5f);
      glVertex2f(-0.63f, -0.62f);
      glVertex2f(-0.57f, -0.62f);
   glEnd();
   glBegin(GL_TRIANGLES);
      glColor3ub(43,141,170);
      glVertex2f(-0.55f, -0.6f);
      glVertex2f(-0.55f, -0.76f);
      glVertex2f(-0.49f, -0.76f);
   glEnd();
   glBegin(GL_TRIANGLES);
      glColor3ub(43,141,170);
      glVertex2f(-0.47f, -0.75f);
      glVertex2f(-0.47f, -0.91f);
      glVertex2f(-0.4f, -0.91f);
   glEnd();

//stair lights left side
   // light_1
   glPushMatrix();
   glTranslatef(-0.675,-0.48,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.1)
		{
			x=0.015*sin(i);
			y=0.015*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
     glTranslatef(-0.675,-0.48,0);
     glBegin(GL_LINES);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   // light_2
   glPushMatrix();
   glTranslatef(-0.6,-0.62,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.1)
		{
			x=0.015*sin(i);
			y=0.015*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
     glTranslatef(-0.6,-0.62,0);
     glBegin(GL_LINES);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   //light_3
   glPushMatrix();
   glTranslatef(-0.52,-0.76,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.1)
		{
			x=0.015*sin(i);
			y=0.015*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
     glTranslatef(-0.52,-0.76,0);
     glBegin(GL_LINES);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   //light_4
   glPushMatrix();
   glTranslatef(-0.435,-0.91,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.1)
		{
			x=0.015*sin(i);
			y=0.015*cos(i);
			glVertex2f(x,y);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
     glTranslatef(-0.435,-0.91,0);
     glBegin(GL_LINES);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();


//left side building 2
   //pillars
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.57f, -1.0f);
      glVertex2f(-0.55f, -1.0f);
      glVertex2f(-0.55f, -0.25f);
      glVertex2f(-0.57f, -0.25f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.49f, -1.0f);
      glVertex2f(-0.47f, -1.0f);
      glVertex2f(-0.47f, -0.25f);
      glVertex2f(-0.49f, -0.25f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.37f, -1.0f);
      glVertex2f(-0.35f, -1.0f);
      glVertex2f(-0.35f, -0.25f);
      glVertex2f(-0.37f, -0.25f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.29f, -1.0f);
      glVertex2f(-0.27f, -1.0f);
      glVertex2f(-0.27f, -0.25f);
      glVertex2f(-0.29f, -0.25f);
   glEnd();
   //left building 2 (left side block & circle)
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.57f, -0.25f);
      glVertex2f(-0.47f, -0.25f);
      glVertex2f(-0.47f, 0.0f);
      glVertex2f(-0.57f, 0.0f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.52f, 0.0f);
      glVertex2f(-0.52f, -0.25f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.47f, -0.25f);
      glVertex2f(-0.35f, -0.25f);
      glVertex2f(-0.35f, 0.0f);
      glVertex2f(-0.47f, 0.0f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.41f, 0.0f);
      glVertex2f(-0.41f, -0.125f);
   glEnd();
   glPushMatrix();
   glTranslatef(-0.41f, -0.125f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.025*sin(i);
			y=0.025*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(-0.41f, -0.125f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.02*sin(i);
			y=0.02*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.35f, -0.25f);
      glVertex2f(-0.27f, -0.25f);
      glVertex2f(-0.27f, 0.0f);
      glVertex2f(-0.35f, 0.0f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.31f, 0.0f);
      glVertex2f(-0.31f, -0.25f);
   glEnd();
   //semi-circle
   glPushMatrix();
   glTranslatef(-0.42,-0.25,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(2,26,56);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.05*sin(i);
			y=0.05*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   //semi circle light
   glBegin(GL_QUADS);
      glColor3ub(201,222,148);
      glVertex2f(-0.43f, -0.28f);
      glVertex2f(-0.41f, -0.28f);
      glVertex2f(-0.41f, -0.22f);
      glVertex2f(-0.43f, -0.22f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f(-0.4225f, -0.22f);
      glVertex2f(-0.4175f, -0.22f);
      glVertex2f(-0.4175f, -0.20f);
      glVertex2f(-0.4225f, -0.20f);
   glEnd();
   glPushMatrix();
     glTranslatef(-0.42,-0.25,0);
     glBegin(GL_LINES);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.05*sin(i);
			y=0.05*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   //top side
   glBegin(GL_QUADS);
      glColor3ub(41,126,154);
      glVertex2f(-0.57f, 0.0f);
      glVertex2f(-0.27f, 0.0f);
      glVertex2f(-0.27f, 0.05f);
      glVertex2f(-0.57f, 0.05f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.58f, 0.05f);
      glVertex2f(-0.26f, 0.05f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.57f, 0.025f);
      glVertex2f(-0.27f, 0.025f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.57f, 0.0f);
      glVertex2f(-0.27f, 0.0f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.58f, 0.05f);
      glVertex2f(-0.26f, 0.05f);
      glVertex2f(-0.26f, 0.065f);
      glVertex2f(-0.58f, 0.065f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(-0.58f, 0.065f);
      glVertex2f(-0.26f, 0.065f);
      glVertex2f(-0.27f, 0.08f);
      glVertex2f(-0.57f, 0.08f);
   glEnd();
   glPushMatrix();
   glTranslatef(-0.42,0.08,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.15*sin(i);
			y=0.15*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(-0.57f, 0.08f);
      glVertex2f(-0.27f, 0.08f);
   glEnd();
   //top side tower
   glPushMatrix();
   glTranslatef(-0.42,0.23,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.05*sin(i);
			y=0.05*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();


//character
   //legs
   glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(-0.427f, 0.28f);
      glVertex2f(-0.423f, 0.28f);
      glVertex2f(-0.423f, 0.4f);
      glVertex2f(-0.427f, 0.4f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(-0.41f, 0.28f);
      glVertex2f(-0.406f, 0.28f);
      glVertex2f(-0.406f, 0.4f);
      glVertex2f(-0.41f, 0.4f);
   glEnd();
   //body
   glBegin(GL_QUADS);
      glColor3ub(78,31,37);
      glVertex2f(-0.45f, 0.38f);
      glVertex2f(-0.38f, 0.34f);
      glVertex2f(-0.41f, 0.5f);
      glVertex2f(-0.42f, 0.5f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(0,0,0);
      glVertex2f(-0.45f, 0.38f);
      glVertex2f(-0.38f, 0.34f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(0,0,0);
      glVertex2f(-0.38f, 0.34f);
      glVertex2f(-0.41f, 0.5f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(0,0,0);
      glVertex2f(-0.41f, 0.5f);
      glVertex2f(-0.42f, 0.5f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(0,0,0);
      glVertex2f(-0.45f, 0.38f);
      glVertex2f(-0.42f, 0.5f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(219,190,188);
      glVertex2f(-0.45f, 0.38f);
      glVertex2f(-0.45f, 0.375f);
      glVertex2f(-0.38f, 0.335f);
      glVertex2f(-0.38f, 0.34f);
   glEnd();
   //head
   glPushMatrix();
   glTranslatef(-0.415,0.52,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(222,191,182);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.02*sin(i);
			y=0.02*cos(i);
			glVertex2f(y/2,x);
		}
   glEnd();
   glPopMatrix();
   //hair
   glPushMatrix();
   glTranslatef(-0.415,0.52,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(157,180,178);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.02*sin(i);
			y=0.02*cos(i);
			glVertex2f(y/2,x);
		}
   glEnd();
   glPopMatrix();
   glBegin(GL_QUADS);
      glColor3ub(157,180,178);
      glVertex2f(-0.415f, 0.52f);
      glVertex2f(-0.42f, 0.5f);
      glVertex2f(-0.43f, 0.5f);
      glVertex2f(-0.425f, 0.52f);
   glEnd();
   //hands
   glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(-0.415f, 0.47f);
      glVertex2f(-0.39f, 0.43f);
      glVertex2f(-0.39f, 0.435f);
      glVertex2f(-0.415f, 0.475f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(-0.39f, 0.43f);
      glVertex2f(-0.39f, 0.435f);
      glVertex2f(-0.37f, 0.47f);
      glVertex2f(-0.37f, 0.475f);
   glEnd();
   //character circle
   glPushMatrix();
   glTranslatef(-0.415,0.44,0);
   //circle 1
   glPushMatrix();
     glBegin(GL_LINES);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.00001)
		{
			x=0.2*sin(i);
			y=0.2*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   glPushMatrix();
     glRotatef(counter_circle,0.0,0.0,1.0);
     counter_circle += 1;
     glTranslatef(0.0,0.2,0.0);
     glBegin(GL_TRIANGLE_FAN);
     glColor3ub(255,255,255);
     for(i=0;i<=2*3.14;i+=0.0001)
     {
			x=0.01*sin(i);
			y=0.01*cos(i);
			glVertex2f(x,y);
     }
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     for(i=0;i<=2*3.14;i+=0.0001)
     {
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(x,y);
     }
     glEnd();
   glPopMatrix();
   //circle 2
   glPushMatrix();
     glBegin(GL_LINES);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.00001)
		{
			x=0.3*sin(i);
			y=0.3*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   glPushMatrix();
     glRotatef(counter_circle,0.0,0.0,-1.0);
     counter_circle += 3;
     glTranslatef(0.3,0.0,0.0);
     glBegin(GL_TRIANGLE_FAN);
     glColor3ub(255,255,255);
     for(i=0;i<=2*3.14;i+=0.0001)
     {
			x=0.01*sin(i);
			y=0.01*cos(i);
			glVertex2f(x,y);
     }
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     for(i=0;i<=2*3.14;i+=0.0001)
     {
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(x,y);
     }
     glEnd();
   glPopMatrix();
   //circle 3
   glPushMatrix();
     glBegin(GL_LINES);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.00001)
		{
			x=0.5*sin(i);
			y=0.5*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   glPushMatrix();
     glRotatef(counter_circle,0.0,0.0,1.0);
     counter_circle += 0.5;
     glTranslatef(-0.5,0.0,0.0);
     glBegin(GL_TRIANGLE_FAN);
     glColor3ub(255,255,255);
     for(i=0;i<=2*3.14;i+=0.0001)
     {
			x=0.025*sin(i);
			y=0.025*cos(i);
			glVertex2f(x,y);
     }
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     for(i=0;i<=2*3.14;i+=0.0001)
     {
			x=0.06*sin(i);
			y=0.06*cos(i);
			glVertex2f(x,y);
     }
     glEnd();
     glPushMatrix();
      glRotatef(counter_circle,0.0,0.0,1.0);
      counter_circle += 1;
      glTranslatef(0.06,0.0,0.0);
      glBegin(GL_TRIANGLE_FAN);
      glColor3ub(255,255,255);
      for(i=0;i<=2*3.14;i+=0.0001)
      {
			x=0.01*sin(i);
			y=0.01*cos(i);
			glVertex2f(x,y);
      }
      glEnd();
      glPopMatrix();
   glPopMatrix();
   glPopMatrix();



// right side building
   //pillars
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.19f, -1.0f);
      glVertex2f(0.17f, -1.0f);
      glVertex2f(0.17f, -0.3f);
      glVertex2f(0.19f, -0.3f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(41,126,154);
      glVertex2f(0.37f, -1.0f);
      glVertex2f(0.35f, -1.0f);
      glVertex2f(0.35f, -0.3f);
      glVertex2f(0.37f, -0.3f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(41,126,154);
      glVertex2f(0.67f, -1.0f);
      glVertex2f(0.65f, -1.0f);
      glVertex2f(0.65f, -0.3f);
      glVertex2f(0.67f, -0.3f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.89f, -1.0f);
      glVertex2f(0.87f, -1.0f);
      glVertex2f(0.87f, -0.3f);
      glVertex2f(0.89f, -0.3f);
   glEnd();
   //right building blocks
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.17f, -0.4f);
      glVertex2f(0.37f, -0.4f);
      glVertex2f(0.37f, 0.0f);
      glVertex2f(0.17f, 0.0f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.27f, 0.0f);
      glVertex2f(0.27f, -0.2f);
   glEnd();
   glPushMatrix();
   glTranslatef(0.27f, -0.2f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.27f, -0.2f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.37f, -0.4f);
      glVertex2f(0.37f, 0.0f);
      glVertex2f(0.67f, 0.0f);
      glVertex2f(0.67f, -0.4f);
   glEnd();

   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.67f, 0.0f);
      glVertex2f(0.67f, -0.4f);
      glVertex2f(0.89f, -0.4f);
      glVertex2f(0.89f, 0.0f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.77f, 0.0f);
      glVertex2f(0.77f, -0.2f);
   glEnd();
      glPushMatrix();
   glTranslatef(0.77f, -0.2f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.77f, -0.2f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.51,-0.4,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(41,126,154);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.14*sin(i);
			y=0.14*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.51,-0.4,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.1*sin(i);
			y=0.1*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.51,-0.4,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(2,26,56);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.075*sin(i);
			y=0.075*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   //right bottom building
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.41f, -1.0f);
      glVertex2f(0.61f, -1.0f);
      glVertex2f(0.61f, -0.7f);
      glVertex2f(0.41f, -0.7f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.61f, -0.7f);
      glVertex2f(0.41f, -0.7f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(41,126,154);
      glVertex2f(0.61f, -0.7f);
      glVertex2f(0.41f, -0.7f);
      glVertex2f(0.41f, -0.68f);
      glVertex2f(0.61f, -0.68f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.61f, -0.68f);
      glVertex2f(0.41f, -0.68f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.61f, -0.68f);
      glVertex2f(0.60f, -0.65f);
      glVertex2f(0.42f, -0.65f);
      glVertex2f(0.41f, -0.68f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.60f, -0.65f);
      glVertex2f(0.42f, -0.65f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.60f, -0.65f);
      glVertex2f(0.42f, -0.65f);
      glVertex2f(0.41f, -0.62f);
      glVertex2f(0.61f, -0.62f);
   glEnd();
   glPushMatrix();
   glTranslatef(0.51,-0.62,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.1*sin(i);
			y=0.1*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.41f, -0.62f);
      glVertex2f(0.61f, -0.62f);
   glEnd();
   //light
   glPushMatrix();
   glTranslatef(0.93,-0.125,0);
   glBegin(GL_QUADS);
      glColor3ub(201,222,148);
      glVertex2f(-0.43f, -0.28f);
      glVertex2f(-0.41f, -0.28f);
      glVertex2f(-0.41f, -0.22f);
      glVertex2f(-0.43f, -0.22f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f(-0.4225f, -0.22f);
      glVertex2f(-0.4175f, -0.22f);
      glVertex2f(-0.4175f, -0.20f);
      glVertex2f(-0.4225f, -0.20f);
   glEnd();
   glPushMatrix();
     glTranslatef(-0.42,-0.25,0);
     glBegin(GL_LINES);
		glColor3ub(201,222,148);
		for(i=0;i<=2*3.14;i+=0.01)
		{
			x=0.05*sin(i);
			y=0.05*cos(i);
			glVertex2f(x,y);
		}
     glEnd();
   glPopMatrix();
   glPopMatrix();
//right building top part
   //block
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.41f, 0.0f);
      glVertex2f(0.61f, 0.0f);
      glVertex2f(0.61f, 0.3f);
      glVertex2f(0.41f, 0.3f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.5105f, 0.0f);
      glVertex2f(0.5105f, 0.2f);
   glEnd();
   glPushMatrix();
   glTranslatef(0.5105f, 0.2f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glPushMatrix();
   glTranslatef(0.5105f, 0.2f,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.03*sin(i);
			y=0.03*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.61f, 0.3f);
      glVertex2f(0.41f, 0.3f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.61f, 0.3f);
      glVertex2f(0.60f, 0.32f);
      glVertex2f(0.42f, 0.32f);
      glVertex2f(0.41f, 0.3f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.60f, 0.3f);
      glVertex2f(0.42f, 0.3f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3ub(43,141,170);
      glVertex2f(0.61f, 0.32f);
      glVertex2f(0.60f, 0.3f);
      glVertex2f(0.42f, 0.3f);
      glVertex2f(0.41f, 0.32f);
   glEnd();
   glPushMatrix();
   glTranslatef(0.51,0.32,0);
   glBegin(GL_TRIANGLE_FAN);
		glColor3ub(43,141,170);
		for(i=0;i<=1*3.14;i+=0.0001)
		{
			x=0.1*sin(i);
			y=0.1*cos(i);
			glVertex2f(y,x);
		}
   glEnd();
   glPopMatrix();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.61f, 0.32f);
      glVertex2f(0.41f, 0.32f);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(255,255,255);
      glVertex2f(0.17f, 0.0f);
      glVertex2f(0.89f, 0.0f);
   glEnd();




glFlush();
}
void handleKeypress(unsigned char key) {

	switch (key) {

case 'a':

    s +=0.8f;

    break;

case 'w':
    d += 0.2f;
    break;

case 's':
    speed -= 0.5f;
    break;


glutPostRedisplay();


	}
}


int main(int argc, char** argv) {
   sndPlaySound("2022-12-25 02-01-22_trim.wav",SND_ASYNC);
   glutInit(&argc, argv);
   glutInitWindowSize(720, 480);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("GRIS");
   glutDisplayFunc(display);
   init();
//   glutKeyboardFunc(handleKeypress);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}

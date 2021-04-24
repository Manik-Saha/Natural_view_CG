#include<iostream>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
#include <windows.h>
#include <math.h>
# define PI 3.14159265358979323846

using namespace std;

GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat speed = 0.01f;
GLfloat speed1 = 0.01f;
float rain = 0.00;
bool rainFlag = false;
GLfloat m1 = 0.01f;
GLfloat m2 = 0.0f;

void display();

void update2(int value) {

  /* if(position > 1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();

*/

if(position2 > 1.8)
        position2 = -1.0f;

    position2 += speed1;


	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}




void update(int value) {

    if(position <-1.0)
        position = 1.8f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}




void DrawCircle(float cx, float cy, float r, int num_segments , float f) {

	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < num_segments; i++)
	{
		float theta = (f * 3.1416f * float(i) )/ float(num_segments);//get current angle

		float x = r * cosf(theta);//calculate x
		float y = r * sinf(theta);//calculate y

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();

}

void river()
{



    glBegin(GL_QUADS);
    glColor3ub(102, 179, 255);
    glVertex2f(-1.00f, -0.35f);
    glVertex2f(1.00f, -0.35f);
    glVertex2f(1.00f, -1.0f);
    glVertex2f(-1.00f, -1.0f);

    glEnd();


}
void deow()
{
glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
 glVertex2f(-1.00f, -0.48f);
glVertex2f(0.99f, -0.43f);
glVertex2f(0.99f, -0.43f);
glVertex2f(-1.00f, -0.45f);


    glEnd();


         glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
glVertex2f(-1.00f, -0.94f);
glVertex2f(-0.22f, -0.91f);
glVertex2f(-0.22f, -0.91f);
glVertex2f(-1.00f, -0.90f);
    glEnd();

             glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
glVertex2f(1.0f, -0.86f);
glVertex2f(0.18f, -0.86f);
glVertex2f(0.18f, -0.85f);
glVertex2f(1.00f, -0.83f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
glVertex2f(0.99f, -0.54f);
glVertex2f(-0.41f, -0.53f);
glVertex2f(-0.41f, -0.53f);
glVertex2f(1.00f, -0.51f);
    glEnd();



        glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
glVertex2f(-1.00f, -0.57f);
glVertex2f(-0.40f, -0.50f);
glVertex2f(-0.40f, -0.50f);
glVertex2f(-1.00f, -0.54f);;
    glEnd();

           glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
glVertex2f(-0.58f, -0.79f);
glVertex2f(-0.57f, -0.78f);
glVertex2f(0.99f, -0.75f);
glVertex2f(1.00f, -0.74f);
    glEnd();

            glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
glVertex2f(-0.90f, -0.69f);
glVertex2f(-0.42f, -0.68f);
glVertex2f(-0.12f, -0.64f);
glVertex2f(-0.44f, -0.65f);
glVertex2f(-0.88f, -0.69f);
    glEnd();

               glBegin(GL_QUADS);
    glColor3ub(200, 210, 250);
glVertex2f(-0.29f, -0.49f);
glVertex2f(-0.17f, -0.49f);
glVertex2f(-0.03f, -0.47f);
glVertex2f(-0.28f, -0.47f);
    glEnd();
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(15, 255, 235);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f,1.0f);

   glEnd();


}

void bird()
{
       int i;

	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 0, 0 );
		glVertex2f(mm, nn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(0, 0, 0 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////
	glBegin(GL_POLYGON);
     glColor3ub(0, 0, 0 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3ub(0, 0, 0 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
     glColor3ub(0, 0, 0 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;

	glBegin(GL_TRIANGLE_FAN);
	   glColor3ub(0, 0, 0 );
		glVertex2f(mmm, nnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
     glColor3ub(0, 0, 0 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3ub(0, 0, 0 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

	GLfloat mmmm=-0.638f; GLfloat nnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	   glColor3ub(0, 0, 0 );
		glVertex2f(mmmm,nnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 0, 0 );
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(0, 0, 0 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3ub(0, 0, 0 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
     glColor3ub(0, 0, 0 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();


}
void baar()
{
   glBegin(GL_QUADS);
     glColor3ub(198, 175, 93);
glVertex2f(-1.00f, -0.4f);
glVertex2f(1.0f, -0.4f);
glVertex2f(1.0f, -0.2f);
glVertex2f(-1.00f, -0.2f);
glEnd();

 glBegin(GL_QUADS);
     glColor3ub(161, 137, 67);
glVertex2f(-1.00f, -0.2f);
glVertex2f(-0.98f, -0.2f);
glVertex2f(-0.98f, -0.4f);
glVertex2f(-1.00f, -0.4f);
glEnd();


glBegin(GL_QUADS);
     glColor3ub(161, 137, 67);
glVertex2f(-0.98f, -0.4f);
glVertex2f(-0.84f, -0.2f);
glVertex2f(-0.90f, -0.4f);
glVertex2f(-0.96f, -0.4f);;
glEnd();


glBegin(GL_QUADS);
     glColor3ub(161, 137, 67);
glVertex2f(-0.70f, -0.2f);
glVertex2f(-0.63f, -0.4f);
glVertex2f(-0.58f, -0.4f);
glVertex2f(-0.67f, -0.2f);
glEnd();


glBegin(GL_QUADS);
     glColor3ub(161, 137, 67);
glVertex2f(-0.79f, -0.2f);
glVertex2f(-0.73f, -0.2f);
glVertex2f(-0.78f, -0.4f);
glVertex2f(-0.83f, -0.4f);
glEnd();

glBegin(GL_QUADS);
     glColor3ub(161, 137, 67);
glVertex2f(-0.09f, -0.2f);
glVertex2f(-0.01f, -0.2f);
glVertex2f(-0.03f, -0.4f);
glVertex2f(-0.12f, -0.4f);
glEnd();



glBegin(GL_TRIANGLE_STRIP);
     glColor3ub(161, 137, 67);
glVertex2f(0.91f, -0.4f);
glVertex2f(0.85f, -0.2f);
glVertex2f(0.75f, -0.4f);
glVertex2f(0.69f, -0.4f);
glVertex2f(0.64f, -0.2f);
glVertex2f(0.6f, -0.4f);
glVertex2f(0.55f, -0.4f);
glVertex2f(0.52f, -0.2f);
glVertex2f(0.50f, -0.2f);
glVertex2f(0.47f, -0.4f);
glVertex2f(0.32f, -0.4f);
glVertex2f(0.3f, -0.2f);
glVertex2f(0.28f, -0.2f);
glVertex2f(0.17f, -0.4f);
glVertex2f(0.15f, -0.2f);
glVertex2f(0.12f, -0.2f);
glVertex2f(0.06f, -0.2f);
glVertex2f(0.08f, -0.4f);
glEnd();


glBegin(GL_TRIANGLE_STRIP);
     glColor3ub(161, 137, 67);
glVertex2f(0.83f, -0.4f);
glVertex2f(0.90f, -0.4f);
glVertex2f(0.85f, -0.2f);
glVertex2f(0.88f, -0.2f);
glVertex2f(0.96f, -0.4f);
glVertex2f(0.96f, -0.2f);
glVertex2f(1.00f, -0.2f);
glVertex2f(1.00f, -0.4f);
glEnd();




glBegin(GL_TRIANGLE_STRIP);
     glColor3ub(161, 137, 67);
glVertex2f(-0.45f, -0.2f);
glVertex2f(-0.46f, -0.4f);
glVertex2f(-0.33f, -0.4f);
glVertex2f(-0.40f, -0.2f);
glVertex2f(-0.35f, -0.2f);
glVertex2f(-0.28f, -0.4f);
glVertex2f(-0.29f, -0.2f);
glVertex2f(-0.26f, -0.2f);
glVertex2f(-0.21f, -0.4);
glVertex2f(-0.18f, -0.4f);
glVertex2f(-0.21f, -0.4f);
glVertex2f(-0.21f, -0.4f);
glVertex2f(-0.15f, -0.4f);
glVertex2f(-0.09f, -0.2f);
glVertex2f(-0.03f, -0.2f);
glVertex2f(-0.02f, -0.4f);
glEnd();



glBegin(GL_TRIANGLE_STRIP);
     glColor3ub(161, 137, 67);
glVertex2f(-0.72f, -0.4f);
glVertex2f(-0.71f, -0.2f);
glVertex2f(-0.69f, -0.2f);
glVertex2f(-0.6f, -0.2f);
glVertex2f(-0.5f, -0.2f);
glVertex2f(-0.55f, -0.4f);
glEnd();
}
void house()
{
    glBegin(GL_QUADS);
     glColor3ub(204, 102, 0);
   glVertex2f(-0.87f, 0.19f);
    glVertex2f(-0.85f, 0.35f);
    glVertex2f(-0.54f, 0.35f);
   glVertex2f(-0.50f, 0.19f);
    glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 153);
    glVertex2f(-0.85f, 0.19f);
    glVertex2f(-0.525f, 0.19f);
     glVertex2f(-0.525f, 0.04f);
    glVertex2f(-0.85f, 0.04f);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(153, 153, 102);
glVertex2f(-0.87f, 0.039f);
glVertex2f(-0.508f, 0.039f);
glVertex2f(-0.508f, -0.005f);
glVertex2f(-0.87, -0.005f);
     glEnd();



         glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.75f, 0.16f);
glVertex2f(-0.75f, 0.10f);
glVertex2f(-0.80f, 0.10f);

     glEnd();


            glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
glVertex2f(-0.71f, 0.14f);
glVertex2f(-0.65f, 0.14f);
glVertex2f(-0.65f, 0.04f);
glVertex2f(-0.71f, 0.04f);

     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
glVertex2f(-0.615f, 0.16f);
glVertex2f(-0.565f, 0.16f);
glVertex2f(-0.565f, 0.10f);
glVertex2f(-0.615f, 0.10f);
     glEnd();


      glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.79f, 0.135f);
glVertex2f(-0.78f, 0.135f);
glVertex2f(-0.78f, 0.15f);
glVertex2f(-0.79f, 0.15f);
     glEnd();

         glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.77f, 0.135f);
glVertex2f(-0.76f, 0.135f);
glVertex2f(-0.76f, 0.15f);
glVertex2f(-0.77f, 0.15f);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.79f, 0.125f);
glVertex2f(-0.78f, 0.125f);
glVertex2f(-0.78f, 0.11f);
glVertex2f(-0.79f, 0.11f);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.77f, 0.125f);
glVertex2f(-0.76f, 0.125f);
glVertex2f(-0.76f, 0.11f);
glVertex2f(-0.77f, 0.11f);
     glEnd();

      glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.595f, 0.135f);
glVertex2f(-0.605f, 0.135f);
glVertex2f(-0.605f, 0.15f);
glVertex2f(-0.595f, 0.15f);

     glEnd();

           glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.595f, 0.1095f);
glVertex2f(-0.605f, 0.1095f);
glVertex2f(-0.605f, 0.123f);
glVertex2f(-0.595f, 0.123f);

     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.57f, 0.135f);
glVertex2f(-0.58f, 0.135f);
glVertex2f(-0.58f, 0.15f);
glVertex2f(-0.57f, 0.15f);

     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(250, 250, 250);
glVertex2f(-0.57f, 0.1095f);
glVertex2f(-0.58f, 0.1095f);
glVertex2f(-0.58f, 0.123f);
glVertex2f(-0.57f, 0.123f);

     glEnd();
}


void green()
{
   glBegin(GL_QUADS);
     glColor3ub(0, 179, 0);
   glVertex2f(1.0f, -0.2f);
  glVertex2f(-1.00f, -0.2f);
   glVertex2f(-1.0f, 0.6f);
    glVertex2f(1.0f, 0.6f);
glEnd();

}
void Khor()
{

    glBegin(GL_QUADS);
     glColor3ub(230, 138, 0);
      glVertex2f(-0.06f, 0.4f);
      glVertex2f(0.16f, 0.4f);
      glVertex2f(0.16f, 0.1f);

       glVertex2f(-0.06f, 0.11f);

     glEnd();

     glColor3ub(230, 138, 0);
DrawCircle(0.06f,.4f,.1f,490,1.0f);


      glBegin(GL_QUADS);
     glColor3ub(153, 77, 0);
      glVertex2f(0.05f, 0.5f);
      glVertex2f(0.05f, 0.55f);
      glVertex2f(0.07f, 0.55f);

       glVertex2f(0.07f, 0.5f);

     glEnd();
}

void tree(){
glBegin(GL_QUADS);
glColor3ub(102,51,0);
glVertex2f(0.71f, 0.10f);
glVertex2f(0.71f, 0.0f);
glVertex2f(0.73f, 0.0f);
glVertex2f(0.73f, 0.10f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(102,51,0);
glVertex2f(0.72f, 0.0f);
glVertex2f(0.73f, 0.0f);
glVertex2f(0.72f, -0.05f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(102,51,0);
glVertex2f(0.72f, 0.0f);
glVertex2f(0.71f, 0.0f);
glVertex2f(0.68f, -0.05f);
glEnd();
//tree shade
glBegin(GL_QUADS);
glColor3ub(153,76,0);
glVertex2f(0.73f, 0.10f);
glVertex2f(0.73f, 0.0f);
glVertex2f(0.74f, 0.0f);
glVertex2f(0.74f, 0.10f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153,76,0);
glVertex2f(0.73f, 0.0f);
glVertex2f(0.74f, 0.0f);
glVertex2f(0.78f, -0.07f);
glEnd();

//tree layer-1
glBegin(GL_POLYGON);
glColor3ub(0,102,51);
glVertex2f(0.69f, 0.13f);
glVertex2f(0.67f, 0.10f);
glVertex2f(0.78f, 0.10f);
glVertex2f(0.76f, 0.13f);
glEnd();
//tree layer-2
glBegin(GL_POLYGON);
glColor3ub(0,153,0);
glVertex2f(0.70f, 0.16f);
glVertex2f(0.68f, 0.13f);
glVertex2f(0.77f, 0.13f);
glVertex2f(0.75f, 0.16f);

glEnd();
//tree layer-3
glBegin(GL_POLYGON);
glColor3ub(0,204,0);
glVertex2f(0.71f, 0.19f);
glVertex2f(0.69f, 0.16f);
glVertex2f(0.76f, 0.16f);
glVertex2f(0.74f, 0.19f);
glEnd();
//tree layer-4
glBegin(GL_POLYGON);
glColor3ub(128,255,0);
glVertex2f(0.72f, 0.22f);
glVertex2f(0.70f, 0.19f);
glVertex2f(0.75f, 0.19f);
glVertex2f(0.73f, 0.22f);
//glVertex2f(0.72f, 0.44f);
glEnd();

}


void tree1(){

glColor3ub(0, 100,0);
DrawCircle(-.94f, .6f, .25f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.8f, .4f, .05f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.75f, .5f, .1f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.7f, .6f, .1f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.78f, .7f, .1f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.85f, .82f, .05f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.88f, .82f, .05f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.91f, .82f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-.85f, .82f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.0f, .82f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.01f, .82f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.05f, .78f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.09f, .75f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.15f, .66f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.15f, .5f, .08f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.0f, .35f, .05f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-1.06f, .4f, .05f, 555, 2.0f);

glColor3ub(0, 100,0);
DrawCircle(-0.9f, .35f, .05f, 555, 2.0f);

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.94f, 0.0f);
glVertex2f(-1.2f, 0.04f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.94f, 0.0f);
glVertex2f(-1.2f, 0.04f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.94f, 0.0f);
glVertex2f(-1.1f, 0.08f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.94f, 0.0f);
glVertex2f(-1.2f, 0.1f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.94f, 0.0f);
glVertex2f(-1.0f, 0.2f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.93f, 0.0f);
glVertex2f(-1.1f, -0.1f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.93f, 0.0f);
glVertex2f(-0.9f, -0.1f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.92f, 0.00f);
glVertex2f(-0.90f, 0.0f);
glVertex2f(-0.86f, -.08f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.92f, 0.03f);
glVertex2f(-0.94f, .00f);
glVertex2f(-0.86f, -.07f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.02f);
glVertex2f(-0.94f, 0.0f);
glVertex2f(-0.5f, .1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.0f);;
glVertex2f(-0.96f, 0.55f);
glVertex2f(-0.92f, 0.55f);
glVertex2f(-0.92f, 0.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.92f, 0.55f);
glVertex2f(-0.92f, 0.53f);
glVertex2f(-0.88f, .65f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.55f);
glVertex2f(-0.96f, 0.53f);
glVertex2f(-1.0f, .6f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.96f, 0.51f);
glVertex2f(-0.96f, 0.48f);
glVertex2f(-1.07f, .55f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.92f, 0.44f);
glVertex2f(-0.92f, 0.40f);
glVertex2f(-0.80f, .68f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.95f, 0.39f);
glVertex2f(-0.93f, 0.36f);
glVertex2f(-1.09f, .45f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.95f, 0.55f);
glVertex2f(-0.93f, 0.55f);
glVertex2f(-0.92f, .7f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(96, 26, 6);
glVertex2f(-0.92f, 0.35f);
glVertex2f(-0.92f, 0.33f);
glVertex2f(-0.80f, .47f);
glEnd();

}

void bananaTree_leaf(){
glBegin(GL_QUADS);
glColor3ub(102,51,0);
glVertex2f(-0.12f, 0.65f);
glVertex2f(-0.14f, 0.65f);
glVertex2f(-0.18f, 0.55f);
glVertex2f(-0.16f, 0.55f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102,51,0);
glVertex2f(-0.22f, 0.65f);
glVertex2f(-0.18f, 0.55f);
glVertex2f(-0.20f, 0.55f);
glVertex2f(-0.24f, 0.65f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,100,0);
glVertex2f(-0.09f, 0.62f);
glVertex2f(-0.15f, 0.62f);
glVertex2f(-0.03f, 0.35f);
glVertex2f(0.03f, 0.35f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(102,51,0);
glVertex2f(-0.12f, 0.65f);
glVertex2f(-0.14f, 0.65f);
glVertex2f(0.00f, 0.35f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,100,0);
glVertex2f(-0.27f, 0.62f);
glVertex2f(-0.21f, 0.62f);
glVertex2f(-0.34f, 0.35f);
glVertex2f(-0.40f, 0.35f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(102,51,0);
glVertex2f(-0.22f, 0.65f);
glVertex2f(-0.24f, 0.65f);
glVertex2f(-0.37f, 0.35f);
glEnd();
}

void banana_tree(){
glBegin(GL_QUADS);
glColor3ub(102,51,0);
glVertex2f(-0.20f, 0.58f);
glVertex2f(-0.20f, 0.15f);
glVertex2f(-0.16f, 0.15f);
glVertex2f(-0.16f, 0.58f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(102,51,0);
glVertex2f(-0.16f, 0.58f);
glVertex2f(-0.20f, 0.58f);
glVertex2f(-0.18f, 0.63f);
glEnd();

glPushMatrix();
glTranslatef(-.09f,0.14f,0.0f);
glScalef(.5,.5,0);
//glRotatef(0.5,0.5,0.5,1.0);
bananaTree_leaf();
glPopMatrix();

glPushMatrix();
glTranslatef(-.09f,0.30f,0.0f);
glScalef(.5,.5,0);
bananaTree_leaf();
glPopMatrix();

glPushMatrix();
glTranslatef(-.09f,0.10f,0.0f);
glScalef(.5,.5,0);
bananaTree_leaf();
glPopMatrix();

glPushMatrix();
glTranslatef(-.09f,0.06f,0.0f);
glScalef(.5,.5,0);
bananaTree_leaf();
glPopMatrix();

glPushMatrix();
glTranslatef(-.09f,0.26f,0.0f);
glScalef(.5,.5,0);
bananaTree_leaf();
glPopMatrix();

glPushMatrix();
glTranslatef(-.09f,0.22f,0.0f);
glScalef(.5,.5,0);
bananaTree_leaf();
glPopMatrix();

glPushMatrix();
glTranslatef(-.09f,0.18f,0.0f);
glScalef(.5,.5,0);
bananaTree_leaf();
glPopMatrix();

}

void man()
{
    glColor3ub(255, 204, 102);
    DrawCircle(-.63f, .025f, .0175f, 555, 2.0f);
    glColor3ub(51, 51, 0);
    DrawCircle(-.63f, .025f, .017f, 555, 1.0f);

   glBegin(GL_QUADS);
   glColor3ub(255, 255, 102);
   glVertex2f(-0.61f, -0.1f);
   glVertex2f(-0.65f, -0.1f);
   glVertex2f(-0.65f, 0.0f);
   glVertex2f(-0.61f, 0.0f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.61f, -0.02f);
   glVertex2f(-0.59f, -0.025f);
   glVertex2f(-0.59f, -0.03f);
   glVertex2f(-0.61f, -0.025f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.61f, -0.035f);
   glVertex2f(-0.59f, -0.045f);
   glVertex2f(-0.59f, -0.04f);
   glVertex2f(-0.61f, -0.045f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.625f, 0.0f);
   glVertex2f(-0.635f, 0.0f);
   glVertex2f(-0.635f, 0.015f);
   glVertex2f(-0.625f, 0.015f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(-0.615f, -0.1f);
   glVertex2f(-0.625f, -0.1f);
   glVertex2f(-0.625f, -0.15f);
   glVertex2f(-0.615f, -0.15f);
   glEnd();


   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(-0.635f, -0.1f);
   glVertex2f(-0.645f, -0.1f);
   glVertex2f(-0.645f, -0.15f);
   glVertex2f(-0.635f, -0.15f);
   glEnd();



   glBegin(GL_LINES);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.64f, -0.15f);
   glVertex2f(-0.64f, -0.16f);

   glVertex2f(-0.64f, -0.16f);
   glVertex2f(-0.63f, -0.16f);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.62f, -0.15f);
   glVertex2f(-0.62f, -0.16f);

   glVertex2f(-0.62f, -0.16f);
   glVertex2f(-0.61f, -0.16f);
   glEnd();

}
void man2()
{
    glColor3ub(255, 204, 102);
    DrawCircle(-.63f, .025f, .0175f, 555, 2.0f);
    glColor3ub(51, 51, 0);
    DrawCircle(-.63f, .025f, .017f, 555, 1.0f);

   glBegin(GL_QUADS);
   glColor3ub(255, 255, 102);
   glVertex2f(-0.61f, -0.1f);
   glVertex2f(-0.65f, -0.1f);
   glVertex2f(-0.65f, 0.0f);
   glVertex2f(-0.61f, 0.0f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.65f, -0.02f);
   glVertex2f(-0.67f, -0.025f);
   glVertex2f(-0.67f, -0.03f);
   glVertex2f(-0.65f, -0.025f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.65f, -0.035f);
   glVertex2f(-0.67f, -0.045f);
   glVertex2f(-0.67f, -0.04f);
   glVertex2f(-0.65f, -0.045f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.625f, 0.0f);
   glVertex2f(-0.635f, 0.0f);
   glVertex2f(-0.635f, 0.015f);
   glVertex2f(-0.625f, 0.015f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(-0.615f, -0.1f);
   glVertex2f(-0.625f, -0.1f);
   glVertex2f(-0.625f, -0.15f);
   glVertex2f(-0.615f, -0.15f);
   glEnd();


   glBegin(GL_QUADS);
   glColor3ub(51, 51, 0);
   glVertex2f(-0.635f, -0.1f);
   glVertex2f(-0.645f, -0.1f);
   glVertex2f(-0.645f, -0.15f);
   glVertex2f(-0.635f, -0.15f);
   glEnd();



   glBegin(GL_LINES);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.64f, -0.15f);
   glVertex2f(-0.64f, -0.16f);

   glVertex2f(-0.64f, -0.16f);
   glVertex2f(-0.65f, -0.16f);
   glEnd();

   glBegin(GL_LINES);
   glColor3ub(255, 204, 102);
   glVertex2f(-0.62f, -0.15f);
   glVertex2f(-0.62f, -0.16f);

   glVertex2f(-0.62f, -0.16f);
   glVertex2f(-0.63f, -0.16f);
   glEnd();

}
void tree2(){
//tree layer-1
glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.35f);
glVertex2f(-0.30f, 0.35f);
glVertex2f(-0.37f, 0.39f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.37f);
glVertex2f(-0.30f, 0.37f);
glVertex2f(-0.37f, 0.41f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.39f);
glVertex2f(-0.30f, 0.39f);
glVertex2f(-0.37f, 0.43f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.41f);
glVertex2f(-0.30f, 0.41f);
glVertex2f(-0.37f, 0.45f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.43f);
glVertex2f(-0.30f, 0.43f);
glVertex2f(-0.37f, 0.47f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.45f);
glVertex2f(-0.30f, 0.45f);
glVertex2f(-0.37f, 0.49f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.47f);
glVertex2f(-0.30f, 0.47f);
glVertex2f(-0.37f, 0.51f);
glEnd();




glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.49f);
glVertex2f(-0.30f, 0.49f);
glVertex2f(-0.37f, 0.53f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.51f);
glVertex2f(-0.30f, 0.51f);
glVertex2f(-0.37f, 0.55f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.53f);
glVertex2f(-0.30f, 0.53f);
glVertex2f(-0.37f, 0.57f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.55f);
glVertex2f(-0.30f, 0.55f);
glVertex2f(-0.37f, 0.59f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.57f);
glVertex2f(-0.30f, 0.57f);
glVertex2f(-0.37f, 0.61f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.59f);
glVertex2f(-0.30f, 0.59f);
glVertex2f(-0.37f, 0.63f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.61f);
glVertex2f(-0.30f, 0.61f);
glVertex2f(-0.37f, 0.65f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.63f);
glVertex2f(-0.30f, 0.63f);
glVertex2f(-0.37f, 0.67f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.65f);
glVertex2f(-0.30f, 0.65f);
glVertex2f(-0.37f, 0.69f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(0, 100,0);
glVertex2f(-0.45f, 0.67f);
glVertex2f(-0.30f, 0.67f);
glVertex2f(-0.37f, 0.71f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(102,51,0);
glVertex2f(-0.39f, 0.35f);
glVertex2f(-0.39f, 0.15f);
glVertex2f(-0.36f, 0.15f);
glVertex2f(-0.36f, 0.35f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(102,51,0);
glVertex2f(-0.38f, 0.65f);
glVertex2f(-0.38f, 0.35f);
glVertex2f(-0.37f, 0.35f);
glVertex2f(-0.37f, 0.65f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(102,51,0);
glVertex2f(-0.33f, 0.15f);
glVertex2f(-0.42f, 0.15f);
glVertex2f(-0.37f, 0.19f);
glEnd();



}
void boat1()
{

  glBegin(GL_TRIANGLES);
	glColor3ub(255, 153, 102);

	glVertex2f(-0.19f, -0.86f);
	glVertex2f(-0.14f, -0.82f);
	glVertex2f(-0.14f, -0.75f);

glEnd();

glColor3ub(0, 0, 0);
DrawCircle(-0.14f,-.74f,.02f,490,2.0f);


 glBegin(GL_QUADS);
     glColor3ub(153, 77, 0);
      glVertex2f(-0.25f, -0.7f);
      glVertex2f(-0.24f, -0.695f);
      glVertex2f(-0.07f, -0.95f);

       glVertex2f(-0.08f, -0.96f);

     glEnd();


 glBegin(GL_LINES);
     glColor3ub(153, 77, 0);
      glVertex2f(-0.15f, -0.8f);
      glVertex2f(-0.2f, -0.76f);

     glVertex2f(-0.15f, -0.79f);

      glVertex2f(-0.18f, -0.79f);

     glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);

	//
	glVertex2f(-0.3f, -0.95f);
	glVertex2f(-0.1f, -0.8f);
	glVertex2f(-0.3f, -0.90f);
	glVertex2f(-0.6f, -0.90f);
	//glVertex2f(-0.8f, -0.80f);
   glVertex2f(-0.6f, -0.95f);

glEnd();


glBegin(GL_POLYGON);
	glColor3ub(0,0,0);

	glVertex2f(-0.6f, -0.95f);
	glVertex2f(-0.3f, -0.95f);
	//glVertex2f(-0.1f, -0.8f);
	glVertex2f(-0.3f, -0.90f);
	glVertex2f(-0.6f, -0.90f);
	glVertex2f(-0.8f, -0.80f);

glEnd();

   glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);

	glVertex2f(-0.6f, -0.9f);
	glVertex2f(-0.3f, -0.9f);
	glVertex2f(-0.3f, -0.80f);
	glVertex2f(-0.6f, -0.80f);


glEnd();

  glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 102, 0);
	glVertex2f(-0.6f,-0.9f);
	glVertex2f(-0.5f,-0.9f);
	glVertex2f(-0.53f,-0.845f);
	glVertex2f(-0.56f,-0.81f);
	glVertex2f(-0.6f,-0.8f);
	glVertex2f(-0.645f,-0.81f);
	glVertex2f(-0.7f,-0.85f);
	glEnd();

glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 0);

	glVertex2f(-0.3f,-0.9f);
	glVertex2f(-0.225f,-0.865f);
	glVertex2f(-0.23f,-0.85f);
	glVertex2f(-0.25f,-0.83f);

	glVertex2f(-0.3f,-0.8f);

	glEnd();




}

void mountain(){
glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-1.1f, 0.5f);
      glVertex2f(-0.8f, 0.9f);
      glVertex2f(-0.7f, 0.5f);

       glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-0.85f, 0.5f);
       glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
      glVertex2f(-0.65f, 0.9f);
      glVertex2f(-0.5f, 0.5f);

     glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-0.7f, 0.5f);
      glVertex2f(-0.5f, 0.8f);
     glVertex2f(-0.3f, 0.5f);

          glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-0.5f, 0.5f);
      glVertex2f(-0.2f, 0.8f);
     glVertex2f(0.1f, 0.5f);

          glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-0.3f, 0.5f);
      glVertex2f(0.0f, 0.9f);
     glVertex2f(0.4f, 0.5f);

      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(0.1f, 0.5f);
      glVertex2f(0.5f, 1.0f);
     glVertex2f(0.8f, 0.5f);



       glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(1.1f, 0.5f);
      glVertex2f(0.8f, 0.9f);
      glVertex2f(0.7f, 0.5f);


      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(0.85f, 0.5f);
      glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
       glVertex2f(0.65f, 0.9f);
        glVertex2f(0.5f, 0.5f);

      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(0.7f, 0.5f);
      glVertex2f(0.5f, 0.8f);
       glVertex2f(0.3f, 0.5f);

   glEnd();
}

void rainy_day(int value){

    int max_value = 10;
    int min_value = 5;
    if(rainFlag){

        rain += 0.01f;

        glBegin(GL_POINTS);
        for(int i=1;i<=1000;i++)
        {
            float x = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
            float y = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
            glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);

            glVertex2d(x,y);
            glVertex2d(x+.02,y+.04);

            glVertex2d(-x,-y);
            glVertex2d(-x +.01,-y +.02);

            glVertex2d(-x,y);
            glVertex2d(-x +.01,y +.02);

            glVertex2d(x,-y);
            glVertex2d(x +.01,-y +.02);

            glEnd();
        }

        glutPostRedisplay();
       glutTimerFunc(5, rainy_day, 0);

        glFlush();

    }
}

void night_view(){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(1,0,0);
sky();
mountain();
glPushMatrix();
glTranslatef(0.0f,position3,0.f);
glColor3ub(255, 115, 15);
DrawCircle(0.0f,.4f,.2f,490,1.0f);
glPopMatrix();
glPushMatrix();
glTranslatef(position2,0.0f,0.f);
bird();
glPopMatrix();
green();

Khor();
river();
glPushMatrix();
glTranslatef(position4,0.0f,0.f);
deow();
glPopMatrix();

glPushMatrix();
glTranslatef(-1.14f,0.15f,0.0f);
tree();
glPopMatrix();


baar();

glPushMatrix();
glTranslatef(-1.2f,0.08f,0.0f);
tree();
glPopMatrix();

tree1();
house();

glPushMatrix();
glTranslatef(-.05f,0.1f,0.0f);
banana_tree();
glPopMatrix();

glPushMatrix();
glTranslatef(.6f,0.05f,0.0f);
banana_tree();
glPopMatrix();

glPushMatrix();
glTranslatef(-.15f,0.2f,0.f);
tree();
glPopMatrix();

glPushMatrix();
glTranslatef(0.5,0.1f,0.f);
house();
glPopMatrix();


glPushMatrix();
glTranslatef(1.05f,0.1f,0.f);
house();
glPopMatrix();

glPushMatrix();
glTranslatef(position,0.0f,0.f);
boat1();
glPopMatrix();

glPushMatrix();
glTranslatef(position2,0.25f,0.f);
boat1();
glPopMatrix();

glPushMatrix();
glTranslatef(1.75f,0.07f,0.f);
tree1();
glPopMatrix();
glPushMatrix();
glTranslatef(1.67f,0.05f,0.f);
house();
glPopMatrix();


glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4ub(0, 0, 0, 950);
    glBegin(GL_QUADS);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.00f, -1.0f);
    glVertex2f(-1.00f, -1.0f);
        glVertex2f(-1.0f,1.0f);
    glEnd();

glFlush();


}

void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

sky();
mountain();

glPushMatrix();
glTranslatef(0.0f,position3,0.f);
glColor3ub(255, 115, 15);
DrawCircle(0.0f,.4f,.2f,490,1.0f);
glPopMatrix();

glPushMatrix();
glTranslatef(position2,0.0f,0.f);
bird();
glPopMatrix();

green();

Khor();
river();
glPushMatrix();
glTranslatef(position4,0.0f,0.f);
deow();
glPopMatrix();

glPushMatrix();
glTranslatef(-1.14f,0.15f,0.0f);
tree();
glPopMatrix();


baar();

glPushMatrix();
glTranslatef(-1.2f,0.08f,0.0f);
tree();
glPopMatrix();

tree1();
house();

glPushMatrix();
glTranslatef(-.05f,0.1f,0.0f);
banana_tree();
glPopMatrix();

glPushMatrix();
glTranslatef(.6f,0.05f,0.0f);
banana_tree();
glPopMatrix();

glPushMatrix();
glTranslatef(-.15f,0.2f,0.f);
tree();
glPopMatrix();

glPushMatrix();
glTranslatef(0.5,0.1f,0.f);
house();
glPopMatrix();


glPushMatrix();
glTranslatef(1.05f,0.1f,0.f);
house();
glPopMatrix();

glPushMatrix();
glTranslatef(position,0.0f,0.f);
boat1();
glPopMatrix();

glPushMatrix();
glTranslatef(position2,0.25f,0.f);
boat1();
glPopMatrix();

glPushMatrix();
glTranslatef(1.75f,0.07f,0.f);
tree1();
glPopMatrix();
glPushMatrix();
glTranslatef(1.67f,0.05f,0.f);
house();
glPopMatrix();

glPushMatrix();
glTranslatef(m1,0.11f,0.f);
glScaled(1.3f,1.7f,0.f);
man();
glPopMatrix();
glPushMatrix();
glTranslatef(m2,0.11f,0.f);
glScaled(1.3f,1.7f,0.f);
man2();
glPopMatrix();

if(position3<=0.2)
{
    position3+=0.002f;

}

if(position4<=0.0)
{
    position4+=0.009f;

}
else
    {
    position4-=0.009f;
}
if(m1<=1.9)
  {
        m1+=0.009f;
  }
   else{
    //i = 0.0f;
    //j = 0.0f;
//s=-0.0f;
    //k=0.0f;
   m1=-1.0f;
  }


  if(m2>=0.0f)
  {
        m2-=0.009f;
  }
   else{

   m2=1.9f;
  }
   glFlush();
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
	    speed += 0.01f;

    }
if (button == GLUT_RIGHT_BUTTON)
	{
	    speed -= 0.01f;
	}
glutPostRedisplay();
}



void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
//do something here
glutTimerFunc(100, update2, 0);
break;
case GLUT_KEY_DOWN:
//do something here
// position2 -= speed;
 //position -= speed;
   glutTimerFunc(100, update2, 0);
break;
case GLUT_KEY_LEFT:
    speed1 =0.0f;
//do something here
break;
case GLUT_KEY_RIGHT:
   speed1 =0.01f;
break;
}
glutPostRedisplay();
}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'r':
    rainFlag = true;
rainy_day(rain);
    break;
case 'n':
glutDisplayFunc(night_view);
    break;
    case 'd':
glutDisplayFunc(display);
    break;
    case 's':
    rainFlag = false;
    break;
glutPostRedisplay();
	}}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1020, 720);
   glutInitWindowPosition(300, 50);
   glutCreateWindow("Beautiful Village Scenario");
   glutDisplayFunc(display);


   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update2, 0);
   glutSpecialFunc(SpecialInput);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);

   glutMainLoop();
   return 0;
}


#include <GL/glut.h>
#include <cmath>
#include <time.h>
#include <thread>
#include <chrono>

using namespace std;

void RenderSineWave()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);  // clear background with black
    glClear(GL_COLOR_BUFFER_BIT);   

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    double w = glutGet( GLUT_WINDOW_WIDTH );
    double h = glutGet( GLUT_WINDOW_HEIGHT );
    double ar = w / h;
    glOrtho( -360 * ar, 360 * ar, -120, 120, -1, 1 );

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glPointSize(3);
    glColor3f(1.0,0.0,0.0);

    glBegin(GL_POINTS);
    //glBegin(GL_QUADS); 
  //glScalef(2.0, 12.0, 0.0);
//glScalef(112.0f, 112.0f, 10.0f);
	glTranslated(0.5,0,0);
    glColor3f(1.0f, 0.0f, 0.0f);
	// FRONT
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f( 1, -1, 1);
	glVertex3f( 1, 1, 1);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-1, 1, 1);
	// BACK
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glColor3f(1f, 1f, 1f);
	glVertex3f( 1, 1, -1);
	glVertex3f( 1, -1, -1);

	glColor3f(0.0f, 1.0f, 0.0f);
	// LEFT
	glVertex3f(-1, -1, 1);
	glVertex3f(-0.5f, 0.5f, 0.5f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-0.5f, 0.5f, -0.5f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.5f, -0.5f, -0.5f);
	// RIGHT
	glVertex3f( 0.5f, -0.5f, -0.5f);
	glVertex3f( 0.5f, 0.5f, -0.5f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f( 0.5f, 0.5f, 0.5f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f( 0.5f, -0.5f, 0.5f);

	glColor3f(0.0f, 0.0f, 1.0f);
	// TOP
	glVertex3f(-0.5f, 0.5f, 0.5f);
	glVertex3f( 0.5f, 0.5f, 0.5f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f( 0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);
	glColor3f(1.0f, 0.0f, 0.0f);
	// BOTTOM
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-0.5f, -0.5f, -0.5f);
	glVertex3f( 0.5f, -0.5f, -0.5f);
	glVertex3f( 0.5f, -0.5f, 0.5f);
    
    
    //for(int i=0;i<361;i=i+5)
    
    //for (int i =0 ; i < 2020 ; i+=5)
    //{
    //    //float x = (float)i; 
    //    
    //        float x = i-1000; 
    //    
    //    //float y = 100.0 * sin(i *(6.284/360.0));
    //    
    //    float y = 20 * sin(i *(5/360.0));
    //    
    //    glVertex2f(x,y);
    //
    //}
    glEnd();
    
	    glutSwapBuffers();
}

//void sine()
//{
// glClearColor(0.0 , 0.0 , 0.0 , 1.0);
// glClear(GL_COLOR_BUFFER_BIT);
// int n;
// for (n= 0 ;  ; n++ )
// {
////	double val = sin(t) * 10.0;
//       		
// 
// 
// 
// }
//
//
//}
//



int main(int argc, char** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );
    glutInitWindowSize( 640, 480 );
    glutCreateWindow( "Kubik" );
    glutDisplayFunc( RenderSineWave );
    glutMainLoop();
    return 0;
}

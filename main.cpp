#include <stdlib.h>
#include<Windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>

#include<stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/GLAUX.h>

double a=0.0,b=0.0,c=15.0;
GLfloat	l_t=0;
GLuint texture[50];
void LoadGLTextures()
{
	AUX_RGBImageRec* TextureImage;

	glGenTextures(16,texture);

	if (TextureImage = auxDIBImageLoad("s.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[0]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("cod.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[1]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("c.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[9]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("s.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[10]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("e.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[8]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("rtry.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[2]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("blue.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[3]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("blue.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[4]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("bl.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[5]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("slp.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[6]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
	if (TextureImage = auxDIBImageLoad("et.bmp"))
	{
		glBindTexture(GL_TEXTURE_2D, texture[7]);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, TextureImage->sizeX, TextureImage->sizeY, 0, GL_RGB, GL_UNSIGNED_BYTE, TextureImage->data);
	}
}
void bk()
{


       glBindTexture(GL_TEXTURE_2D, texture[5]);
           glBegin(GL_QUADS);


            //glColor3f(1.0f,1.0f,0.0f);
             				// Top front Of The Quad (left)
            glTexCoord2f(1.0f,0.0f); glVertex3f(1.0f,-1.0f,4.0f);					// Top back Of The Quad (left)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,4.0f);
            glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f,1.0f,4.0f);						// Bottom back Of The Quad (left)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);					// Bottom front Of The Quad (left)

            //glColor3f(0.0f,1.0f,0.0f);

           				// Bottom front Of The Quad (right)

            glEnd();
}
void cdd()
{
    // Draw A Quad

        glBindTexture(GL_TEXTURE_2D, texture[9]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);
            glEnd();
            glBindTexture(GL_TEXTURE_2D, texture[2]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);
            glEnd();

              glBindTexture(GL_TEXTURE_2D, texture[1]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,-1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,-1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);
            glEnd();
//c vitor jora

             glBindTexture(GL_TEXTURE_2D, texture[2]);
               glBegin(GL_QUADS);

           glBegin(GL_QUADS);
           glTexCoord2f(0.0f,1.0f);  glVertex3d(-.5,-.5,1.50);				    // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,.5,1.5);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f);  glVertex3f(-.5,.5,4);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-.5,-.50,4);





        glEnd();
 glBindTexture(GL_TEXTURE_2D, texture[2]);

           glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f);glVertex3f(1,.5,4);
        glTexCoord2f(1.0f,1.0f); glVertex3f(1,.5,1.5);
         glTexCoord2f(1.0f,0.0f);  glVertex3d(-1,.5,1.50);
          glTexCoord2f(0.0f,0.0f); glVertex3f(-1,.5,4);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[2]);
          glBegin(GL_QUADS);

           glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f);glVertex3f(-1,-.5,4);
        glTexCoord2f(1.0f,1.0f); glVertex3f(-1,-.5,1.50);
         glTexCoord2f(1.0f,0.0f); glVertex3d(1,-.5,1.50);
          glTexCoord2f(0.0f,0.0f);  glVertex3f(1,-.50,4);


        glEnd();
           glBindTexture(GL_TEXTURE_2D, texture[3]);

           glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f); glVertex3f(1,1,4);
         glTexCoord2f(1.0f,1.0f);glVertex3f(1,1,1.50);
          glTexCoord2f(1.0f,0.0f); glVertex3d(1,.5,1.50);
            glTexCoord2f(0.0f,0.0f); glVertex3f(1,.5,4);


        glEnd();
         // glBegin(GL_QUADS);
 glBindTexture(GL_TEXTURE_2D, texture[3]);
           glBegin(GL_QUADS);

        glTexCoord2f(0.0f,1.0f); glVertex3f(1,-1,4);
           glTexCoord2f(1.0f,1.0f);glVertex3d(1,-1,1.50);
           glTexCoord2f(1.0f,0.0f); glVertex3f(1,-.50,1.50);
            glTexCoord2f(0.0f,0.0f); glVertex3f(1,-.5,4);


        glEnd();


             glBindTexture(GL_TEXTURE_2D, texture[4]);
            glBegin(GL_QUADS);

           //glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3f(-1,-1,1.50);
         glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,-1,1.50);
          glTexCoord2f(1.0f,0.0f); glVertex3d(-.5,1,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,1.0,1.50);


        glEnd();
 glBindTexture(GL_TEXTURE_2D, texture[4]);
                glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(1,.5,1.50);
         glTexCoord2f(1.0f,1.0f); glVertex3f(1,1,1.50);
          glTexCoord2f(1.0f,0.0f); glVertex3d(-1,1,1.50);
          glTexCoord2f(0.0f,0.0f); glVertex3f(-1,.50,1.50);


        glEnd();
glBindTexture(GL_TEXTURE_2D, texture[4]);
                glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f);glVertex3f(1,-.5,1.50);
        glTexCoord2f(1.0f,1.0f);  glVertex3f(-1,-.5,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,-1,1.50);
            glTexCoord2f(0.0f,0.0f); glVertex3f(1,-1,1.50);




        glEnd();
        glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f);glVertex3f(-1,-1,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,-1,4.0);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-.5,1,4.0);
           glTexCoord2f(0.0f,0.0f);glVertex3f(-1,1.0,4.0);


        glEnd();

                glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f);glVertex3f(1,.5,4.0);
         glTexCoord2f(1.0f,1.0f);glVertex3f(1,1,4.0);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,1,4.0);
           glTexCoord2f(0.0f,0.0f);glVertex3f(-1,.50,4.0);


        glEnd();

                glBegin(GL_QUADS);
       glTexCoord2f(0.0f,1.0f); glVertex3f(1,-.5,4.0);
         glTexCoord2f(1.0f,1.0f);glVertex3f(-1,-.5,4.0);
          glTexCoord2f(1.0f,0.0f); glVertex3d(-1,-1,4.0);
          glTexCoord2f(0.0f,0.0f); glVertex3f(1,-1,4.0);



        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[4]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f,1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,-1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);
            glEnd();
}
//s
void s()
{

            glBindTexture(GL_TEXTURE_2D, texture[10]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);
            glEnd();

              glBindTexture(GL_TEXTURE_2D, texture[6]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,-1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,-1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);
            glEnd();
//c vitor jora

             glBindTexture(GL_TEXTURE_2D, texture[4]);


           glBegin(GL_QUADS);

           glTexCoord2f(0.0f,1.0f);glVertex3d(-1,-.5,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,-1,4.0);
           glTexCoord2f(1.0f,0.0f);glVertex3d(1,-1,4.0);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-.5,4.0);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(-1,-.5,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(-1,-.5,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(1,-.5,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-.5,4.0);


        glEnd();



  glBindTexture(GL_TEXTURE_2D, texture[4]);

glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(1,-.25,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(.4,-.25,4.0);
           glTexCoord2f(1.0f,0.0f); glVertex3d(.4,-.5,4.0);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-.5,4.0);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(.4,-.25,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(.4,-.25,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(.4,-.5,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(.4,-.5,4.0);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[4]);

glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(1,.25,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(1,.25,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(1,-.5,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-.5,4.0);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[2]);

glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(.4,-.25,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(.4,-.25,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(-1,-.25,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(-1,-.25,4.0);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[2]);

glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(-.4,-.25,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(-.4,-.25,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(1,-.25,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-.25,4.0);


        glEnd();//mily na
        glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,.250f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,.250f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,.250f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,.250f,4.0f);

        glEnd();
                glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(-.4,.25,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(-.4,.25,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(-.4,.5,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(-.4,.5,4.0);


        glEnd();
              glBegin(GL_QUADS);

          glTexCoord2f(0.0f,1.0f); glVertex3d(-1,.5,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(-1,.5,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(1,.5,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,.5,4.0);
        glEnd();
         glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(1,-.5,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3d(1,-.5,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(-1,-.5,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(-1,-.5,4.0);


        glEnd();
          glBindTexture(GL_TEXTURE_2D, texture[4]);


        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(-1,.5,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,.25,4.0);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-.4,.25,4.0);
            glTexCoord2f(0.0f,0.0f);glVertex3d(-.4,.5,4.0);


        glEnd();
           glBindTexture(GL_TEXTURE_2D, texture[4]);


        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(-1,1,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,1,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,-.25,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3d(-1,-.25,4.0);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[4]);


        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(1,1,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3d(1,1,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(1,.5,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,.5,4.0);


        glEnd();
          glBindTexture(GL_TEXTURE_2D, texture[4]);


        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(-1,-1,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,-1,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,-.5,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3d(-1,-.5,4.0);


        glEnd();

  glBindTexture(GL_TEXTURE_2D, texture[4]);

           glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f); glVertex3d(1,-.25,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,-.25,4.0);
          glTexCoord2f(1.0f,0.0f); glVertex3d(-1,.25,4.0);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,.25,4.0);

        glEnd();
         // glBegin(GL_QUADS);

           glBindTexture(GL_TEXTURE_2D, texture[4]);
  glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(-1,-.25,4);
        glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,-.25,4);
          glTexCoord2f(1.0f,0.0f);glVertex3d(-.5,.25,4);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,.25,4);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[4]);
          glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f); glVertex3f(-1,.5,4);
        glTexCoord2f(1.0f,1.0f);  glVertex3f(1,.5,4);
         glTexCoord2f(1.0f,0.0f); glVertex3d(1,1,4);
           glTexCoord2f(0.0f,0.0f); glVertex3f(-1,1,4);


        glEnd();

        //s oppo
          glBindTexture(GL_TEXTURE_2D, texture[4]);


           glBegin(GL_QUADS);

           glTexCoord2f(0.0f,1.0f);glVertex3d(-1,-.5,1.5);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,-1,1.5);
           glTexCoord2f(1.0f,0.0f);glVertex3d(1,-1,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-.5,1.5);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[4]);


           glBegin(GL_QUADS);

           glTexCoord2f(0.0f,1.0f);glVertex3d(1,-.5,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3d(1,-.5,1.5);
           glTexCoord2f(1.0f,0.0f);glVertex3d(1,-1,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-1,4.0);


        glEnd();
        glBindTexture(GL_TEXTURE_2D, texture[4]);

glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(1,-.25,1.5);
         glTexCoord2f(1.0f,1.0f); glVertex3d(.4,-.25,1.5);
           glTexCoord2f(1.0f,0.0f); glVertex3d(.4,-.5,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,-.5,1.5);


        glEnd();
          glBindTexture(GL_TEXTURE_2D, texture[4]);


        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f); glVertex3d(-1,.5,1.5);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,.25,1.5);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-.4,.25,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(-.4,.5,1.5);


        glEnd();

  glBindTexture(GL_TEXTURE_2D, texture[4]);

           glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f); glVertex3d(1,-.25,1.5);
          glTexCoord2f(1.0f,1.0f);glVertex3d(-1,-.25,1.5);
          glTexCoord2f(1.0f,0.0f); glVertex3d(-1,.25,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3d(1,.25,1.5);

        glEnd();
         // glBegin(GL_QUADS);

           glBindTexture(GL_TEXTURE_2D, texture[4]);
  glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(-1,-.25,1.5);
        glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,-.25,1.5);
          glTexCoord2f(1.0f,0.0f);glVertex3d(-.5,.25,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,.25,1.5);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[4]);
          glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f); glVertex3f(-1,.5,1.5);
        glTexCoord2f(1.0f,1.0f);  glVertex3f(1,.5,1.5);
         glTexCoord2f(1.0f,0.0f); glVertex3d(1,1,1.5);
           glTexCoord2f(0.0f,0.0f); glVertex3f(-1,1,1.5);


        glEnd();


}






//e
void e()
{
    // Draw A Quad

       glBindTexture(GL_TEXTURE_2D, texture[8]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,0.0f); glVertex3f(1.0f,1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);
            glEnd();
            glBindTexture(GL_TEXTURE_2D, texture[4]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(0.0f,1.0f); glVertex3f(-1.0f,1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(-1.0f,-1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);
            glEnd();
            glBindTexture(GL_TEXTURE_2D, texture[2]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,1.0f,4.0f);
            glEnd();

              glBindTexture(GL_TEXTURE_2D, texture[7]);
            glBegin(GL_QUADS);
             glTexCoord2f(0.0f,1.0f); glVertex3f(1.0f,-1.0f,4.0f);					    // Top front Of The Quad (right)
            glTexCoord2f(1.0f,1.0f); glVertex3f(1.0f,-1.0f,1.50f);					    // Top back Of The Quad (right)
            glTexCoord2f(1.0f,0.0f); glVertex3f(-1.0f,-1.0f,1.50f);					// Bottom back Of The Quad (right)
            glTexCoord2f(0.0f,0.0f); glVertex3f(-1.0f,-1.0f,4.0f);
            glEnd();
//tol

//c vitor jora

             glBindTexture(GL_TEXTURE_2D, texture[3]);
               glBegin(GL_QUADS);

         //  glBegin(GL_QUADS);

         glTexCoord2f(0.0f,1.0f);  glVertex3d(-.5,-.5,1.50);
           glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,-.50,4);
           glTexCoord2f(1.0f,0.0f); glVertex3f(-.5,.5,4);
          glTexCoord2f(0.0f,0.0f);glVertex3f(-.5,.5,1.5);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[2]);
         // glBegin(GL_QUADS);

           glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f);glVertex3f(1,.5,4);
          glTexCoord2f(1.0f,1.0f);glVertex3f(1,.5,1.5);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,.5,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,.5,4);


        glEnd();
          glBegin(GL_QUADS);

          // glBegin(GL_QUADS);
           glBindTexture(GL_TEXTURE_2D, texture[2]);
         glTexCoord2f(0.0f,1.0f); glVertex3f(-1,-.5,4);
          glTexCoord2f(1.0f,1.0f);glVertex3f(-1,-.5,1.50);
          glTexCoord2f(1.0f,0.0f); glVertex3d(1,-.5,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(1,-.50,4);


        glEnd();
         // glBegin(GL_QUADS);
 glBindTexture(GL_TEXTURE_2D, texture[3]);
           glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(1,1,4);
         glTexCoord2f(1.0f,1.0f); glVertex3f(1,1,1.50);
          glTexCoord2f(1.0f,0.0f); glVertex3d(1,.5,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(1,.5,4);


        glEnd();
         glBindTexture(GL_TEXTURE_2D, texture[3]);
          glBegin(GL_QUADS);

           //glBegin(GL_QUADS);
          //  glBindTexture(GL_TEXTURE_2D, texture[3]);

         glTexCoord2f(0.0f,1.0f); glVertex3f(1,-1,4);
           glTexCoord2f(1.0f,1.0f);glVertex3d(1,-1,1.50);
            glTexCoord2f(1.0f,0.0f);glVertex3f(1,-.50,1.50);
             glTexCoord2f(0.0f,0.0f);glVertex3f(1,-.5,4);


        glEnd();
 glBindTexture(GL_TEXTURE_2D, texture[2]);
        glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(-.5,-.25,4);
           glTexCoord2f(1.0f,1.0f);glVertex3f(-.5,-.25,1.5);
            glTexCoord2f(1.0f,0.0f);glVertex3f(.3,-.25,1.5);
             glTexCoord2f(0.0f,0.0f);glVertex3f(.3,-.25,4);
        glEnd();


           glBegin(GL_QUADS);
 glBindTexture(GL_TEXTURE_2D, texture[2]);
          glTexCoord2f(0.0f,1.0f); glVertex3f(.3,.25,4);
           glTexCoord2f(1.0f,1.0f); glVertex3f(.3,.25,1.5);
             glTexCoord2f(1.0f,0.0f);glVertex3f(-.5,.25,1.5);
              glTexCoord2f(0.0f,0.0f);glVertex3f(-.5,.25,4);


        glEnd();

 glBindTexture(GL_TEXTURE_2D, texture[3]);
           glBegin(GL_QUADS);

         glTexCoord2f(0.0f,1.0f); glVertex3f(.3,.25,4);
           glTexCoord2f(1.0f,1.0f);glVertex3f(.3,.25,1.5);
            glTexCoord2f(1.0f,0.0f);glVertex3f(.3,-.25,1.5);
            glTexCoord2f(0.0f,0.0f);glVertex3f(.3,-.25,4);

        glEnd();


             glBindTexture(GL_TEXTURE_2D, texture[4]);
            //glBegin(GL_QUADS);

           glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(-1,-1,1.50);
          glTexCoord2f(1.0f,1.0f);glVertex3f(-.5,-1,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-.5,1,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,1.0,1.50);


        glEnd();
  glBindTexture(GL_TEXTURE_2D, texture[4]);
            //glBegin(GL_QUADS);
                glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f);glVertex3f(1,.5,1.50);
          glTexCoord2f(1.0f,1.0f);glVertex3f(1,1,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,1,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,.50,1.50);


        glEnd();
  glBindTexture(GL_TEXTURE_2D, texture[4]);
            //glBegin(GL_QUADS);
                glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f);glVertex3f(1,-.5,1.50);
          glTexCoord2f(1.0f,1.0f);glVertex3f(-1,-.5,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,-1,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(1,-1,1.50);
           glEnd();  glBindTexture(GL_TEXTURE_2D, texture[4]);
            //glBegin(GL_QUADS);

                glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f); glVertex3f(.3,.25,1.50);
          glTexCoord2f(1.0f,1.0f);glVertex3f(-.5,.25,1.50);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-.5,-.25,1.50);
            glTexCoord2f(0.0f,0.0f);glVertex3f(.3,-.25,1.50);
        glEnd();
          glBindTexture(GL_TEXTURE_2D, texture[4]);
            //glBegin(GL_QUADS);

        glBegin(GL_QUADS);
          glTexCoord2f(0.0f,1.0f);glVertex3f(-1,-1,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,-1,4.0);
          glTexCoord2f(1.0f,0.0f); glVertex3d(-.5,1,4.0);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,1.0,4.0);


        glEnd();

                glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f); glVertex3f(1,.5,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3f(1,1,4.0);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,1,4.0);
            glTexCoord2f(0.0f,0.0f);glVertex3f(-1,.50,4.0);


        glEnd();

                glBegin(GL_QUADS);
        glTexCoord2f(0.0f,1.0f); glVertex3f(1,-.5,4.0);
          glTexCoord2f(1.0f,1.0f);glVertex3f(-1,-.5,4.0);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-1,-1,4.0);
            glTexCoord2f(0.0f,0.0f);glVertex3f(1,-1,4.0);



        glEnd();
            glBegin(GL_QUADS);
         glTexCoord2f(0.0f,1.0f);glVertex3f(0.3,.25,4.0);
         glTexCoord2f(1.0f,1.0f); glVertex3f(-.5,.25,4.0);
           glTexCoord2f(1.0f,0.0f);glVertex3d(-.5,-.25,4.0);
           glTexCoord2f(0.0f,0.0f); glVertex3f(0.3,-.25,4.0);



        glEnd();
}


void init(void)
{
 //glBindTexture(GL_TEXTURE_2D, texture[0]);
   LoadGLTextures();

   glClearColor (0.0, 0.0, 0.52, 0.0);
}

void display(void)
{

   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);      // GL_COLOR_BUFFER_BIT indicates that the buffer is currently enabled for color writing
   glMatrixMode(GL_PROJECTION);
       // Specify which matrix is the current matrix mode
   glLoadIdentity();                  // Replace the current matrix with the identity matrix
   int w=glutGet(GLUT_WINDOW_WIDTH);
   int h=glutGet(GLUT_WINDOW_HEIGHT);
   gluPerspective(40,w/h,0.1,100);    // fovy specifies the field of view angle in degrees in y direction, aspect specifies aspect ratio that determines the field of view in the x direction, znear and zfar specifies the distance from viewer to the near and far clipping plane respectively (always positive)
   glMatrixMode(GL_MODELVIEW);       //  To allow transformation on 3D object

   glLoadIdentity();
   gluLookAt(                       //  eyex, eyey, eyez specify the position of the eye point, centerx, centery, centerz specify the position of reference point, upx, upy, upz specify the direction of up vector
               a,b,c,
               0,0,0,
               0,1,0
             );
 glPushMatrix();
 glEnable(GL_TEXTURE_2D);
             glTranslatef(0,0,-6.1);
             glScalef(62,32,-13);
bk();
 glDisable(GL_TEXTURE_2D);
glPopMatrix();
   glPushMatrix();
   glRotatef(l_t,1.0f,0.0f,0.0f);

   glEnable(GL_TEXTURE_2D);
  // glScalef(.7f,.7f,.7f);
   glTranslatef(-2,1,1);
   cdd();
  // Sleep(3);
   //glTranslatef(-1,2,7);
  // quad();
   glDisable(GL_TEXTURE_2D);

    glPopMatrix();

     glPushMatrix();

   glRotatef(l_t,1.0f,0.0f,0.0f);

   glEnable(GL_TEXTURE_2D);

   glTranslatef(.3,0,0);

   s();

   glDisable(GL_TEXTURE_2D);

    glPopMatrix();
     glPushMatrix();

   glRotatef(l_t,1.0f,0.0f,0.0f);

   glEnable(GL_TEXTURE_2D);
   //glScalef(.8f,.f,.6f);
   glTranslatef(2.9,-1,-1);
   e();
   Sleep(3);
  // glTranslatef(-1,2,7);
  // quad();
   glDisable(GL_TEXTURE_2D);

    glPopMatrix();


   glFlush(); // Force execution of GL commands in finite time

}


void spinDisplay_left(void)		//spin speed
{

    l_t =l_t+0.2;
    glutPostRedisplay();
}

void specialKeys(int key,int x,int y)
{
    if(key==GLUT_KEY_RIGHT)
          {
              if (a<=5.8&& a>=-5.8)a-=0.03;
              else a=0;
              glutPostRedisplay();
          }
    else if(key==GLUT_KEY_LEFT)
            {
              if (a<=5.8&& a>=-5.8)a+=0.03;
              else a=0;
              glutPostRedisplay();
          }
    glutPostRedisplay();
}

void mouse(int button, int state, int s, int t)
{

   switch (button)
   {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(NULL);
         break;
      default:
         break;
   }
}

int main()
{   PlaySound("Computer-melody-80s-style.wav",NULL,SND_FILENAME| SND_ASYNC);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize (800, 800);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("codesleepeat");
	//glBindTexture(GL_TEXTURE_2D, texture[2]);
	init();



    glutSpecialFunc(specialKeys);

    glutDisplayFunc(display);

    glEnable(GL_DEPTH_TEST);
    //glutKeyboardFunc(my_keyboard);
    glutMouseFunc(mouse);
	glutMainLoop();
	return 0;
}

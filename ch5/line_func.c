typedef struct { float x, y;} wcPt2D; //world coordiinate 


wcPt2D dataPts [5];

void linePlot(wcPt2D dataPts[5])
{
	int k;
	glBegin(GL_LINE_STRIP);
		for (k=0; k<5; k++){
			glVertex2f(dataPts[k].x, dataPts[k].y);
		}

	glFlush();
	glEnd();
}

// invoke a procedure here to draw coordinate axis

glEnable(GL_LINE_STRIPPLE);

// input first set of (x,y) data values
glLineStipple(1, 0x1C47); //plot a dash dot, standard-width polyline.
linePlot(dataPts);

glDisable(GL_LINE_STRIPPLE);
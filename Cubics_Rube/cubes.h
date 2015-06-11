#ifndef _cubes_h
#define _cubes_h

/********************************************************************************
 * Class: Cubes
 * Function: Provides a number of operations on cubes with OpenGL
 * 
 * Members:
 * Data Members:
 * 
 * Method Members:
 *	drawCube		: Takes in location, size, and index information to build a cube in OpenGL
 *	drawSquare		: Takes in location, size, and index information to build a square in OpenGL
 *	drawTriangle	: Takes in location, size, and index information to build a triangle in OpenGL
 *	rotateCube		: Takes in direction and index information to rotate a cube 90 degrees about its center.
 *	getVertexBuffer	: returns a pointer to the vertex buffer.
 *	getColorBuffer	: returns a pointer to the color buffer.
 *
 * @author David Lipke
 * @version 1.0
 * 
 *******************************************************************************/
#include "constants.h"

class Cubes {
private:
	static void drawSquare();
	static void drawTriangle();

public:
	static void drawCube();
	static void rotateCube();
	static GLfloat* getVertexBuffer();
	static GLfloat* getColorBuffer();
}

#endif
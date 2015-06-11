#ifndef _constants_h
#define _constants_h

/********************************************************************************
 * File: Constants
 * Function: Provides one place for constants to be declared and later used.
 *
 * Members:
 * Data Members:
 * Enumerations:
 * dir_cube_directions_t	: An enumeration of constants describing the directions of normal vectors and rotation
 *								dir_UP, dir_NORTH, dir_EAST, dir_SOUTH, dir_WEST, dir_DOWN
 *
 * Size Related:
 * scal_CUBE_HEIGHT				: The height of each side of the cubes
 *
 * @author David Lipke
 * @version 1.0
 * 
 *******************************************************************************/

#include <glm/glm.hpp>

/****************
 * Enumerations *
 ****************/
enum dir_cube_directions_t { dir_UP, 
							 dir_NORTH, 
							 dir_EAST, 
							 dir_SOUTH, 
							 dir_WEST, 
							 dir_DOWN };
enum state_t { FAIL,
			   PASS};

/****************
 * Size Related *
 ****************/
const static int scal_WINDOW_WIDTH = 800;
const static int scal_WINDOW_HEIGHT = 600;
const static int scal_CUBE_HEIGHT = 1;



/**********
 * COLORS *
 **********/
const static glm::vec3 colr_RED(1.0, 0.0, 0.0);
const static glm::vec3 colr_BLUE(0.0, 0.0, 1.0);
const static glm::vec3 colr_GREEN(0.0, 1.0, 0.0);
const static glm::vec3 colr_PURPLE(1.0, 0.0, 1.0);
const static glm::vec3 colr_YELLOW(1.0, 1.0, 0.0);
const static glm::vec3 colr_BROWN(0.7, 0.5, 0.1);
const static glm::vec3 colr_WHITE(1.0, 1.0, 1.0);
const static glm::vec3 colr_BLACK(0.0, 0.0, 0.0);

#endif
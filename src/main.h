#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <cuda_runtime.h>
#include <cuda_gl_interop.h>
#include <fstream>
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include "glslUtility.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>

#include "sceneStructs.h"
#include "image.h"
#include "pathtrace.h"
#include "utilities.h"
#include "scene.h"
#include "denoise.h"

using namespace std;

//-------------------------------
//----------PATH TRACER----------
//-------------------------------

extern Scene* scene;
extern int iteration;
extern int frame;

extern int width;
extern int height;

extern bool ui_run;
extern bool ui_reset_denoiser;
extern float ui_variance;
extern int ui_atrous_nlevel;
extern bool ui_accumulate;
extern int ui_history_level;
extern bool ui_automate_camera;
extern bool ui_step;
extern int ui_step_target;
extern float ui_color_alpha;
extern float ui_moment_alpha;

void runCuda();
void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
void mousePositionCallback(GLFWwindow* window, double xpos, double ypos);
void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);

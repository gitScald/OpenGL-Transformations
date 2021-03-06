#ifndef CONSTANTS_H
#define CONSTANTS_H

// GLEW
#include <gl/glew.h>

// GLM
#include <glm/glm.hpp>

// C++ standard library headers
#include <string>

// window creation constants
const GLuint GL_VERSION_MAJOR{ 3 };
const GLuint GL_VERSION_MINOR{ 3 };
const GLuint SCREEN_WIDTH{ 800 };
const GLuint SCREEN_HEIGHT{ 800 };
const GLfloat SCREEN_ASPECT_RATIO{ static_cast<GLfloat>(SCREEN_WIDTH) / SCREEN_HEIGHT };
const std::string WINDOW_TITLE{ "COMP 371 Assignment 2" };

// general constants
const glm::vec3 AXIS_X{ glm::vec3(1.0f, 0.0f, 0.0f) };
const glm::vec3 AXIS_Y{ glm::vec3(0.0f, 1.0f, 0.0f) };
const glm::vec3 AXIS_Z{ glm::vec3(0.0f, 0.0f, 1.0f) };
const glm::vec3 POSITION_ORIGIN{ glm::vec3(0.0f, 0.0f, 0.0f) };
const GLfloat POSITION_MAX{ 50.0f };
const GLfloat POSITION_MIN{ -50.0f };
const GLuint GRID_SIZE{ static_cast<GLuint>(POSITION_MAX - POSITION_MIN) };
const GLuint TROOP_COUNT{ 40 };

// camera initialization constants
const glm::vec3 CAMERA_POSITION{ glm::vec3(0.0f, 15.0f, 0.0f) };
const glm::vec3 CAMERA_FRONT{ -AXIS_Z };
const glm::vec3 CAMERA_UP_CAMERA{ -AXIS_Z };
const glm::vec3 CAMERA_UP_WORLD{ AXIS_Y };
const GLfloat CAMERA_YAW{ -180.0f };
const GLfloat CAMERA_PITCH{ -89.0f };
const GLfloat CAMERA_PITCH_MAX{ 89.0f };
const GLfloat CAMERA_SPEED{ 2.5f };
const GLfloat CAMERA_SENSITIVITY{ 0.1f };
const GLfloat CAMERA_PLANE_NEAR{ 0.1f };
const GLfloat CAMERA_PLANE_FAR{ 1000.0f };
const GLfloat CAMERA_FOV_MIN{ 1.0f };
const GLfloat CAMERA_FOV_MAX{ 89.0f };

// data files
const std::string DATA_ANIMATION_MODEL_RUN;
const std::string DATA_INDICES_GROUND;
const std::string DATA_VERTICES_AXES;
const std::string DATA_VERTICES_CUBE;
const std::string DATA_VERTICES_GRID;
const std::string DATA_VERTICES_GROUND;
const std::string DATA_VERTICES_MODEL;

// shader attribute constants
const std::string ATTRIBUTE_POSITION{ "i_position" };
const std::string ATTRIBUTE_NORMAL{ "i_normal" };
const std::string ATTRIBUTE_TEXTURE{ "i_texture" };
const std::string ATTRIBUTE_OFFSET{ "i_offset" };

// shader uniforms: general
const std::string UNIFORM_COLOR{ "u_color" };
const std::string UNIFORM_MATRIX_MODEL{ "u_modelMat" };
const std::string UNIFORM_MATRIX_VIEW{ "u_viewMat" };
const std::string UNIFORM_MATRIX_PROJECTION{ "u_projectionMat" };

// shader uniforms: material properties
const std::string UNIFORM_MATERIAL_DIFFUSE{ "u_material.diffuse" };
const std::string UNIFORM_MATERIAL_SPECULAR{ "u_material.specular" };
const std::string UNIFORM_MATERIAL_SHININESS{ "u_material.shininess" };

// shader uniforms: light and light-related properties
const std::string UNIFORM_CAMERA_POSITION{ "u_cameraPosition" };
const std::string UNIFORM_LIGHT_COLOR{ "u_light.color" };
const std::string UNIFORM_LIGHT_AMBIENT{ "u_light.ambient" };
const std::string UNIFORM_LIGHT_DIFFUSE{ "u_light.diffuse" };
const std::string UNIFORM_LIGHT_SPECULAR{ "u_light.specular" };
const std::string UNIFORM_LIGHT_POSITION{ "u_light.position" };
const std::string UNIFORM_LIGHT_KC{ "u_light.kc" };
const std::string UNIFORM_LIGHT_KL{ "u_light.kl" };
const std::string UNIFORM_LIGHT_KQ{ "u_light.kq" };
const std::string UNIFORM_LIGHT_PLANES{ "u_light.planeNearFar" };
const std::string UNIFORM_RIM_LIGHT_COLOR{ "u_rim.color" };
const std::string UNIFORM_RIM_LIGHT_MAX{ "u_rim.max" };
const std::string UNIFORM_RIM_LIGHT_MIN{ "u_rim.min" };

// shader uniforms: shadows
const std::string UNIFORM_SHADOWS_ENABLED{ "u_shadowsEnabled" };
const std::string UNIFORM_SHADOW_BIAS_MIN{ "u_biasMin" };
const std::string UNIFORM_SHADOW_BIAS_MAX{ "u_biasMax" };
const std::string UNIFORM_SHADOW_DEPTH_TEXTURE{ "u_depthTexture" };
const std::string UNIFORM_SHADOW_TRANSFORMS{ "u_shadowTransforms" };
const std::string UNIFORM_SHADOW_GRID_SAMPLES{ "u_gridSamples" };
const std::string UNIFORM_SHADOW_GRID_OFFSET{ "u_gridOffset" };
const std::string UNIFORM_SHADOW_GRID_FACTOR{ "u_gridFactor" };

// shader uniforms: textures
const std::string UNIFORM_TEXTURES_ENABLED{ "u_texturesEnabled" };
const std::string UNIFORM_SKYBOX_TEXTURE{ "u_skybox" };

// shadow uniforms: fog
const std::string UNIFORM_FOG_COLOR{ "u_fog.color" };
const std::string UNIFORM_FOG_DENSITY{ "u_fog.density" };
const std::string UNIFORM_FOG_ENABLED{ "u_fogEnabled" };

// shadow uniforms: grass
const std::string UNIFORM_WIND_TIME{ "u_time" };
const std::string UNIFORM_WIND_DIRECTION{ "u_windDirection" };
const std::string UNIFORM_WIND_STRENGTH{ "u_windStrength" };

// shadow uniforms: particles
const std::string UNIFORM_CAMERA_RIGHT{ "u_cameraRight" };
const std::string UNIFORM_CAMERA_UP{ "u_cameraUp" };

// shader file paths
const std::string PATH_VERTEX_RAIN{ "shaders/rain/vertex.shdr" };
const std::string PATH_FRAGMENT_RAIN{ "shaders/rain/fragment.shdr" };
const std::string PATH_VERTEX_ENTITY{ "shaders/entity/vertex.shdr" };
const std::string PATH_FRAGMENT_ENTITY{ "shaders/entity/fragment.shdr" };
const std::string PATH_VERTEX_FRAME{ "shaders/frame/vertex.shdr" };
const std::string PATH_FRAGMENT_FRAME{ "shaders/frame/fragment.shdr" };
const std::string PATH_VERTEX_GRASS{ "shaders/grass/vertex.shdr" };
const std::string PATH_FRAGMENT_GRASS{ "shaders/grass/fragment.shdr" };
const std::string PATH_VERTEX_SHADOW{ "shaders/shadow/vertex.shdr" };
const std::string PATH_GEOMETRY_SHADOW{ "shaders/shadow/geometry.shdr" };
const std::string PATH_FRAGMENT_SHADOW{ "shaders/shadow/fragment.shdr" };
const std::string PATH_VERTEX_SHADOW_QUAD{ "shaders/shadow/quad/vertex.shdr" };
const std::string PATH_FRAGMENT_SHADOW_QUAD{ "shaders/shadow/quad/fragment.shdr" };
const std::string PATH_VERTEX_SKYBOX{ "shaders/skybox/vertex.shdr" };
const std::string PATH_FRAGMENT_SKYBOX{ "shaders/skybox/fragment.shdr" };

// texture file paths
const std::string PATH_TEXTURE_BLADE{ "textures/grass/_blade.png" };
const std::string PATH_TEXTURE_GRASS_0{ "textures/grass/grass.png" };
const std::string PATH_TEXTURE_GRASS_1{ "textures/grass/_grass.png" };
//const std::string PATH_TEXTURE_GROUND{ "textures/ground/grass.png" };
const std::string PATH_TEXTURE_GROUND{ "textures/skybox/negy.jpg" };
const std::string PATH_TEXTURE_HORSE{ "textures/horse/zebra.jpg" };
const std::string PATH_TEXTURE_RAIN{ "textures/rain/raindrop.png" };
const std::string PATH_TEXTURE_SKYBOX[] = {
    "textures/skybox/posx.jpg",
    "textures/skybox/negx.jpg",
    "textures/skybox/posy.jpg",
    "textures/skybox/negy.jpg",
    "textures/skybox/posz.jpg",
    "textures/skybox/negz.jpg"
};

// material-related constants
const GLfloat MATERIAL_SHININESS_GRASS{ 8.0f };
const GLfloat MATERIAL_SHININESS_GROUND{ 0.0f };
const GLfloat MATERIAL_SHININESS_HORSE{ 8.0f };

// rendering constants
const GLfloat RENDERING_LINE_WIDTH{ 2.0f };
const GLfloat RENDERING_POINT_SIZE{ 3.0f };

// model transformations
const GLint TRANSFORMATION_RANDOM_DISPLACEMENT{ static_cast<GLint>((POSITION_MAX - POSITION_MIN + 1) + POSITION_MIN) };
const GLfloat TRANSFORMATION_INCREMENT_ROTATION{ 5.0f };
const GLfloat TRANSFORMATION_INCREMENT_SCALING{ 0.1f };
const GLfloat TRANSFORMATION_INCREMENT_TRANSLATION{ 1.0f };
const GLfloat TRANSFORMATION_SCALE_MAX{ 35.0f };
const GLfloat TRANSFORMATION_SCALE_MIN{ 0.1f };

// model scales
const glm::vec3 MODEL_SCALE_HEAD{ glm::vec3(0.28f, 0.10f, 0.22f) };
const glm::vec3 MODEL_SCALE_LEG_LOWER{ glm::vec3(0.05f, 0.17f, 0.05f) };
const glm::vec3 MODEL_SCALE_LEG_UPPER{ glm::vec3(0.04f, 0.15f, 0.04f) };
const glm::vec3 MODEL_SCALE_NECK{ glm::vec3(0.28f, 0.14f, 0.15f) };
const glm::vec3 MODEL_SCALE_TORSO{ glm::vec3(0.60f, 0.22f, 0.20f) };

// model parts relative positions
const glm::vec3 MODEL_POSITION_RELATIVE_HEAD{ glm::vec3(0.14f, -0.08f, 0.0f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_LOWER_FR{ glm::vec3(0.00f, -0.16f, 0.00f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_LOWER_FL{ glm::vec3(0.00f, -0.16f, 0.00f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_LOWER_BR{ glm::vec3(0.00f, -0.16f, 0.00f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_LOWER_BL{ glm::vec3(0.00f, -0.16f, 0.00f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_UPPER_FR{ glm::vec3(0.24f, -0.16f, 0.06f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_UPPER_FL{ glm::vec3(0.24f, -0.16f, -0.06f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_UPPER_BR{ glm::vec3(-0.24f, -0.16f, 0.06f) };
const glm::vec3 MODEL_POSITION_RELATIVE_LEG_UPPER_BL{ glm::vec3(-0.24f, -0.16f, -0.06f) };
const glm::vec3 MODEL_POSITION_RELATIVE_NECK{ glm::vec3(0.33f, 0.12f, 0.00f) };
const glm::vec3 MODEL_POSITION_RELATIVE_TORSO{ glm::vec3(0.00f, 0.40f, 0.00f) };

// model parts relative orientations
const std::pair<GLfloat, glm::vec3> MODEL_ORIENTATION_RELATIVE_HEAD{
    std::make_pair(-80.0f, AXIS_Z) };
const std::pair<GLfloat, glm::vec3> MODEL_ORIENTATION_RELATIVE_NECK{
    std::make_pair(40.0f, AXIS_Z) };

// model parts colors
const glm::vec4 MODEL_COLOR_HEAD{ glm::vec4(0.4f, 0.4f, 0.4f, 1.0f) };
const glm::vec4 MODEL_COLOR_LEG_LOWER{ glm::vec4(0.2f, 0.2f, 0.2f, 1.0f) };
const glm::vec4 MODEL_COLOR_LEG_UPPER{ glm::vec4(0.3f, 0.3f, 0.3f, 1.0f) };
const glm::vec4 MODEL_COLOR_NECK{ glm::vec4(0.6f, 0.6f, 0.6f, 1.0f) };
const glm::vec4 MODEL_COLOR_TORSO{ glm::vec4(0.8f, 0.8f, 0.8f, 1.0f) };

// model maximum joint rotations
const GLfloat MODEL_ROTATION_HEAD_MAX{ 90.0f };
const GLfloat MODEL_ROTATION_HEAD_MIN{ -90.0f };
const GLfloat MODEL_ROTATION_NECK_MAX{ 90.0f };
const GLfloat MODEL_ROTATION_NECK_MIN{ -90.0f };
const GLfloat MODEL_ROTATION_LEG_LOWER_MAX{ 90.0f };
const GLfloat MODEL_ROTATION_LEG_LOWER_MIN{ -90.0f };
const GLfloat MODEL_ROTATION_LEG_UPPER_MAX{ 90.0f };
const GLfloat MODEL_ROTATION_LEG_UPPER_MIN{ -90.0f };
const GLfloat MODEL_ROTATION_TORSO_MAX{ 90.0f };
const GLfloat MODEL_ROTATION_TORSO_MIN{ -90.0f };

// axis and grid constants
const glm::vec4 COLOR_AXES[]{
    glm::vec4(0.0f, 0.0f, 1.0f, 1.0f),
    glm::vec4(1.0f, 0.0f, 0.0f, 1.0f),
    glm::vec4(0.0f, 1.0f, 0.0f, 1.0f) };
const glm::vec4 COLOR_GRASS{ glm::vec4(0.5f, 0.7f, 0.1f, 1.0f) };
const glm::vec4 COLOR_GRID{ glm::vec4(0.7f, 0.7f, 0.7f, 1.0f) };
const glm::vec4 COLOR_GROUND{ glm::vec4(0.9f, 0.9f, 0.9f, 1.0f) };
const std::pair<GLfloat, glm::vec3> ROTATION_AXES[]{
    std::make_pair(360.0f, AXIS_X),
    std::make_pair(90.0f, AXIS_Z),
    std::make_pair(-90.0f, AXIS_Y) };

// light-related constants
const glm::vec3 LIGHT_POSITION_NOON{ glm::vec3(0.0f, 65.0f, 0.0f) };
const glm::vec3 LIGHT_POSITION_MIDNIGHT{ glm::vec3(0.0f, 0.0f, -LIGHT_POSITION_NOON.y) };
const glm::vec3 LIGHT_SCALE{ glm::vec3(3.0f, 3.0f, 3.0f) };
const glm::vec3 LIGHT_AMBIENT{ glm::vec3(0.2f, 0.2f, 0.2f) };
const glm::vec3 LIGHT_DIFFUSE{ glm::vec3(0.7f, 0.7f, 0.7f) };
const glm::vec3 LIGHT_SPECULAR{ glm::vec3(1.0f, 1.0f, 1.0f) };
const glm::vec4 COLOR_LIGHT_DAY{ glm::vec4(1.0f, 1.0f, 1.0f, 1.0f) };
const glm::vec4 COLOR_LIGHT_NIGHT{ glm::vec4(0.1f, 0.2f, 0.6f, 1.0f) };
const glm::vec4 COLOR_LIGHT_TRANSITION{ glm::vec4(0.96f, 0.65f, 0.32f, 1.0f) };
const glm::vec4 COLOR_LIGHT_MOON_ON{ glm::vec4(0.8f, 0.8f, 0.8f, 1.0f) };
const glm::vec4 COLOR_LIGHT_MOON_OFF{ glm::vec4{ 0.2f, 0.2f, 0.2f, 1.0f } };
const glm::vec4 COLOR_LIGHT_SUN_ON{ glm::vec4(1.0f, 1.0f, 0.0f, 1.0f) };
const glm::vec4 COLOR_LIGHT_SUN_OFF{ glm::vec4{0.3f, 0.3f, 0.0f, 1.0f} };
const GLfloat LIGHT_PLANE_NEAR{ 1.0f };
const GLfloat LIGHT_PLANE_FAR{ 100.0f };
const GLfloat LIGHT_KC{ 1.000000f };
const GLfloat LIGHT_KL{ 0.001400f };
const GLfloat LIGHT_KQ{ 0.000007f };
const GLfloat LIGHT_SPEED{ 0.5f };
const GLfloat LIGHT_RIM_MAX{ 1.0f };
const GLfloat LIGHT_RIM_MIN{ 0.6f };

// texture-related constants
const GLuint TEXTURE_INDEX_DIFFUSE{ 0 };
const GLuint TEXTURE_INDEX_SPECULAR{ 1 };
const GLuint TEXTURE_INDEX_DEPTH_MAP{ 2 };
const GLuint TEXTURE_INDEX_SKYBOX{ 0 };
const GLenum TEXTURE_UNIT_DIFFUSE{ GL_TEXTURE0 };
const GLenum TEXTURE_UNIT_SPECULAR{ GL_TEXTURE1 };
const GLenum TEXTURE_UNIT_DEPTH_MAP{ GL_TEXTURE2 };
const GLenum TEXTURE_UNIT_SKYBOX{ GL_TEXTURE0 };

// shadow-related constants
const GLuint SHADOW_GRID_SAMPLES{ 32 };
const GLuint SHADOW_DEPTH_TEXTURE_WIDTH{ 1024 };
const GLuint SHADOW_DEPTH_TEXTURE_HEIGHT{ 1024 };
const GLfloat SHADOW_ASPECT_RATIO{
    static_cast<GLfloat>(SHADOW_DEPTH_TEXTURE_WIDTH)
    / SHADOW_DEPTH_TEXTURE_HEIGHT };
const GLfloat SHADOW_PROJECTION_FOV{ 90.0f };
const GLfloat SHADOW_BIAS_MAX{ 0.090f };
const GLfloat SHADOW_BIAS_MIN{ 0.050f };
const GLfloat SHADOW_GRID_FACTOR{ 80.0f };
const GLfloat SHADOW_GRID_OFFSET{ 1.0f };
const GLfloat SHADOW_INCREMENT_BIAS{ 0.005f };
const GLfloat SHADOW_INCREMENT_GRID_FACTOR{ 5.0f };
const GLfloat SHADOW_INCREMENT_GRID_OFFSET{ 0.1f };
const GLuint SHADOW_INCREMENT_GRID_SAMPLES{ 2 };
const GLfloat SHADOW_BORDER_COLOR[]{ 1.0f, 1.0f, 1.0f, 1.0f };

// animation-related constants
const GLfloat ANIMATION_SPEED{ 4.0f };
const GLuint JOINT_HEAD{ 0 };
const GLuint JOINT_LEG_LOWER_BACK_LEFT{ 9 };
const GLuint JOINT_LEG_LOWER_BACK_RIGHT{ 5 };
const GLuint JOINT_LEG_LOWER_FRONT_LEFT{ 7 };
const GLuint JOINT_LEG_LOWER_FRONT_RIGHT{ 3 };
const GLuint JOINT_LEG_UPPER_BACK_LEFT{ 8 };
const GLuint JOINT_LEG_UPPER_BACK_RIGHT{ 4 };
const GLuint JOINT_LEG_UPPER_FRONT_LEFT{ 6 };
const GLuint JOINT_LEG_UPPER_FRONT_RIGHT{ 2 };
const GLuint JOINT_NECK{ 1 };
const GLuint JOINT_TORSO{ 10 };

// pathing-related constants
const GLfloat MODEL_SPEED{ 0.5f };
const GLfloat PATHING_DIRECTION_MIN{ 20.0f };
const GLfloat PATHING_DIRECTION_MAX{ 45.0f };
const GLfloat PATHING_DISTANCE_MIN{ 1.0f };
const GLfloat PATHING_DISTANCE_MAX{ 4.0f };
const GLfloat PATHING_SPEED{ 2.0f };
const GLuint PATH_COUNT{ 15 };

// fog-related constants
const glm::vec4 COLOR_CLEAR{ glm::vec4(0.90f, 0.94f, 0.98f, 1.0f) };
const glm::vec4 COLOR_FOG{ COLOR_CLEAR };
const GLfloat FOG_DENSITY{ 0.025f };

// grass-related constants
const GLuint GRASS_COUNT{ 512 };
const glm::vec3 GRASS_SCALE_MAX{ glm::vec3(1.0f, 1.0f, 1.0f) };
const glm::vec3 GRASS_SCALE_MIN{ glm::vec3(0.7f, 0.7f, 0.7f) };
const GLfloat WIND_STRENGTH{ 0.75f };

// particle-related constants
const GLuint PARTICLE_COUNT{ TROOP_COUNT * 8 };

#endif // !CONSTANTS_H
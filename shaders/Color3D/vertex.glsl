#version 330 core

in vec4 in_Position;
in vec4 in_Color;

uniform mat4 ModelMatrix;

uniform SharedMatrices {
    mat4 ViewMatrix;
    mat4 ProjectionMatrix;
};

void main(void)
{
    gl_Position = ProjectionMatrix * ViewMatrix * ModelMatrix * in_Position;
}
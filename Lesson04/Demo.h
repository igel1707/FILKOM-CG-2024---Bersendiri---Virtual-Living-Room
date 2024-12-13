#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, 
		VBO, VAO, EBO, texture, 
		VBO2, VAO2, EBO2, texture2, 
		VBO3, VAO3, EBO3, texture3, 
		VBO4, VAO4, EBO4, texture4, 
		VBO5, VAO5, EBO5, texture5, 
		VBO6, VAO6, EBO6, texture6, 
		VBO7, VAO7, EBO7, texture7, 
		VBO8, VAO8, EBO8, texture8, 
		VBO9, VAO9, EBO9, texture9, 
		VBO10, VAO10, EBO10, texture10, 
		VBO11, VAO11, EBO11, texture11, 
		VBO12, VAO12, EBO12, texture12, 
		VBO13, VAO13, EBO13, texture13, 
		VBO14, VAO14, EBO14, texture14,
		VBO15, VAO15, EBO15, texture15,
		VBO16, VAO16, EBO16, texture16, //clock
		VBO17, VAO17, EBO17, texture17,
		VBO18, VAO18, EBO18, texture18,
		VBO19, VAO19, EBO19, texture19,
		VBO20, VAO20, EBO20, texture20,
		VBO21, VAO21, EBO21, texture21;//lamp


	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildTexturedCube();
	void BuildTexturedPlane();
	void BuildWall();
	void BuildRWall();
	void BuildLWall();
	void BuildTV();
	void BuildKabinet();
	void BuildMeja();
	void BuildMejaBawah();
	void BuildCarpet();
	void BuildSofaKayu();
	void BuildSofaKayu2();
	void BuildSofa();
	void BuildPigura();
	void BuildBingkai();
	void BuildClock();
	void BuildCube2();
	void BuildBigCabinet();
	void BuildLamp();
	void BuildLamp2();
	void BuildLamp3();

	void DrawTexturedCube();
	void DrawColoredPlane();
	void DrawWall();
	void DrawRWall();
	void DrawLWall();
	void DrawKabinet();
	void DrawTV();
	void DrawMeja();
	void DrawMejaBawah();
	void DrawCarpet();
	void DrawSofaKayu();
	void DrawSofaKayu2();
	void DrawSofa();
	void DrawPigura();
	void DrawBingkai();
	void DrawClock();
	void DrawCube2();
	void DrawBigCabinet();
	void DrawLamp();
	void DrawLamp2();
	void DrawLamp3();

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};


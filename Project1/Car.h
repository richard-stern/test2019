/*----------------------------------------
File Name: Car.h
Purpose: Draws a circle to the screen.
Author: John Smith
Modified: 27 January 2016
------------------------------------------
This is a class for a car
Used for all cars in the game
------------------------------------------
Copyright 2016 AIE.
------------------------------------------*/

#ifndef _CAR_H
#define _CAR_H

#include "Vector2.h"

class Car
{
public:
	void Initialise();
	void Print();

	//--------------------------------------------
	// Sets the car's health to newHealth
	// Params:
	//			newHealth - The new health to store
	//--------------------------------------------
	void SetHealth(int health);

	//--------------------------------------------
	// Gets the car's current health
	// Returns: The current health
	//--------------------------------------------
	int GetHealth();

private:
	Vector2 m_v2Position;
	float m_fMaxSpeed;
	int m_nWheelCount;
	int m_nDoorCount;
	bool m_bHasCrashed;
	int m_nHealth;

	bool m_bIsAlive;
};

#endif //_CAR_H
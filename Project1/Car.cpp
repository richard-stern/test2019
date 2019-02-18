#include "Car.h"
#include <iostream>
using namespace std;

void Car::Initialise()
{
	
}

void Car::Print()
{
	
}

//--------------------------------------------
// Stores health but stops it going over 100
// if health is less than zero then the car is dead
//--------------------------------------------
void Car::SetHealth(int nHealth)
{
	m_nHealth = nHealth;
}

int Car::GetHealth()
{
	return m_nHealth;
}
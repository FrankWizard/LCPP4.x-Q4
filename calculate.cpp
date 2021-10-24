#include <iostream>

void calcAndPrint(double tHeight, int tFallen)
{
	float gravity = 9.8;
	double dFallen = gravity * tFallen * tFallen / 2;
	double bHeight = tHeight - dFallen;

	if (bHeight < 0)
	{
		std::cout << "At " << tFallen << " seconds, the ball is on the ground.\n";

	}
	else
	{
		std::cout << "At " << tFallen << " seconds the ball is at height: " << bHeight << std::endl;
	}
}

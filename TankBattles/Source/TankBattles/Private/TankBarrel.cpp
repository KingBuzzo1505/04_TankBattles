// Daniel Riley 2017


#include "TankBarrel.h"
#include "TankBattles.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move the barrel the right amount this frame
	// Given the max elevation speed and the frame time
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed %f"), DegreesPerSecond);
}



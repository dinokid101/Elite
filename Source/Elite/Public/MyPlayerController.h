// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "FPSCharacter.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"
/**
 * 
 */
UCLASS()
class ELITE_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	void BeginPlay();

	void Tick(float DeltaTime);

	//AFPSCharacter* GetControlledPlayer() const;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool GetSightRayHitLocation(FVector& HitLocation) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

	bool ChangeTeam(bool FromAttacker);
	
};

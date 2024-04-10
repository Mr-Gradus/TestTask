// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GardenOfDreamsHUD.generated.h"

UCLASS()
class AGardenOfDreamsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGardenOfDreamsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


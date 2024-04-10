// Copyright Epic Games, Inc. All Rights Reserved.

#include "GardenOfDreamsGameMode.h"
#include "GardenOfDreamsHUD.h"
#include "GardenOfDreamsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGardenOfDreamsGameMode::AGardenOfDreamsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGardenOfDreamsHUD::StaticClass();
}

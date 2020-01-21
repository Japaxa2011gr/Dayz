// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "DayzGameMode.h"
#include "DayzHUD.h"
#include "DayzCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADayzGameMode::ADayzGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADayzHUD::StaticClass();
}

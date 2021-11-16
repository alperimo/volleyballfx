// Copyright Epic Games, Inc. All Rights Reserved.

#include "vfxcppGameMode.h"
#include "vfxcppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AvfxcppGameMode::AvfxcppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

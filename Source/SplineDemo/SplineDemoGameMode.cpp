// Copyright Epic Games, Inc. All Rights Reserved.

#include "SplineDemoGameMode.h"
#include "SplineDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASplineDemoGameMode::ASplineDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

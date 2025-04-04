// Copyright Epic Games, Inc. All Rights Reserved.

#include "LickedDreamGameMode.h"
#include "LickedDreamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALickedDreamGameMode::ALickedDreamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "CrescentRemnantsGameMode.h"
#include "CrescentRemnantsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrescentRemnantsGameMode::ACrescentRemnantsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_Protagonist"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

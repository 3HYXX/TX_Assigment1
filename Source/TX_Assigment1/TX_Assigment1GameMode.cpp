// Copyright Epic Games, Inc. All Rights Reserved.

#include "TX_Assigment1GameMode.h"
#include "TX_Assigment1Character.h"
#include "UObject/ConstructorHelpers.h"

ATX_Assigment1GameMode::ATX_Assigment1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

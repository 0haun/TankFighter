// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TankFighterGameMode.h"
#include "TankFighterPawn.h"

ATankFighterGameMode::ATankFighterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATankFighterPawn::StaticClass();
}


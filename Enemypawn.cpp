// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemypawn.h"

// Sets default values


void AEnemypawn::Hunt()
{
	State = EEnemyState::Default;

	StateChangedEvent.Broadcast(State);

}

void AEnemypawn::Idle()
{
	State = EEnemyState::Idle;

	StateChangedEvent.Broadcast(State);
}

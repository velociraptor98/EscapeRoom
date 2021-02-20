// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPositionN.h"

// Sets default values for this component's properties
UWorldPositionN::UWorldPositionN()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPositionN::BeginPlay()
{
	Super::BeginPlay();
    // Get parent Actor name
    FString parentActorName = GetOwner()->GetName();
    // Get parent Actors transform
    FVector actorTransform = GetOwner()->GetActorLocation();
    FString parentActorLocation = actorTransform.ToString();
    UE_LOG(LogTemp,Warning,TEXT("%s"),*parentActorLocation);
	// ...
	
}


// Called every frame
void UWorldPositionN::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


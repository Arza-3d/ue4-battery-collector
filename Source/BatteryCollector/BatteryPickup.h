// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// set default value
	ABatteryPickup();
	
	// battery classes override  WasCollected function use implementation because it's a Blueprint Native Event
	void WasCollected_Implementation() override;

	// Public way to access the battery power level
	float GetPower();

protected:
	// set the amount of battery power
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BatteryPower;
	
};

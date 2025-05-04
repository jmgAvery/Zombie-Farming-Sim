// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tools.h"
#include "WateringCan.generated.h"

/**
 * 
 */
UCLASS()
class ZOMBIEFARMINGSIM_API AWateringCan : public ATools
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category="Strength")
	float MaxStorage = 0;

	UPROPERTY(EditAnywhere, Category="Strength")
	float AmountPoured = 0;

	UPROPERTY(EditAnywhere, Category="Strength")
	FString Shape = "single";
	
};

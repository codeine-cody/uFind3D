// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>
#include <stdlib.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "uFindObj.generated.h"



UCLASS()
class UFIND3D_API AuFindObj : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AuFindObj();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString clue;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

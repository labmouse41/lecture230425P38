// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rocket.generated.h"

UCLASS()
class LECTURE230425P38_API ARocket : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARocket();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintreadOnly, Category="Components")
	class UBoxComponent* Box;

	UPROPERTY(VisibleAnywhere, BlueprintreadOnly, Category = "Components")
	class UStaticMeshComponent* Body;
	
	UPROPERTY(VisibleAnywhere, BlueprintreadOnly, Category = "Components")
	class UProjectileMovementComponent* Movement;
};

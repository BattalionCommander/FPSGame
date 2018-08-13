// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

//向前声明，声明时编辑器只需要知道这是一个类，不需要知道他有什么成分，定义时加载就可以
class USphereComponent;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:

	UPROPERTY(VisibleAnywhere, Category = "MeshComp")
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "SphereComp")
		USphereComponent* SphereComp;

	UPROPERTY(EditDefaultsOnly, Category = "PickupFX")
	UParticleSystem* PickupFX;

	void PlayEffects();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//绑定碰撞的一种方法
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};

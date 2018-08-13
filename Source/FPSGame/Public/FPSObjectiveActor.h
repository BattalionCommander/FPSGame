// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

//��ǰ����������ʱ�༭��ֻ��Ҫ֪������һ���࣬����Ҫ֪������ʲô�ɷ֣�����ʱ���ؾͿ���
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

	//����ײ��һ�ַ���
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};

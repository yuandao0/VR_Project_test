// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"



UCLASS()
class VR_PROJECT_TEST_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Components and Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD", meta = (DisplayName = "High LOD Mesh"))
	UStaticMesh* HighLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD", meta = (DisplayName = "Medium LOD Mesh"))
	UStaticMesh* MediumLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD", meta = (DisplayName = "Low LOD Mesh"))
	UStaticMesh* LowLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD", meta = (DisplayName = "High LOD Threshold"))
	float HighLODThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD", meta = (DisplayName = "Medium LOD Threshold"))
	float MediumLODThreshold;


};

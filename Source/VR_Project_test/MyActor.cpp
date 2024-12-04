// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the Static Mesh Component and set it as the root
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	//Find and assign the static mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> box_mesh(TEXT("StaticMesh'/Game/Box.Box'"));
	if(box_mesh.Succeeded())
	{
		MeshComponent -> SetStaticMesh(box_mesh.Object);
	}

	//Initialize thresholds
	HighLODThreshold = 10000.0f;
	MediumLODThreshold = 5000.0f;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


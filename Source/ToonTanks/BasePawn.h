// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	UPROPERTY(Category = "Tutorial Variables", VisibleAnywhere, BlueprintReadWrite)
		int32 VisibleAnywhereInt = 12;
	UPROPERTY(Category = "Tutorial Variables", EditAnywhere, BlueprintReadOnly)
		int32 EditAnywhereInt = 22;
	UPROPERTY(Category = "Tutorial Variables", VisibleInstanceOnly)
		int32 VisibleInstanceOnlyInt = 11;
	UPROPERTY(Category = "Tutorial Variables", VisibleDefaultsOnly)
		int32 VisibleDefaultOnlyInt = 5;
	UPROPERTY(Category = "Tutorial Variables", EditDefaultsOnly)
		int32 EditDefaultsOnlyInt = 9;
	UPROPERTY(Category = "Tutorial Variables", EditInstanceOnly)
		int32 EditInstanceOnlyInt = 14;

	//UPROPERTY(Category = "Tutorial Variables", EditAnywhere, BlueprintReadWrite)
	//	float Speed = 400.f;

	void HandleDestruction();

protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;

	void RotateTurret(FVector LookAtTarget);
	void Fire();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(Category = "Tutorial Variables", VisibleAnywhere, BlueprintReadWRite, meta = (AllowPrivateAccess = "true"))
		int32 PrivateVisibleAnywhereInt = 12;
	UPROPERTY(Category = "Tutorial Variables", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		int32 PrivateEditAnywhereInt = 22;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSubclassOf<class AProjectile> ProjectileClass;

//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;

};

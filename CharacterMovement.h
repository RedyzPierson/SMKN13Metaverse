#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "CharacterMovement.generated.h"

UCLASS()
class SMKN13ARCHVIZ_API ACharacterMovement : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(visibleAnywhere, blueprintReadOnly, category = camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(visibleAnywhere, blueprintReadOnly, category = camera)
		UCameraComponent* FollowCamera;

	void MoveForward(float axis);
	void MoveRight(float axis);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

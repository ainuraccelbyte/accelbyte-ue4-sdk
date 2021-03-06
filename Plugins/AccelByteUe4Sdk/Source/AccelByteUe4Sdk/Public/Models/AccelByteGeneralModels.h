// Copyright (c) 2019 AccelByte Inc. All Rights Reserved.
// This is licensed software from AccelByte Inc, for limitations
// and restrictions contact your company contract manager.

#pragma once

#include "CoreMinimal.h"
#include "AccelByteGeneralModels.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaging
{
	GENERATED_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | General | Models | Paging")
        FString First;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | General | Models | Paging")
        FString Last;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | General | Models | Paging")
		FString Next;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AccelByte | General | Models | Paging")
		FString Previous;
};
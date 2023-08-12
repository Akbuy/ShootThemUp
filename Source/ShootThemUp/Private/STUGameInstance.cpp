// Shoot Them Up Game, All Rights Reserved.

#include "STUGameInstance.h"
#include "Sound/STUSoundFuncLib.h"
#include "Sound/SoundClass.h"

void USTUGameInstance::ToggleVolume()
{
    USTUSoundFuncLib::ToggleSoundClassVolume(MasterSoundClass);
}

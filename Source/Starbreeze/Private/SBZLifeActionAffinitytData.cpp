#include "SBZLifeActionAffinitytData.h"

USBZLifeActionAffinitytData::USBZLifeActionAffinitytData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZLifeActionAffinitytData::StaticClass();
}



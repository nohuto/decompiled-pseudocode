/*
 * XREFs of ZwEnumerateValueKey @ 0x14041B9C0
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x1406202D0 (DifZwEnumerateValueKeyWrapper.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumValue @ 0x1406CF2EC (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x140781F40 (RtlpQueryRegistryValues.c)
 *     ExpSetPendingUILanguage @ 0x1407F44F0 (ExpSetPendingUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x140826EF0 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x14082FDD8 (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x140859794 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14094D4C8 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1409653FC (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A360D8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A36378 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     HalpInitChipHacks @ 0x140AF6E6C (HalpInitChipHacks.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140B2AEDC (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B4FF80 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}

/*
 * XREFs of ZwEnumerateValueKey @ 0x1403FA600
 * Callers:
 *     RtlpQueryRegistryValues @ 0x140640A68 (RtlpQueryRegistryValues.c)
 *     _RegRtlEnumValue @ 0x1406B18A4 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x14078C070 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x1407941DC (RtlpPopulateLanguageConfigList.c)
 *     PiDcInitUpdateProperties @ 0x1407A3C28 (PiDcInitUpdateProperties.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C0F30 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x1407C9334 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7B44 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1408C140C (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14098209C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098233C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140A629BC (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6F008 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A73B20 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
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

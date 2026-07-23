/*
 * XREFs of ZwEnumerateValueKey @ 0x1403F9C80
 * Callers:
 *     _RegRtlEnumValue @ 0x140694A64 (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x1406B9848 (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x14076942C (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x14078BF70 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x14078FCBC (RtlpPopulateLanguageConfigList.c)
 *     PiDcInitUpdateProperties @ 0x1407A4058 (PiDcInitUpdateProperties.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C16F0 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x1407C9254 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E54 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7B94 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1408C145C (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1409820EC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098238C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140A629BC (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6F008 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A73B20 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A908F0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(KeyHandle);
}

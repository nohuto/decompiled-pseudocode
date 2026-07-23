/*
 * XREFs of ZwEnumerateValueKey @ 0x1403FA7E0
 * Callers:
 *     _RegRtlEnumValue @ 0x1406108EC (_RegRtlEnumValue.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x14078C230 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x14078FF7C (RtlpPopulateLanguageConfigList.c)
 *     PiDcInitUpdateProperties @ 0x1407A3E28 (PiDcInitUpdateProperties.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C1450 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x1407C9654 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7CA4 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1408C156C (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14098227C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098251C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140A639BC (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140A70008 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A74B20 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A918F0 (PiLastGoodRevertLastKnownDirectory.c)
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

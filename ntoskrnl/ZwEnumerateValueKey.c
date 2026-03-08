/*
 * XREFs of ZwEnumerateValueKey @ 0x140412570
 * Callers:
 *     DifZwEnumerateValueKeyWrapper @ 0x1405EDD90 (DifZwEnumerateValueKeyWrapper.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     ExpSetPendingUILanguage @ 0x140749238 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084413C (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x140847BFC (PipApplyFunctionToServiceInstances.c)
 *     PiDcInitUpdateProperties @ 0x14084CF78 (PiDcInitUpdateProperties.c)
 *     SepLoadNgenLocations @ 0x140852AC0 (SepLoadNgenLocations.c)
 *     _RegRtlEnumValue @ 0x14086C580 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095C778 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x140974A3C (KsepRegistryEnumValue.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8 (SdbpGetManifestedMergeStubAlloc.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A72A0C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A72CB8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     HalpInitChipHacks @ 0x140B35648 (HalpInitChipHacks.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6AE50 (PiLastGoodCopyKeyContents.c)
 *     PsInitializeBootCpuPartitions @ 0x140B6EAD4 (PsInitializeBootCpuPartitions.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B91710 (PiLastGoodRevertLastKnownDirectory.c)
 *     PopReadSimulateProcessorClass @ 0x140B934E4 (PopReadSimulateProcessorClass.c)
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

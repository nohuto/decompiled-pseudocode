/*
 * XREFs of ZwEnumerateKey @ 0x140412950
 * Callers:
 *     BiZwEnumerateKey @ 0x1403903B8 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14039C3E0 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14039C4A0 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140519160 (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x1405EDC30 (DifZwEnumerateKeyWrapper.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14077F000 (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x1407FD288 (EtwpEnumerateKeyProviders.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408122E8 (RtlpUpdateDynamicTimeZones.c)
 *     CmpGetAcpiProfileInformation @ 0x140813588 (CmpGetAcpiProfileInformation.c)
 *     CmpLoadLayerVersions @ 0x1408148C4 (CmpLoadLayerVersions.c)
 *     WdipSemLoadNextEndEvent @ 0x140832620 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140832924 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140832BA4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140832FB0 (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x140838E20 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C7E8 (EtwpEnumerateAutologgerPath.c)
 *     PiDcInitUpdateProperties @ 0x14084CF78 (PiDcInitUpdateProperties.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14085EB08 (EtwpLoadMicroarchitecturalPmcs.c)
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140876C88 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140876D34 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     SepReadAndInsertCaps @ 0x1409CEF1C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DB298 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E10E8 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1528 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E1C34 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140A0749C (ApiSetpLoadSchemaExtensions.c)
 *     CmDeleteKeyRecursive @ 0x140A0D158 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140A0E038 (CmpMoveBiosAliasTable.c)
 *     AslRegistryEnumKey @ 0x140A515C0 (AslRegistryEnumKey.c)
 *     VhdAutoAttachVirtualDisks @ 0x140B31A9C (VhdAutoAttachVirtualDisks.c)
 *     PipInitDeviceOverrideCache @ 0x140B5738C (PipInitDeviceOverrideCache.c)
 *     PopReadSimulateProcessorClasses @ 0x140B6D8DC (PopReadSimulateProcessorClasses.c)
 *     PsInitializeBootCpuPartitions @ 0x140B6EAD4 (PsInitializeBootCpuPartitions.c)
 *     RegistryOverwriteCentralProcessor @ 0x140B8DAC4 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index);
}

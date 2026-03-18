/*
 * XREFs of ZwEnumerateKey @ 0x14041BDA0
 * Callers:
 *     BiZwEnumerateKey @ 0x1403A77D4 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403C5F68 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403C6028 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051EAEC (HalpMcEnumerateAndSetPatchConfig.c)
 *     DifZwEnumerateKeyWrapper @ 0x140620160 (DifZwEnumerateKeyWrapper.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     VrpPostEnumerateKey @ 0x140691CD8 (VrpPostEnumerateKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140697B34 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140697BE0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406C2EE8 (RtlpProcessIFEOKeyFilter.c)
 *     _RegRtlEnumKey @ 0x1406CB3B4 (_RegRtlEnumKey.c)
 *     pIoQueryBusDescription @ 0x1406DE494 (pIoQueryBusDescription.c)
 *     NtLockProductActivationKeys @ 0x14080D370 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateKeyProviders @ 0x140818934 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x140826EF0 (PiDcInitUpdateProperties.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140836228 (RtlpUpdateDynamicTimeZones.c)
 *     CmpLoadLayerVersions @ 0x140836CC8 (CmpLoadLayerVersions.c)
 *     CmpGetAcpiProfileInformation @ 0x1408386A0 (CmpGetAcpiProfileInformation.c)
 *     WdipSemLoadNextEndEvent @ 0x14083F908 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14083FC00 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14083FE80 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14084028C (WdipSemLoadNextScenario.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14084A618 (PopDetectSimulatedHeteroProcessors.c)
 *     EtwpEnumerateAutologgerPath @ 0x1408515A8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862888 (EtwpLoadMicroarchitecturalPmcs.c)
 *     CmDeleteKeyRecursive @ 0x14091D7D0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14091E6AC (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x1409CF26C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DAD00 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E0DC0 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1200 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E190C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140A0A95C (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x140A14D98 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140B107D8 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140B4BB08 (RegistryOverwriteCentralProcessor.c)
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

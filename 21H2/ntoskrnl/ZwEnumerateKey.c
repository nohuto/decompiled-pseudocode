/*
 * XREFs of ZwEnumerateKey @ 0x1403FA9E0
 * Callers:
 *     BiZwEnumerateKey @ 0x14039B528 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403ACE1C (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403ACF3C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406A67B4 (RtlpProcessIFEOKeyFilter.c)
 *     _RegRtlEnumKey @ 0x140766B7C (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1407678F8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1407679A4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x14078B104 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x140794898 (EtwpEnumerateKeyProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x1407993F4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407996F8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140799978 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140799D84 (WdipSemLoadNextScenario.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B324 (EtwpEnumerateAutologgerPath.c)
 *     PiDcInitUpdateProperties @ 0x1407A3C28 (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x1407A601C (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA15C (RtlpUpdateDynamicTimeZones.c)
 *     NtLockProductActivationKeys @ 0x1407B40D0 (NtLockProductActivationKeys.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407BB808 (PopDetectSimulatedHeteroProcessors.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407D284C (EtwpLoadMicroarchitecturalPmcs.c)
 *     CmDeleteKeyRecursive @ 0x140876D90 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140877C18 (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x1409259CC (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409302B0 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A150 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A58C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABA8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095EC94 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x140967CAC (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A5CBAC (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A8C5C0 (RegistryOverwriteCentralProcessor.c)
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

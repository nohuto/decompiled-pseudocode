/*
 * XREFs of ZwEnumerateKey @ 0x1403FA060
 * Callers:
 *     BiZwEnumerateKey @ 0x14039AE28 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A7C40 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A7D60 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140689294 (RtlpProcessIFEOKeyFilter.c)
 *     _RegRtlEnumKey @ 0x14076619C (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140766F18 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140766FC4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x14076942C (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x14078B004 (pIoQueryBusDescription.c)
 *     WdipSemLoadNextEndEvent @ 0x140794284 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140794588 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140794808 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140794C14 (WdipSemLoadNextScenario.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407961B4 (EtwpEnumerateAutologgerPath.c)
 *     EtwpEnumerateKeyProviders @ 0x140797DFC (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x1407A4058 (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x1407A644C (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA58C (RtlpUpdateDynamicTimeZones.c)
 *     NtLockProductActivationKeys @ 0x1407B4510 (NtLockProductActivationKeys.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407BBFC8 (PopDetectSimulatedHeteroProcessors.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407D276C (EtwpLoadMicroarchitecturalPmcs.c)
 *     CmDeleteKeyRecursive @ 0x140876DE0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1408771D4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140877C68 (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x140925A1C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140930300 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A1A0 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A5DC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABF8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095ECE4 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x140967CFC (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A5CBAC (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A8C5C0 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(KeyHandle);
}

/*
 * XREFs of ZwEnumerateKey @ 0x1403FABC0
 * Callers:
 *     BiZwEnumerateKey @ 0x14039B678 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A8490 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A85B0 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406043E4 (RtlpProcessIFEOKeyFilter.c)
 *     _RegRtlEnumKey @ 0x140766D3C (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140767AB8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140767B64 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x1407946F0 (EtwpEnumerateKeyProviders.c)
 *     WdipSemLoadNextEndEvent @ 0x1407995F4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407998F8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140799B78 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140799F84 (WdipSemLoadNextScenario.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B524 (EtwpEnumerateAutologgerPath.c)
 *     PiDcInitUpdateProperties @ 0x1407A3E28 (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x1407A621C (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA35C (RtlpUpdateDynamicTimeZones.c)
 *     NtLockProductActivationKeys @ 0x1407B4270 (NtLockProductActivationKeys.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407BBF98 (PopDetectSimulatedHeteroProcessors.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407D29BC (EtwpLoadMicroarchitecturalPmcs.c)
 *     CmDeleteKeyRecursive @ 0x140876EF0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140877D78 (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x140925B2C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140930410 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A320 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A75C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093AD78 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095EE74 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x140967E8C (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A5DBAC (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A8D5C0 (RegistryOverwriteCentralProcessor.c)
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

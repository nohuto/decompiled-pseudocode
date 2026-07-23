/*
 * XREFs of RtlStringCbPrintfW @ 0x14026CAF0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405DC884 (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x1405DCA98 (EtwpExpandFileName.c)
 *     WmipSecurityMethod @ 0x1405FC100 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x14060A1EC (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406193A4 (PfSnOperationProcess.c)
 *     WmipInsertStaticNames @ 0x14062DC80 (WmipInsertStaticNames.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14063915C (EtwpGetSecurityDescriptorByGuid.c)
 *     ExProcessorCounterSetCallback @ 0x140642A80 (ExProcessorCounterSetCallback.c)
 *     IopGetLegacyVetoListDrivers @ 0x140656750 (IopGetLegacyVetoListDrivers.c)
 *     PopDiagTracePowerRequestCreate @ 0x140670078 (PopDiagTracePowerRequestCreate.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140676358 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406A5F08 (PfSnGetPrefetchInstructions.c)
 *     EtwpCreateNtFileName @ 0x1406B75F0 (EtwpCreateNtFileName.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406BE55C (PfpSourceGetPrefetchSupport.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140735D1C (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x14073E7C8 (PnpUnloadAttachedDriver.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     PiNormalizeDeviceText @ 0x14076AE00 (PiNormalizeDeviceText.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14078D370 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14079484C (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140794E6C (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407954E4 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407956E0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B524 (EtwpEnumerateAutologgerPath.c)
 *     CmpCreatePerfKeys @ 0x1407A7DC0 (CmpCreatePerfKeys.c)
 *     PpmWmiRegisterInfo @ 0x1407C62B8 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x1407C9558 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x1407CDFCC (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407D29BC (EtwpLoadMicroarchitecturalPmcs.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A1900 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408BB000 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BB110 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408F6EBC (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408F6F28 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140939330 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140939650 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A320 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A75C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093AD78 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14096DB2C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x14096FF6C (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140973DB0 (SiGetEfiSystemDevice.c)
 *     LkmdTelCreateReport @ 0x140982FB8 (LkmdTelCreateReport.c)
 *     CreateSystemRootLink @ 0x140A706AC (CreateSystemRootLink.c)
 *     VhdInitialize @ 0x140A74778 (VhdInitialize.c)
 *     MfgInitSystem @ 0x140A74924 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A74A68 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A95818 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D11E0 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}

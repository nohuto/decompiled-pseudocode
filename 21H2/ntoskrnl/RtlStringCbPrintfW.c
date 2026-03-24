/*
 * XREFs of RtlStringCbPrintfW @ 0x14027EB50
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     WmipInsertStaticNames @ 0x140638E70 (WmipInsertStaticNames.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14064434C (EtwpGetSecurityDescriptorByGuid.c)
 *     ExProcessorCounterSetCallback @ 0x14064DC60 (ExProcessorCounterSetCallback.c)
 *     IopGetLegacyVetoListDrivers @ 0x140661930 (IopGetLegacyVetoListDrivers.c)
 *     PopDiagTracePowerRequestCreate @ 0x14067C538 (PopDiagTracePowerRequestCreate.c)
 *     EtwpRealtimeCreateLogfile @ 0x140681844 (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x140681A58 (EtwpExpandFileName.c)
 *     WmipSecurityMethod @ 0x14069D030 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x1406ABAFC (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406BA234 (PfSnOperationProcess.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406C7A68 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406CEC28 (PfSnGetPrefetchInstructions.c)
 *     EtwpCreateNtFileName @ 0x1406E0310 (EtwpCreateNtFileName.c)
 *     PfpSourceGetPrefetchSupport @ 0x14070FF0C (PfpSourceGetPrefetchSupport.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140735B5C (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnloadAttachedDriver @ 0x14073E608 (PnpUnloadAttachedDriver.c)
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x14075C644 (MiDriverLoadSucceeded.c)
 *     PiNormalizeDeviceText @ 0x14076AC40 (PiNormalizeDeviceText.c)
 *     PipMakeGloballyUniqueId @ 0x14076C400 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14078D1B0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407949F4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140795014 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B324 (EtwpEnumerateAutologgerPath.c)
 *     CmpCreatePerfKeys @ 0x1407A7BC0 (CmpCreatePerfKeys.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407C5D1C (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x1407C5F98 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x1407C9238 (SepSetSystemPaths.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407CB108 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepReadAndPopulateCapes @ 0x1407CDE5C (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407D284C (EtwpLoadMicroarchitecturalPmcs.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A17A0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408BAEA0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BAFB0 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408F6D5C (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408F6DC8 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1409327DC (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140939160 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140939480 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A150 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A58C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABA8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14096D94C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x14096FD8C (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140973BD0 (SiGetEfiSystemDevice.c)
 *     LkmdTelCreateReport @ 0x140982DD8 (LkmdTelCreateReport.c)
 *     CreateSystemRootLink @ 0x140A6F6AC (CreateSystemRootLink.c)
 *     VhdInitialize @ 0x140A73778 (VhdInitialize.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A73A68 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A94818 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D1070 (_vsnwprintf.c)
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

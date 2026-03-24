/*
 * XREFs of RtlStringCbPrintfW @ 0x140347B60
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2834 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnGetPrefetchInstructions @ 0x14062D440 (PfSnGetPrefetchInstructions.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140634420 (PfSnOpenVolumesForPrefetch.c)
 *     EtwpRealtimeCreateLogfile @ 0x14065F4C4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x14065F6D8 (EtwpExpandFileName.c)
 *     WmipSecurityMethod @ 0x1406818F0 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x14068EAAC (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406A51B8 (PfSnOperationProcess.c)
 *     WmipInsertStaticNames @ 0x1406B1C50 (WmipInsertStaticNames.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406BD12C (EtwpGetSecurityDescriptorByGuid.c)
 *     ExProcessorCounterSetCallback @ 0x1406C6A20 (ExProcessorCounterSetCallback.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406DA720 (IopGetLegacyVetoListDrivers.c)
 *     PopDiagTracePowerRequestCreate @ 0x1406F5728 (PopDiagTracePowerRequestCreate.c)
 *     PfpSourceGetPrefetchSupport @ 0x14070CBB0 (PfpSourceGetPrefetchSupport.c)
 *     EtwpCreateNtFileName @ 0x140713BB0 (EtwpCreateNtFileName.c)
 *     PnpUnloadAttachedDriver @ 0x14073AAA8 (PnpUnloadAttachedDriver.c)
 *     WmipPrepareWnodeSI @ 0x140756DF4 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x14075BE34 (MiDriverLoadSucceeded.c)
 *     PiNormalizeDeviceText @ 0x14076A260 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14076B22C (PiBuildDeviceNodeInstancePath.c)
 *     PipMakeGloballyUniqueId @ 0x14076BBCC (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14078D0B0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407961B4 (EtwpEnumerateAutologgerPath.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140797F58 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140798578 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x1407A7FF0 (CmpCreatePerfKeys.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407C64DC (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x1407C6758 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x1407C9158 (SepSetSystemPaths.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407CB028 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepReadAndPopulateCapes @ 0x1407CDD7C (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407D276C (EtwpLoadMicroarchitecturalPmcs.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A17F0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408BAEF0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BB000 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408F6DAC (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408F6E18 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x14093282C (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409391B0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409394D0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093A1A0 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A5DC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093ABF8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14096D99C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x14096FDDC (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140973C20 (SiGetEfiSystemDevice.c)
 *     LkmdTelCreateReport @ 0x140982E28 (LkmdTelCreateReport.c)
 *     CreateSystemRootLink @ 0x140A6F6AC (CreateSystemRootLink.c)
 *     VhdInitialize @ 0x140A73778 (VhdInitialize.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A73A68 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A94818 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D0970 (_vsnwprintf.c)
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

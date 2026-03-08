/*
 * XREFs of RtlStringCbPrintfW @ 0x1402078E4
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405A4CF4 (RtlQueryImageXfgFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     EtwpRealtimeCreateLogfile @ 0x14069152C (EtwpRealtimeCreateLogfile.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406972D0 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x140698764 (IopGetLegacyVetoListDrivers.c)
 *     WmipPrepareWnodeSI @ 0x14069BED4 (WmipPrepareWnodeSI.c)
 *     WmipInsertStaticNames @ 0x14069E478 (WmipInsertStaticNames.c)
 *     WmipSecurityMethod @ 0x14076BC30 (WmipSecurityMethod.c)
 *     EtwpCreateNtFileName @ 0x14077271C (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x140772920 (EtwpExpandFileName.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407744D0 (IoWMIDeviceObjectToInstanceName.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14077A964 (PfSnOpenVolumesForPrefetch.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1407830E8 (PiBuildDeviceNodeInstancePath.c)
 *     EtwpGenerateFileName @ 0x14079A7F0 (EtwpGenerateFileName.c)
 *     PfSnGetPrefetchInstructions @ 0x1407E1BA4 (PfSnGetPrefetchInstructions.c)
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407FD3E8 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407FDD44 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x14081300C (CmpCreatePerfKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C7E8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14084A370 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x14084C6B0 (PpmWmiRegisterInfo.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x14084F194 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepSetSystemPaths @ 0x1408529D0 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x1408597BC (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14085EB08 (EtwpLoadMicroarchitecturalPmcs.c)
 *     PnpUnloadAttachedDriver @ 0x140866C04 (PnpUnloadAttachedDriver.c)
 *     ExProcessorCounterSetCallback @ 0x14086BB50 (ExProcessorCounterSetCallback.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     PiNormalizeDeviceText @ 0x14086EE68 (PiNormalizeDeviceText.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1409553B0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x140970F10 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140971030 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097BE40 (PfpSourceGetPrefetchSupport.c)
 *     PfSnOperationProcess @ 0x14097C840 (PfSnOperationProcess.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14099AEF4 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14099AF60 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1409DDB94 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409DFEA4 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409E01D4 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E10E8 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1528 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E1C34 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A58320 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140A5A720 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140A5CDB0 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x140A73E94 (LkmdTelCreateReport.c)
 *     CimfsInitialize @ 0x140B55208 (CimfsInitialize.c)
 *     VhdInitialize @ 0x140B56EA0 (VhdInitialize.c)
 *     PoFxRegisterDebugger @ 0x140B5E498 (PoFxRegisterDebugger.c)
 *     CreateSystemRootLink @ 0x140B6B5C8 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140B71EB4 (MfgInitSystem.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B943A4 (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdiGetVolumeNumber @ 0x140B9799C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B97B20 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B97F70 (CimfsInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D2E30 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  NTSTATUS v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 >= 0 )
    {
      if ( v7 == v5 )
      {
LABEL_6:
        pszDest[v5] = 0;
        return v6;
      }
      if ( v7 <= v5 )
        return v6;
    }
    v6 = -2147483643;
    goto LABEL_6;
  }
  v6 = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return v6;
}

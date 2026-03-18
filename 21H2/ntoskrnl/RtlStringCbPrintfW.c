/*
 * XREFs of RtlStringCbPrintfW @ 0x1402E1280
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405E3B04 (RtlQueryImageXfgFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     WmipSecurityMethod @ 0x1406BB860 (WmipSecurityMethod.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1406C1980 (IoWMIDeviceObjectToInstanceName.c)
 *     ExProcessorCounterSetCallback @ 0x1406D0CB0 (ExProcessorCounterSetCallback.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406DFC4C (PiBuildDeviceNodeInstancePath.c)
 *     PiNormalizeDeviceText @ 0x1406E1D34 (PiNormalizeDeviceText.c)
 *     EtwpCreateNtFileName @ 0x1406F0F04 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1406F0FCC (EtwpExpandFileName.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     PnpUnloadAttachedDriver @ 0x140766914 (PnpUnloadAttachedDriver.c)
 *     WmipPrepareWnodeSI @ 0x140783DB8 (WmipPrepareWnodeSI.c)
 *     WmipInsertStaticNames @ 0x14078CB04 (WmipInsertStaticNames.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140797BD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x140799218 (IopGetLegacyVetoListDrivers.c)
 *     EtwpRealtimeCreateLogfile @ 0x14079AADC (EtwpRealtimeCreateLogfile.c)
 *     PfSnOperationProcess @ 0x1407D8338 (PfSnOperationProcess.c)
 *     PfSnGetPrefetchInstructions @ 0x1407D84EC (PfSnGetPrefetchInstructions.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1407DDABC (PfSnOpenVolumesForPrefetch.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407EFFBC (PopDiagTracePowerRequestCreate.c)
 *     EtwpGenerateFileName @ 0x1407FC710 (EtwpGenerateFileName.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140822030 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408226C0 (EtwpEnableAutoLoggerProvider.c)
 *     CmpCreatePerfKeys @ 0x140834454 (CmpCreatePerfKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x1408515A8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140853230 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x140855418 (PpmWmiRegisterInfo.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140856A54 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepSetSystemPaths @ 0x1408596A4 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x14085D7FC (SepReadAndPopulateCapes.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862888 (EtwpLoadMicroarchitecturalPmcs.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140946900 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x140960D50 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140960E60 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x140987E44 (PfpSourceGetPrefetchSupport.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14099E4C4 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14099E530 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x1409DD3C4 (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409DFC30 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1409DFF60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409E0DC0 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1409E1200 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409E190C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A1B7E4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140A1DCEC (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140A21C40 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140A22034 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x140A36E2C (LkmdTelCreateReport.c)
 *     PoFxRegisterDebugger @ 0x140AF86C4 (PoFxRegisterDebugger.c)
 *     CreateSystemRootLink @ 0x140B2B2EC (CreateSystemRootLink.c)
 *     VhdInitialize @ 0x140B30860 (VhdInitialize.c)
 *     MfgInitSystem @ 0x140B30BB0 (MfgInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x140B54680 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
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

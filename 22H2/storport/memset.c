/*
 * XREFs of memset @ 0x1C0020480
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001850 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001F30 (StorpTelemetrySmartCommand.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C0 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002E4C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C00032C4 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C0009FB0 (RaidStartIoPacket.c)
 *     RaidZeroXrb @ 0x1C000AF90 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C000BDA4 (RaidAllocateSrb.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C000BF40 (StorpTelemetrySendUnitPerfData.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C00117D0 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011BC0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C00125CC (RaidGetTelemetryLogPageIds.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00126EC (RaidBusEnumeratorProbeLunZero.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0014888 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00151D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterRescanBus @ 0x1C0016EB0 (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00173A4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterEnumerateBus @ 0x1C0017758 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0017870 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017C34 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018028 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0018774 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C001892C (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidCreateUnit @ 0x1C00194C0 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C00196B0 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0019B3C (RaidZeroUnit.c)
 *     RaidQueryD3ColdInterface @ 0x1C001AD60 (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C001BA58 (RtlStringCchPrintfExW.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001BCE0 (RaidUnitUnRegisterInterfaces.c)
 *     RaUnitStreamsIoctl @ 0x1C001C810 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001C990 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001CEA4 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     wil_details_StagingConfig_Load @ 0x1C001E01C (wil_details_StagingConfig_Load.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001EBB4 (RaidUnitLogSenseCommandSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001F5E0 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C002A368 (InitializeBusesWithVmLunsBitmap.c)
 *     RaGetProtocolCommandEffects @ 0x1C002AFC8 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHack @ 0x1C002CD14 (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D158 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C002D338 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002D950 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E69C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002EA58 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002FF90 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterTargetedRescan @ 0x1C00304B8 (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C0030B48 (RaidCreateAdapter.c)
 *     RaidInitializeCryptoEngine @ 0x1C003155C (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0031CBC (RaidInitializePerfOptsPassive.c)
 *     RaidCreateDeferredQueue @ 0x1C0033DFC (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C0034040 (McGenControlCallbackV2.c)
 *     StorEtwMiniportEventProxy @ 0x1C003862C (StorEtwMiniportEventProxy.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0039450 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C003A538 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003A84C (StorpAdapterInitializePoFxPower.c)
 *     StorpInitializeTimer @ 0x1C003C490 (StorpInitializeTimer.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D498 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003F0F8 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C003F738 (RaidRegisterPerfStates.c)
 *     StorpPopulateErrorData @ 0x1C00435A0 (StorpPopulateErrorData.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0043AEC (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0043C1C (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0043E34 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0043EE4 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0043FCC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004414C (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0044348 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidEvaluateDsmLedState @ 0x1C0045218 (RaidEvaluateDsmLedState.c)
 *     RaidLogAllocationFailure @ 0x1C00455B4 (RaidLogAllocationFailure.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C00456BC (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorCreateSystemLogEntry @ 0x1C0046054 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0046354 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0047020 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitSmartDataIoctl @ 0x1C00485F8 (RaUnitSmartDataIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004AE60 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004BC54 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004C2B0 (RtlStringExHandleOtherFlagsW.c)
 *     DllInitialize @ 0x1C004C5A0 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C004D2C8 (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorCreateIoGateway @ 0x1C004E40C (StorCreateIoGateway.c)
 *     StorEtwEnableCallback @ 0x1C004F140 (StorEtwEnableCallback.c)
 *     StorpInitializePerfTelemetry @ 0x1C0052790 (StorpInitializePerfTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052E98 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C005618C (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0056F34 (StorpTelemetryNvmeGetLogPage.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0057E8C (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C0058770 (ReplaceDeviceId.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0058D58 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0058EA4 (RaidMachineRequireIoPortResource.c)
 *     AsciiToWChar @ 0x1C00590A0 (AsciiToWChar.c)
 *     PortAllocateRegistryBuffer @ 0x1C0059110 (PortAllocateRegistryBuffer.c)
 *     PortBuildRegKeyName @ 0x1C00591A4 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C005930C (PortMiniportRegistryRead.c)
 *     PortMiniportRegistryWrite @ 0x1C0059530 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C005A74C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitTracing @ 0x1C005AB74 (PortTraceInitTracing.c)
 *     wil_StagingConfig_QueryFeatureState @ 0x1C00720CC (wil_StagingConfig_QueryFeatureState.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0072610 (RaGetUnitStorageDeviceProperty.c)
 *     RaidPrepareSrbForReuse @ 0x1C0073010 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C00734B8 (PortRegistryRead.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C007376C (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C0073B5C (PortWdmGetDeviceCapabilities.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C00740F8 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0074474 (RaidUnitGetDeviceParameters.c)
 *     PortRegistryReadWithHandle @ 0x1C0074E20 (PortRegistryReadWithHandle.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0075680 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00757E4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0075884 (RaUnitRegisterForIdleDetection.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0075E44 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0077218 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C00773BC (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0077494 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0077720 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidInitializeAdapter @ 0x1C0079538 (RaidInitializeAdapter.c)
 *     RaCreateBus @ 0x1C0079E88 (RaCreateBus.c)
 *     RaDeleteBus @ 0x1C0079EAC (RaDeleteBus.c)
 *     RaidInitializeDma @ 0x1C0079F74 (RaidInitializeDma.c)
 *     RaCreateDriver @ 0x1C007A114 (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C007A36C (RaSaveDriverInitData.c)
 *     WppTraceCallback @ 0x1C007A8D0 (WppTraceCallback.c)
 *     RaCreateMiniport @ 0x1C007AB48 (RaCreateMiniport.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C007AC60 (RiAllocateMiniportDeviceExtension.c)
 *     RaInitializeConfiguration @ 0x1C007AE08 (RaInitializeConfiguration.c)
 *     RaidUnitCreateDumpData @ 0x1C007BA4C (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C007BB8C (RaidUnitCreateDumpInfo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007D4F4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C007E1FC (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C007E564 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C007F440 (StorPortNotificationVrfy.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}

/*
 * XREFs of memset @ 0x1C0020540
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001850 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001F30 (StorpTelemetrySmartCommand.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C0 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002E4C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C00032C4 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A70 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C000A020 (RaidStartIoPacket.c)
 *     RaidZeroXrb @ 0x1C000B000 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C000BE14 (RaidAllocateSrb.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C000BFB0 (StorpTelemetrySendUnitPerfData.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C0011840 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001263C (RaidGetTelemetryLogPageIds.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C001275C (RaidBusEnumeratorProbeLunZero.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C00148F8 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015244 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterRescanBus @ 0x1C0016F20 (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0017414 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterEnumerateBus @ 0x1C00177C8 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00178E0 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017CA4 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018098 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00187E4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C001899C (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidCreateUnit @ 0x1C0019530 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C0019720 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0019BAC (RaidZeroUnit.c)
 *     RaidQueryD3ColdInterface @ 0x1C001ADD0 (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C001BAC8 (RtlStringCchPrintfExW.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001BD50 (RaidUnitUnRegisterInterfaces.c)
 *     RaUnitStreamsIoctl @ 0x1C001C880 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001CA00 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001CF14 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     wil_details_StagingConfig_Load @ 0x1C001E0E0 (wil_details_StagingConfig_Load.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001EC78 (RaidUnitLogSenseCommandSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001F6A4 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C002A388 (InitializeBusesWithVmLunsBitmap.c)
 *     RaGetProtocolCommandEffects @ 0x1C002AFE8 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHack @ 0x1C002CD34 (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D178 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C002D358 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002D970 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E6BC (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002EA78 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EE38 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002FFB0 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterTargetedRescan @ 0x1C00304D8 (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C0030B68 (RaidCreateAdapter.c)
 *     RaidInitializeCryptoEngine @ 0x1C003157C (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0031CDC (RaidInitializePerfOptsPassive.c)
 *     RaidCreateDeferredQueue @ 0x1C0033E1C (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C0034060 (McGenControlCallbackV2.c)
 *     StorEtwMiniportEventProxy @ 0x1C003864C (StorEtwMiniportEventProxy.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0039470 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C003A558 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003A86C (StorpAdapterInitializePoFxPower.c)
 *     StorpInitializeTimer @ 0x1C003C4B0 (StorpInitializeTimer.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D4B8 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C003F118 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C003F758 (RaidRegisterPerfStates.c)
 *     StorpPopulateErrorData @ 0x1C00435C0 (StorpPopulateErrorData.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0043B0C (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0043C3C (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0043E54 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0043F04 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0043FEC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004416C (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0044368 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidEvaluateDsmLedState @ 0x1C0045238 (RaidEvaluateDsmLedState.c)
 *     RaidLogAllocationFailure @ 0x1C00455D4 (RaidLogAllocationFailure.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C00456DC (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorCreateSystemLogEntry @ 0x1C0046074 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0046374 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0047040 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitSmartDataIoctl @ 0x1C0048618 (RaUnitSmartDataIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004AE80 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004BC74 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004C2D0 (RtlStringExHandleOtherFlagsW.c)
 *     DllInitialize @ 0x1C004C5C0 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C004D2E8 (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorCreateIoGateway @ 0x1C004E42C (StorCreateIoGateway.c)
 *     StorEtwEnableCallback @ 0x1C004F160 (StorEtwEnableCallback.c)
 *     StorpInitializePerfTelemetry @ 0x1C00527B0 (StorpInitializePerfTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052EB8 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00561AC (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0056F54 (StorpTelemetryNvmeGetLogPage.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0057EAC (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C0058790 (ReplaceDeviceId.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0058D78 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0058EC4 (RaidMachineRequireIoPortResource.c)
 *     AsciiToWChar @ 0x1C00590C0 (AsciiToWChar.c)
 *     PortAllocateRegistryBuffer @ 0x1C0059130 (PortAllocateRegistryBuffer.c)
 *     PortBuildRegKeyName @ 0x1C00591C4 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C005932C (PortMiniportRegistryRead.c)
 *     PortMiniportRegistryWrite @ 0x1C0059550 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C005A76C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitTracing @ 0x1C005AB94 (PortTraceInitTracing.c)
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

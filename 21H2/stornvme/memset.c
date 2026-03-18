/*
 * XREFs of memset @ 0x1C00109C0
 * Callers:
 *     FirmwareGetInfo @ 0x1C0002AC0 (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0002F48 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000335C (ScsiModeSenseRequest.c)
 *     NVMeHwBuildIo @ 0x1C0004360 (NVMeHwBuildIo.c)
 *     MdlToPrp @ 0x1C0004D00 (MdlToPrp.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 *     NVMeLogEtwControllerInfo @ 0x1C0005BE0 (NVMeLogEtwControllerInfo.c)
 *     FillControllerConfiguration @ 0x1C0005CB4 (FillControllerConfiguration.c)
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C00069E8 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0006C38 (NVMeIoCompletionQueueCreate.c)
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C00071B8 (NVMeGetNVMSetAttributeList.c)
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000793C (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     NVMeControllerIdentify @ 0x1C0007C08 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C0007D08 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0007F68 (NVMeNameSpaceIdentify.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C0008768 (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00088B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0008A28 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeSetIoQueueCount @ 0x1C0008B98 (NVMeSetIoQueueCount.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0008D3C (NVMeBuildPollingConfiguration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0008E58 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C0008F6C (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0009084 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x1C0009184 (NVMeConfigAsyncEvent.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0009474 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetPowerState @ 0x1C000A084 (NVMeSetPowerState.c)
 *     NVMeLogTelemetry @ 0x1C000A660 (NVMeLogTelemetry.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x1C000A984 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C000B0FC (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CAF4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetNamespaceMetadata @ 0x1C000CC64 (NVMeGetNamespaceMetadata.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000CE44 (NVMeGetRichDeviceDescription.c)
 *     NVMeHwUnitControl @ 0x1C000D170 (NVMeHwUnitControl.c)
 *     DriverEntry @ 0x1C000E12C (DriverEntry.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C000F05C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     FillControllerRuntimeLog @ 0x1C0017A04 (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0017B68 (NVMeControllerStartFailureEventLog.c)
 *     AdminQueuesFreeResources @ 0x1C0017C84 (AdminQueuesFreeResources.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x1C0018670 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C0019314 (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 *     NVMeInitStreams @ 0x1C00198AC (NVMeInitStreams.c)
 *     IoctlCreateReservedQueuePair @ 0x1C001AFEC (IoctlCreateReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x1C001B91C (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001BD14 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C001C6EC (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C001C8D4 (LogSenseTemperature.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C001DC70 (NVMeGetSanitizeLogWorkItem.c)
 *     SglToPrp @ 0x1C00213A4 (SglToPrp.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0021E00 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C002230C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C00223F4 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0022584 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0022854 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C0022CC0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C0023180 (NVMeGetLogPageCompletion.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0023504 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0023810 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C0023AF0 (NVMeReenumerateNameSpaceStart.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0023B84 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023F2C (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C00242B0 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C002449C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0024584 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C002473C (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 *     NVMeSendControllerInternalData @ 0x1C0025758 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x1C0025E54 (NVMeSendLunInternalData.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}

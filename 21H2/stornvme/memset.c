/*
 * XREFs of memset @ 0x1C0008040
 * Callers:
 *     FirmwareGetInfo @ 0x1C000233C (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0002794 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000294C (ScsiModeSenseRequest.c)
 *     NVMeHwBuildIo @ 0x1C0004930 (NVMeHwBuildIo.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C0007138 (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000778C (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     DriverEntry @ 0x1C000A530 (DriverEntry.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000A6FC (NVMeControllerStartFailureEventLog.c)
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 *     AdminQueuesFreeResources @ 0x1C000B248 (AdminQueuesFreeResources.c)
 *     NVMeControllerRemove @ 0x1C000E434 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E85C (NVMeControllerStop.c)
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000F3E0 (NVMeLogTelemetry.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00130A4 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001348C (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0013E64 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C001404C (LogSenseTemperature.c)
 *     NVMeGetRichDeviceDescription @ 0x1C0015168 (NVMeGetRichDeviceDescription.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C001667C (QueryProtocolInfoIdentifyData.c)
 *     SglToPrp @ 0x1C001755C (SglToPrp.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0017E98 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0018014 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0018128 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001862C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0018714 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00188A4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0018998 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0018B74 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0018DE8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0018FC8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0019218 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C00193A0 (NVMeGetLogPageCompletion.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0019654 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0019790 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0019BC4 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0019EC0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001A2D4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001A3AC (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C001A730 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C001AC78 (NVMeReenumerateNameSpaceStart.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C001AD0C (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C001B080 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C001B3E4 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001B504 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001B5EC (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001B7A4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001B8B8 (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001BCD4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C001BEC4 (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C001C0CC (NVMeSyncHostTime.c)
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

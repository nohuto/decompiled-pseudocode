/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C0005AAC
 * Callers:
 *     QueryProtocolInfoCompletion @ 0x1C0002180 (QueryProtocolInfoCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002470 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x1C00030F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0004670 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000778C (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007A10 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     IoQueuesFreeResources @ 0x1C000C684 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C000C8F4 (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000E434 (NVMeControllerRemove.c)
 *     NVMeRequestComplete @ 0x1C0010AB0 (NVMeRequestComplete.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0012BF4 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0014AE0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0014B90 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0014C40 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0014F50 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0016330 (QueryEnduranceInfoLogCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C00167E0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C0017390 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0018714 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0018998 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C0018F50 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0019150 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00193A0 (NVMeGetLogPageCompletion.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0019790 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0019EC0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C001C0CC (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8

  result = 0LL;
  if ( a3 )
  {
    v6 = *a3;
    if ( v6 )
    {
      if ( a4 )
      {
        result = StorPortExtendedFunction(83LL, a1, v6, a2);
        if ( !(_DWORD)result )
          *a3 = 0LL;
      }
    }
  }
  return result;
}

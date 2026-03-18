/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C00053FC
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C00014A0 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoCompletion @ 0x1C0001720 (QueryProtocolInfoCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0002BF0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003610 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C00069E8 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0006C38 (NVMeIoCompletionQueueCreate.c)
 *     IoQueuesInitialize @ 0x1C0008168 (IoQueuesInitialize.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CAF4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetNamespaceMetadata @ 0x1C000CC64 (NVMeGetNamespaceMetadata.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C000E5D0 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C000F9E0 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     IoQueuesFreeResources @ 0x1C00181C4 (IoQueuesFreeResources.c)
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C0019314 (NVMeControllerSetHostIdentifier.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C001B48C (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C001D3E0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C001D490 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C001D540 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C001D870 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C001DC70 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationReportStatus @ 0x1C001E814 (NVMeReservationReportStatus.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C001FDA0 (QueryEnduranceInfoLogCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0020390 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C0021060 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C00223F4 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C0022AC8 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C0023180 (NVMeGetLogPageCompletion.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax

  if ( !a3 )
    return 3238002689LL;
  v5 = *a3;
  if ( !v5 || !a4 )
    return 3238002689LL;
  result = StorPortExtendedFunction(83LL, a1, v5, a2);
  if ( !(_DWORD)result )
    *a3 = 0LL;
  return result;
}

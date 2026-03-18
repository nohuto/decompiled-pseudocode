/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C000EEA4
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00028F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C000368C (NVMeRequestComplete.c)
 *     NVMeControllerAllocateLocalCommand @ 0x1C00041A4 (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x1C0004338 (NVMeControllerDeleteLocalCommandPool.c)
 *     IoQueuesFreeResources @ 0x1C000AE84 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C000B10C (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000E23C (NVMeControllerRemove.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E8FC (NVMeControllerSetHostIdentifier.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0013374 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C0015940 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015AD0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0015D90 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015E50 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016190 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016700 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016A00 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationReportStatus @ 0x1C0017598 (NVMeReservationReportStatus.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0018B00 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C0018BF0 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x1C00194BC (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C001B120 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CD30 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CF54 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D1C0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D4C4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C001D7B0 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001D9D8 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DCC4 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E0F4 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C001E280 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EB6C (NVMeGetNamespaceMetadata.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EFF0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeNameSpaceIdentify @ 0x1C00210FC (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C00228A8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0022AF0 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeSyncHostTime @ 0x1C00242D8 (NVMeSyncHostTime.c)
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
  result = StorPortExtendedFunction(83LL, a1, v5);
  if ( !(_DWORD)result )
    *a3 = 0LL;
  return result;
}

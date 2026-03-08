/*
 * XREFs of NVMeFreeDmaBuffer @ 0x1C000EE04
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 *     NVMeControllerAllocateLocalCommand @ 0x1C00032F0 (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x1C0003484 (NVMeControllerDeleteLocalCommandPool.c)
 *     IoQueuesFreeResources @ 0x1C000ADC4 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C000B04C (IoQueuesInitialize.c)
 *     NVMeControllerRemove @ 0x1C000E18C (NVMeControllerRemove.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E854 (NVMeControllerSetHostIdentifier.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0013304 (IoctlDeleteReservedQueuePair.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C00158D0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0015A60 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C0015D20 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015DE0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016120 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016690 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016990 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationReportStatus @ 0x1C0017528 (NVMeReservationReportStatus.c)
 *     QueryEnduranceInfoLogCompletion @ 0x1C0018A90 (QueryEnduranceInfoLogCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C0018B80 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019910 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x1C001B0B0 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CCC0 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CEE4 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D150 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D454 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C001D740 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001D968 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E084 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C001E210 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EAFC (NVMeGetNamespaceMetadata.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EF80 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F6B0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0022838 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0022A80 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
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

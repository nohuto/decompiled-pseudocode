/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C000C1C0
 * Callers:
 *     NVMeControllerAllocateLocalCommand @ 0x1C00032F0 (NVMeControllerAllocateLocalCommand.c)
 *     IoQueuesInitialize @ 0x1C000B04C (IoQueuesInitialize.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E854 (NVMeControllerSetHostIdentifier.c)
 *     FirmwareGetInfo @ 0x1C0011CF4 (FirmwareGetInfo.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00139B0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013E68 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B14 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0014D00 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0015488 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015718 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016690 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016CB8 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C0016E5C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C0016FEC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C00171E0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x1C0017528 (NVMeReservationReportStatus.c)
 *     ProtocolCommandCompletion @ 0x1C0018650 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018ED0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019218 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 *     ScsiModeSenseRequest @ 0x1C0019F94 (ScsiModeSenseRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B16C (SetProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA00 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CCC0 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CEE4 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D150 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D454 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D5EC (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D810 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001D968 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E084 (NVMeGetHealthInfoLog.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EAFC (NVMeGetNamespaceMetadata.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EF80 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F6B0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0022838 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022D64 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023104 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 252);
  result = StorPortExtendedFunction(82LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, a2, 0LL);
  }
  return result;
}

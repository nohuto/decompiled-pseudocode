/*
 * XREFs of LocalCommandReuse @ 0x1C000C21C
 * Callers:
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D744 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E8FC (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EB5C (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016700 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeBuildPollingConfiguration @ 0x1C001C3A8 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C001C4F0 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C001C5D4 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001CC78 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CD30 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C001CE94 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CF54 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D100 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D1C0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x1C001D39C (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D4C4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D65C (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D880 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DBD0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DCC4 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001DFF8 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E0F4 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C001E280 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001E668 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001E81C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E978 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EB6C (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EEE4 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EFF0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001F414 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001FB24 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001FBC4 (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C00210FC (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C00228A8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022DD4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023174 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C00234E0 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetArbitration @ 0x1C002369C (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0023794 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0023850 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C00239D8 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C0023AC0 (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C00240FC (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C00242D8 (NVMeSyncHostTime.c)
 * Callees:
 *     memset @ 0x1C0004B80 (memset.c)
 */

__int64 __fastcall LocalCommandReuse(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 4336) |= 0x40u;
  v3 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v3, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4232LL) = 0LL;
  result = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = result;
  *(_BYTE *)a2 = 1;
  return result;
}

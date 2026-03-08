/*
 * XREFs of LocalCommandReuse @ 0x1C000C15C
 * Callers:
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D694 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E854 (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EAB4 (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016690 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeBuildPollingConfiguration @ 0x1C001C338 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C001C480 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C001C564 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001CC08 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CCC0 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C001CE24 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CEE4 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D090 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D150 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x1C001D32C (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D454 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D5EC (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D810 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DB60 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001DF88 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E084 (NVMeGetHealthInfoLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C001E210 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001E5F8 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001E7AC (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E908 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EAFC (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EE74 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EF80 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001F3A4 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F6B0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001FAB4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001FB54 (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0022838 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022D64 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023104 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C0023470 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetArbitration @ 0x1C002362C (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0023724 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00237E0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0023968 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C0023A50 (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023ED4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C002413C (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
 * Callees:
 *     Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage @ 0x1C000361C (Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall LocalCommandReuse(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage() && *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 4336) |= 0x40u;
  v4 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v4, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4232LL) = 0LL;
  result = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = result;
  *(_BYTE *)a2 = 1;
  return result;
}

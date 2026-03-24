/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1406BC818
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14032ED38 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpTransitionToRealtime @ 0x1403F8718 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1405AD2D4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405AD7A4 (EtwpSetCompressionSettings.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpRealtimeConnect @ 0x14069B8B8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14069BCE8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406A2A08 (EtwpTrackProviderBinary.c)
 *     EtwpTrackProviderRegistration @ 0x1406BBC60 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1406BBD78 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BC360 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFlushTrace @ 0x140710F3C (EtwpFlushTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x140711184 (EtwpLookupLoggerIdByName.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1407126B8 (EtwpQueryTrace.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     EtwShutdown @ 0x140774A14 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140788980 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14078971C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x140791BF8 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5620 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x140934430 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409346C8 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x140934C34 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140934D20 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409385B0 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093CF70 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F6B4 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093F990 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x140940E90 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x140941B9C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1409485C4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140948770 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409493A0 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982C10 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}

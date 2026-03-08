/*
 * XREFs of EtwpReleaseLoggerContext @ 0x14069349C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1402067AC (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405F9D94 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x1405FD178 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x140600518 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140600778 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14067ED38 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140692600 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwpTrackProviderRegistration @ 0x1406952D0 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407456E0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140748BFC (EtwpRealtimeConnect.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407968F8 (EtwQueryTraceHandleByLoggerName.c)
 *     AddDecodeGuidToSessions @ 0x14079AF30 (AddDecodeGuidToSessions.c)
 *     WmiQueryTraceInformation @ 0x140833D80 (WmiQueryTraceInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x140850058 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x140857400 (EtwpTrackProviderBinary.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x140861AF0 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x1409DFD2C (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1409E4B08 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E4ED8 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1409E5140 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409E522C (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409E9260 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409E9D28 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409E9FE0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1409EA544 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409EA6F0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EB328 (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EBB50 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F260C (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A73C40 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B6569C (EtwpFixBootLoggers.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B943A4 (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}

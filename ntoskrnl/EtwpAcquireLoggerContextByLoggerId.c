/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1402067AC (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405F9D94 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x140600518 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140600778 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14067ED38 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpValidateEnableNotification @ 0x14068F7E0 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140692600 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140692AB4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x140692F88 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwpTrackProviderRegistration @ 0x1406952D0 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContext @ 0x140745800 (EtwpAcquireLoggerContext.c)
 *     EtwpRealtimeConnect @ 0x140748BFC (EtwpRealtimeConnect.c)
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
 *     EtwpQueryReferenceTime @ 0x1409E522C (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409E9260 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409E9D28 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1409EA544 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409EA6F0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EB328 (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EBB50 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F260C (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A73C40 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B6569C (EtwpFixBootLoggers.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  unsigned int *v7; // rbx

  v4 = a2;
  v6 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16)
    || (*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2) & 1) != 0
    || !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * a2), 1u) )
  {
    return 0LL;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16)
    || (_mm_lfence(), v7 = *(unsigned int **)(*(_QWORD *)(a1 + 456) + 8 * v4), ((unsigned __int8)v7 & 1) != 0) )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject(v7 + 158, Executive, 0, 0, 0LL);
  if ( !v7[80] )
  {
    EtwpReleaseLoggerContext(v7, a3);
    return 0LL;
  }
  return v7;
}

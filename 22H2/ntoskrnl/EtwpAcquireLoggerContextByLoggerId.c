/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1406BED1C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228540 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x1405FC234 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x140602968 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140602BC8 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140682118 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1406BD758 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406BD7EC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFBE0 (EtwpTrackProviderRegistration.c)
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     EtwpValidateEnableNotification @ 0x140780B38 (EtwpValidateEnableNotification.c)
 *     AddDecodeGuidToSessions @ 0x1407E9FA0 (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeConnect @ 0x1407F5B64 (EtwpRealtimeConnect.c)
 *     EtwpAcquireLoggerContext @ 0x1407F90F4 (EtwpAcquireLoggerContext.c)
 *     WmiQueryTraceInformation @ 0x140833A30 (WmiQueryTraceInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x140853498 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14085B0E0 (EtwpTrackProviderBinary.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860054 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1408662F0 (EtwpTracingProvEnableCallback.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x1409E2BCC (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1409E79A8 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E7D78 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1409E80CC (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1409EC100 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECBC8 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED3E4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409ED590 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE1BC (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EE9E4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F549C (EtwpSetProviderBinaryTracking.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76940 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140B68B2C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321C20 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
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

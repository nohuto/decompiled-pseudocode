/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14032ED38 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1405AD2D4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405AD7A4 (EtwpSetCompressionSettings.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406024C8 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpRealtimeConnect @ 0x14069B8B8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14069BCE8 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406A2A08 (EtwpTrackProviderBinary.c)
 *     EtwpTrackProviderRegistration @ 0x1406BBC60 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1406BBD78 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BC360 (EtwpAddRegEntryToGroup.c)
 *     EtwpLookupLoggerIdByName @ 0x140711184 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x140712790 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x140716580 (EtwpValidateEnableNotification.c)
 *     EtwShutdown @ 0x140774A14 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140788980 (WmiQueryTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5620 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x140934430 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409346C8 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x140934D20 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409385B0 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x14093CF70 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F6B4 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140940E90 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x140941B9C (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1409485C4 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140948770 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409493A0 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140982C10 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14026D960 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1406BC818 (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int *v8; // rbx

  v4 = a2;
  v6 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    LOBYTE(v7) = 1;
  else
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2);
  if ( (v7 & 1) != 0
    || !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * a2), 1u) )
  {
    return 0LL;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
  {
    v8 = (unsigned int *)1;
  }
  else
  {
    _mm_lfence();
    v8 = *(unsigned int **)(*(_QWORD *)(a1 + 456) + 8 * v4);
  }
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject(v8 + 162, Executive, 0, 0, 0LL);
  if ( !v8[84] )
  {
    EtwpReleaseLoggerContext(v8, a3);
    return 0LL;
  }
  return v8;
}

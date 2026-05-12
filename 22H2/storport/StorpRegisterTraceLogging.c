/*
 * XREFs of StorpRegisterTraceLogging @ 0x1C007BE04
 * Callers:
 *     RaInitializeDriver @ 0x1C007A25C (RaInitializeDriver.c)
 * Callees:
 *     StorpInitializePerfTelemetry @ 0x1C0052790 (StorpInitializePerfTelemetry.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C007C080 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

char StorpRegisterTraceLogging()
{
  int v0; // eax

  if ( g_StorpTraceLoggingPerformanceEnabled )
    StorpInitializePerfTelemetry();
  v0 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation();
  if ( v0 >= 0 )
  {
    g_StorpTraceLoggingInitialized = 1;
    KeInitializeTimer(&g_StorpTraceLoggingDailyTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingDailyTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    KeSetCoalescableTimer(
      &g_StorpTraceLoggingDailyTimer,
      (LARGE_INTEGER)-6000000000LL,
      0,
      0xEA60u,
      &g_StorpTraceLoggingDailyTimerDpc);
    KeInitializeTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingHierarchicalResetTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    LOBYTE(v0) = KeSetCoalescableTimer(
                   &g_StorpTraceLoggingHierarchicalResetTimer,
                   (LARGE_INTEGER)-138000000000LL,
                   0,
                   0x493E0u,
                   &g_StorpTraceLoggingHierarchicalResetTimerDpc);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
    {
      KeInitializeTimer(&g_StorpTraceLoggingPerformanceTimer);
      KeInitializeDpc(
        &g_StorpTraceLoggingPerformanceTimerDpc,
        (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
        0LL);
      LOBYTE(v0) = KeSetCoalescableTimer(
                     &g_StorpTraceLoggingPerformanceTimer,
                     (LARGE_INTEGER)-6000000000LL,
                     0,
                     0xEA60u,
                     &g_StorpTraceLoggingPerformanceTimerDpc);
    }
    if ( g_StorpTraceLoggingDeviceHealthEnabled )
    {
      KeInitializeTimer(&g_StorpTraceLoggingDeviceHealthTimer);
      KeInitializeDpc(
        &g_StorpTraceLoggingDeviceHealthTimerDpc,
        (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
        0LL);
      LOBYTE(v0) = KeSetCoalescableTimer(
                     &g_StorpTraceLoggingDeviceHealthTimer,
                     (LARGE_INTEGER)-6000000000LL,
                     0,
                     0xEA60u,
                     &g_StorpTraceLoggingDeviceHealthTimerDpc);
    }
  }
  return v0;
}

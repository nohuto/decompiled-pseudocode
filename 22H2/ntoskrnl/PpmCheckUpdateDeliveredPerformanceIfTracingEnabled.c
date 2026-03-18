/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14036D700
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256D60 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}

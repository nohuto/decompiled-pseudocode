/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14037E600
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220BD0 (PpmCheckSnapAllDeliveredPerformance.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}

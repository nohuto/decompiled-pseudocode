/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x1403C81A0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUpdatePerformanceStateCountersForLp(unsigned int a1)
{
  unsigned __int16 v1; // ax

  v1 = HvcallInitiateHypercall(65774LL, a1, 0LL);
  if ( v1 )
    return HvlpHvToNtStatus(v1);
  else
    return 0LL;
}

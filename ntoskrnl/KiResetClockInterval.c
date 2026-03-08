/*
 * XREFs of KiResetClockInterval @ 0x14056D814
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045A080 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x14022FD10 (KiSetNextClockTickDueTime.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402D9468 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402DF1B0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14056DA7C (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(unsigned __int64 a1)
{
  int v2; // edx

  RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, a1);
  v2 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 24) = 0;
  if ( v2 )
    PoTraceSystemTimerResolutionKernel(0, v2, 1);
  if ( !KiClockTimerPerCpuTickScheduling )
    return KiSetClockIntervalToMinimumRequested();
  KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), 0);
  return KiSetNextClockTickDueTime(1);
}

/*
 * XREFs of KiResetClockInterval @ 0x14056FE84
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140462020 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402C1C34 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetNextClockTickDueTime @ 0x1402C84E0 (KiSetNextClockTickDueTime.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340704 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1405700EC (KiSetClockIntervalToMinimumRequested.c)
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
  KiSetClockTimerKTimerDeadlines((int)KeGetCurrentPrcb(), 0);
  return KiSetNextClockTickDueTime(1);
}

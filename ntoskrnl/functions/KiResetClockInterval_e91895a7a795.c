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

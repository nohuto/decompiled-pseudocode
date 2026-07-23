/*
 * XREFs of PopStatsMarkPowerRequestActive @ 0x1406709E8
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14066F390 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PoStartStopWatch @ 0x14027137C (PoStartStopWatch.c)
 *     PopLogPowerRequestAction @ 0x14066FB30 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x140670B10 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestActive(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 StopWatchByRequestType; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    LOBYTE(v2) = 1;
    StopWatchByRequestType = PopGetStopWatchByRequestType(v3, 3LL, v2);
    if ( StopWatchByRequestType )
      PoStartStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Set", a1);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

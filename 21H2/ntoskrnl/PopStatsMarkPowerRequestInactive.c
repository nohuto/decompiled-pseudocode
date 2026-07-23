/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x140670DA0
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14066F390 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PoPauseStopWatch @ 0x14027149C (PoPauseStopWatch.c)
 *     PopLogPowerRequestAction @ 0x14066FB30 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x140670B10 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopStatsMarkPowerRequestInactive(__int64 a1)
{
  __int64 v2; // rcx
  __int64 StopWatchByRequestType; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType(v2, 3);
    if ( StopWatchByRequestType )
      PoPauseStopWatch(StopWatchByRequestType);
  }
  PopLogPowerRequestAction("PowerRequest Clear", a1);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

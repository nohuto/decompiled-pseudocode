/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x1406F7330
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406F4A40 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PoPauseStopWatch @ 0x14034C2C0 (PoPauseStopWatch.c)
 *     PopLogPowerRequestAction @ 0x1406F51E0 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x1406F61C0 (PopGetStopWatchByRequestType.c)
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

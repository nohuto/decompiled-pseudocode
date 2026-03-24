/*
 * XREFs of PopStatsMarkPowerRequestInactive @ 0x14062CEE8
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14067BC50 (PopUpdatePowerRequestProcessWakeCounter.c)
 * Callees:
 *     PoPauseStopWatch @ 0x140264050 (PoPauseStopWatch.c)
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14062B588 (PopLogPowerRequestAction.c)
 *     PopGetStopWatchByRequestType @ 0x14062BEE8 (PopGetStopWatchByRequestType.c)
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

/*
 * XREFs of PopStatsCreatePowerRequest @ 0x14062B98C
 * Callers:
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopLogPowerRequestAction @ 0x14062B588 (PopLogPowerRequestAction.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14062B9E4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 */

void __fastcall PopStatsCreatePowerRequest(__int64 a1)
{
  volatile signed __int32 *StatsForPowerRequest; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  StatsForPowerRequest = (volatile signed __int32 *)PopAvlFindOrMakeStatsForPowerRequest(a1);
  if ( StatsForPowerRequest )
    _InterlockedIncrement(StatsForPowerRequest);
  *(_QWORD *)(a1 + 144) = StatsForPowerRequest;
  PopLogPowerRequestAction("Create PowerRequest", a1);
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

/*
 * XREFs of PdcPoPowerRequestBlockingCallback @ 0x1406F5FC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PoArmStopWatchCollection @ 0x14034CF04 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x14034CF54 (PoUnarmStopWatchCollection.c)
 *     PoIsArmedStopWatchCollection @ 0x14034CFC4 (PoIsArmedStopWatchCollection.c)
 *     PopLogPowerRequestAction @ 0x1406F51E0 (PopLogPowerRequestAction.c)
 */

void __fastcall PdcPoPowerRequestBlockingCallback(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  if ( a1 )
  {
    PopLogPowerRequestAction("Power Request Blocking Started", 0LL);
    PoArmStopWatchCollection((__int64 *)&ExecutionRequiredStopWatchCollection);
  }
  else if ( PoIsArmedStopWatchCollection((__int64)&ExecutionRequiredStopWatchCollection) )
  {
    PopLogPowerRequestAction("Power Request Blocking Ended", 0LL);
    PoUnarmStopWatchCollection((__int64 *)&ExecutionRequiredStopWatchCollection);
  }
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}

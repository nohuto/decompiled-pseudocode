/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x14097E8D0
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140990FE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopPowerRequestRevokeRequests @ 0x140581724 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(10, 1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}

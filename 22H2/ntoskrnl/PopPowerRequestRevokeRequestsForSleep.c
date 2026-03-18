/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x140981980
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopPowerRequestRevokeRequests @ 0x140583C54 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(10, 1);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}

void PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(10, 1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}

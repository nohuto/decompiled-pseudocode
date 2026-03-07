NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140C03568, Executive, 0, 0, 0LL);
}

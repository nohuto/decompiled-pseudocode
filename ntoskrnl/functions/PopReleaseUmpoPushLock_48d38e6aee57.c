void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((__int64 *)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}

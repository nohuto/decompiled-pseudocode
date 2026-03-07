void PopAcquireTransitionLockAfterSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 1;
  if ( qword_140C3CF28 )
    PopWaitingForTransitionLock = (int)PoPushPowerStateTransitionRecordWithCallback(
                                         KeGetCurrentThread()->ApcState.Process,
                                         qword_140C3CF28,
                                         0LL,
                                         0LL) >= 0;
  PopReleaseRwLock((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 0;
  PopReleaseRwLock((ULONG_PTR)&PopUnlockAfterSleepLock);
}

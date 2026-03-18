/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140AA9120
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F194 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 */

void PopAcquireTransitionLockAfterSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 1;
  if ( qword_140C3CFE8 )
    PopWaitingForTransitionLock = (int)PoPushPowerStateTransitionRecordWithCallback(
                                         KeGetCurrentThread()->ApcState.Process,
                                         qword_140C3CFE8,
                                         0LL,
                                         0LL) >= 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  PopAcquireTransitionLock(1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  PopWaitingForTransitionLock = 0;
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
}

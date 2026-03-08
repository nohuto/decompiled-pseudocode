/*
 * XREFs of PopAcquireTransitionLockAfterSleep @ 0x140AA5EF0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058CC64 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireTransitionLock @ 0x14082AD04 (PopAcquireTransitionLock.c)
 */

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

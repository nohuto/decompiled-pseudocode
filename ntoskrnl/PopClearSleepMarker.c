/*
 * XREFs of PopClearSleepMarker @ 0x14097D734
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA37E0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void PopClearSleepMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) &= 0xFu;
  PopBsdHandleRequest(9u);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}

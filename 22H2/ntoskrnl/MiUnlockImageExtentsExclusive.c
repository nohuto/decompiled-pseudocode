/*
 * XREFs of MiUnlockImageExtentsExclusive @ 0x1408D0304
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CF2F4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D0060 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 */

char MiUnlockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CCA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CCA8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4CCA8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}

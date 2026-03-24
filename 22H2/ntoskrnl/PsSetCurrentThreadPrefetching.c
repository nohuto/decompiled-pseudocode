/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x140633190
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x140632BE0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x140632CA0 (PfSnPopulateReadList.c)
 *     PfpPrefetchSharedCleanup @ 0x14070BCDC (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x14070BF54 (PfpPrefetchSharedStart.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rcx
  char Queue; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Queue = (char)CurrentThread[1].Queue;
  LOBYTE(CurrentThread[1].Queue) = Queue ^ (Queue ^ (Prefetching << 6)) & 0x40;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (Queue & 0x40) != 0;
}

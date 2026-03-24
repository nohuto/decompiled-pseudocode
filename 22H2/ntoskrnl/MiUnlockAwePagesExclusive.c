/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x14054DEE0
 * Callers:
 *     MiDeleteAweInfoPages @ 0x1408D5EDC (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1408D6534 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6690 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402FAB20 (ExReleaseAutoExpandPushLockExclusive.c)
 */

char __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  ExReleaseAutoExpandPushLockExclusive(a1 + 56, 0LL);
  return KiLeaveGuardedRegionUnsafe(a2);
}

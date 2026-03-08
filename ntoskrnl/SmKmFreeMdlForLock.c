/*
 * XREFs of SmKmFreeMdlForLock @ 0x1405C90E0
 * Callers:
 *     SmFpCleanup @ 0x1403590B8 (SmFpCleanup.c)
 *     SmFpFree @ 0x14045DA58 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140359F14 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(__int64 a1, unsigned int *a2)
{
  SmAcquireReleaseCharges(a1, a2[10], 3, 1);
  ExFreePoolWithTag(a2, 0);
}

/*
 * XREFs of SmKmFreeMdlForLock @ 0x14032AEC8
 * Callers:
 *     SmFpFree @ 0x1402686A4 (SmFpFree.c)
 *     SmFpCleanup @ 0x14034F6F8 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14026C810 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}

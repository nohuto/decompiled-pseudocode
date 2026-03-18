/*
 * XREFs of SmKmFreeMdlForLock @ 0x14037DC94
 * Callers:
 *     SmFpCleanup @ 0x1402376C4 (SmFpCleanup.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}

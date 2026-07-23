/*
 * XREFs of SmKmFreeMdlForLock @ 0x140291088
 * Callers:
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     SmFpCleanup @ 0x14029FC64 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14028FD10 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}

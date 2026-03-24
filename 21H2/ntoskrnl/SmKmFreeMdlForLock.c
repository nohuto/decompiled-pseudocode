/*
 * XREFs of SmKmFreeMdlForLock @ 0x1402DFD38
 * Callers:
 *     SmFpFree @ 0x1402DA854 (SmFpFree.c)
 *     SmFpCleanup @ 0x14035AEC4 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1402DE9C0 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}

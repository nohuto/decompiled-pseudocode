/*
 * XREFs of SmKmFreeMdlForLock @ 0x1405CB590
 * Callers:
 *     SmFpCleanup @ 0x140343E28 (SmFpCleanup.c)
 *     SmFpFree @ 0x140465A48 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14034350C (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(__int64 a1, unsigned int *a2)
{
  SmAcquireReleaseCharges(a1, a2[10], 3, 1);
  ExFreePoolWithTag(a2, 0);
}

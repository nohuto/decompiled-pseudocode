/*
 * XREFs of VerifierFreeTrackedPool @ 0x1405A1BE0
 * Callers:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA020 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x1409D5298 (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}

/*
 * XREFs of VerifierFreeTrackedPool @ 0x1405A1CA0
 * Callers:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA0E0 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D54 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x1409D5288 (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}

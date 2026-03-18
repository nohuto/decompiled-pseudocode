/*
 * XREFs of VerifierFreeTrackedPool @ 0x1405FF880
 * Callers:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x140A90A7C (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}

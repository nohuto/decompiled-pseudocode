/*
 * XREFs of VerifierFreeTrackedPool @ 0x1405CD740
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14060CCF8 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x140ACE3FC (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}

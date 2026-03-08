/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x140ACF89C
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x1402D9240 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return 1LL;
}

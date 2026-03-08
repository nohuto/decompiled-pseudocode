/*
 * XREFs of VfCheckPagePriority @ 0x140AC07A0
 * Callers:
 *     VfCheckNxPagePriority @ 0x1405CBF50 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE0250 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC09DC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rbx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    v3 = a1;
    ViCiPreprocessOptions(
      byte_140C0DCA4,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2002uLL, a2, v3, 0LL, byte_140C0DCA4);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 288LL);
    _InterlockedIncrement(&dword_140C138C0);
  }
}

/*
 * XREFs of VfCheckPageProtection @ 0x140AC0848
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405CBF70 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140ADF820 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140ADFDC0 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE0120 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140AE0390 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140AE0640 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140AE0870 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140AE0900 (VerifierNtMapViewOfSection.c)
 *     VerifierZwCreateSection @ 0x140AE26C0 (VerifierZwCreateSection.c)
 *     VerifierZwMapViewOfSection @ 0x140AE2B70 (VerifierZwMapViewOfSection.c)
 *     VerifierZwProtectVirtualMemory @ 0x140AE2FF0 (VerifierZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC09DC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C0DCA0,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C0DCA0);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 284LL);
    _InterlockedIncrement(&dword_140C138BC);
  }
}

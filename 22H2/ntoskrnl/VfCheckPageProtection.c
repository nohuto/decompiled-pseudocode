/*
 * XREFs of VfCheckPageProtection @ 0x140AC4848
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405CE420 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140AE3820 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140AE3DC0 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE4120 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140AE4390 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140AE4640 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140AE4870 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140AE4900 (VerifierNtMapViewOfSection.c)
 *     VerifierZwCreateSection @ 0x140AE66C0 (VerifierZwCreateSection.c)
 *     VerifierZwMapViewOfSection @ 0x140AE6B70 (VerifierZwMapViewOfSection.c)
 *     VerifierZwProtectVirtualMemory @ 0x140AE6FF0 (VerifierZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC49DC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140ACCBDC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C0DD98,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C0DD98);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 284LL);
    _InterlockedIncrement(&dword_140C139FC);
  }
}

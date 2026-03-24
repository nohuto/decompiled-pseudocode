/*
 * XREFs of VfCheckPageProtection @ 0x1409C7CCC
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405A06E0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E6120 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x1409E6780 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E6AC0 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x1409E6D20 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x1409E6FD0 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x1409E73B0 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1409E7440 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1409E8390 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x1409E9120 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x1409E9D10 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1409EA980 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409C7E60 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1409D751C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C12E4C,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C12E4C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 276LL);
    _InterlockedIncrement(&dword_140C2A974);
  }
}

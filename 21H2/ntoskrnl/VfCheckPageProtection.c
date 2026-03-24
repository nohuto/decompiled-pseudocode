/*
 * XREFs of VfCheckPageProtection @ 0x1409C7CBC
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405A07A0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E6110 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x1409E6770 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E6AB0 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x1409E6D10 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x1409E6FC0 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x1409E73A0 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1409E7430 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1409E8380 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x1409E9110 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x1409E9D00 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1409EA970 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409C7E50 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1409D750C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C12E70,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C12E70);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 276LL);
    _InterlockedIncrement(&dword_140C2A8F4);
  }
}

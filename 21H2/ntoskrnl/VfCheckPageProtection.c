/*
 * XREFs of VfCheckPageProtection @ 0x140A82EB0
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405FE060 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140A9F6A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140A9FC40 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x140A9FFA0 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140AA0210 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140AA04C0 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140AA06F0 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140AA0780 (VerifierNtMapViewOfSection.c)
 *     VerifierZwCreateSection @ 0x140AA2770 (VerifierZwCreateSection.c)
 *     VerifierZwMapViewOfSection @ 0x140AA2C20 (VerifierZwMapViewOfSection.c)
 *     VerifierZwProtectVirtualMemory @ 0x140AA30A0 (VerifierZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140A83044 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C0D8E0,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C0D8E0);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 284LL);
    _InterlockedIncrement(&dword_140C2A05C);
  }
}

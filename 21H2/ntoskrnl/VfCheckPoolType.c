/*
 * XREFs of VfCheckPoolType @ 0x1409C7D64
 * Callers:
 *     VfCheckNxPoolType @ 0x1405A07C0 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x1409D48F0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x1409D49E0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x1409D4B10 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolEx @ 0x1409D4C50 (VerifierExAllocatePoolEx.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D4D00 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D4E70 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x1409D4FE0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D50B0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E11A0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E12F0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x1409E48C0 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409C7E50 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1409D750C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPoolType(int a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdi
  const char *v6; // rdx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v5 = a1;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    ViCiPreprocessOptions(byte_140C12E68, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(0xC4u, 0x2000uLL, a2, v5, v4, byte_140C12E68);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 272LL);
    _InterlockedIncrement(&dword_140C2A8F0);
  }
}

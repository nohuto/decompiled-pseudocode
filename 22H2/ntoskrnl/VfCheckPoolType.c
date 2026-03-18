/*
 * XREFs of VfCheckPoolType @ 0x140AC48F0
 * Callers:
 *     VfCheckNxPoolType @ 0x1405CE440 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePoolWithTag @ 0x140AC0FD0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePool @ 0x140AD18C0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140AD19E0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePoolEx @ 0x140AD1C40 (VerifierExAllocatePoolEx.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140AD1CD0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140AD1DA0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140AD1E80 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x140ADE1E0 (VerifierExAllocateCacheAwareRundownProtection.c)
 *     VerifierExInitializeLookasideListEx @ 0x140AE2E90 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x140AE2FA0 (VerifierExInitializeNPagedLookasideList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC49DC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140ACCBDC (ViTargetIncrementCounter.c)
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
    ViCiPreprocessOptions(byte_140C0DDA0, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(0xC4u, 0x2000uLL, a2, v5, v4, byte_140C0DDA0);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 280LL);
    _InterlockedIncrement(&dword_140C139F8);
  }
}

/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x1409E7410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409D82B0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 *     VfAllocPoolNotification @ 0x1409E0FB4 (VfAllocPoolNotification.c)
 *     ViMmValidateIrql @ 0x1409E8680 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdl(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  __int64 v7; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v7 = (unsigned int)MmVerifierData >> 17;
  LOBYTE(v7) = (MmVerifierData & 0x20000) != 0;
  ViMmValidateIrql(v7);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( (MmVerifierData & 0x4000000) != 0 && a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a2, a4, 0LL);
  v10 = ((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, ULONG_PTR))pXdvMmAllocatePagesForMdl)(a1, a2, a3, a4);
  v11 = v10;
  if ( v10 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 224LL, 0xE8u, *(unsigned int *)(v10 + 40));
  }
  VfAllocPoolNotification();
  return v11;
}

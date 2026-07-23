/*
 * XREFs of VerifierMmAllocateNodePagesForMdlEx @ 0x1409E7270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409D82B0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 *     VfAllocPoolNotification @ 0x1409E0FB4 (VfAllocPoolNotification.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E84E8 (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x1409E8680 (ViMmValidateIrql.c)
 */

struct _MDL *__fastcall VerifierMmAllocateNodePagesForMdlEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        int a6,
        int a7)
{
  struct _MDL *v12; // rax
  struct _MDL *v13; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  ViMmValidateIrql(0LL);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( (MmVerifierData & 0x4000000) != 0 && a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a2, a4, 0LL);
  v12 = (struct _MDL *)((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, ULONG_PTR, int, int, int))pXdvMmAllocateNodePagesForMdlEx)(
                         a1,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6,
                         a7);
  v13 = v12;
  if ( v12 )
  {
    VfFillAllocatePagesForMdl(v12);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 224LL, 0xE8u, v13->ByteCount);
  }
  VfAllocPoolNotification();
  return v13;
}

/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x140ADFC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetAddToCounter @ 0x140AC8994 (ViTargetAddToCounter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x140AE09B8 (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x140AE0B50 (ViMmValidateIrql.c)
 */

struct _MDL *__fastcall VerifierMmAllocatePagesForMdlEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        int a6)
{
  __int64 v9; // rcx
  struct _MDL *v12; // rax
  struct _MDL *v13; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v9 = (unsigned int)MmVerifierData >> 17;
  LOBYTE(v9) = (MmVerifierData & 0x20000) != 0;
  ViMmValidateIrql(v9);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( (MmVerifierData & 0x4000000) != 0 && a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a2, a4, 0LL);
  v12 = (struct _MDL *)((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, ULONG_PTR, int, int))pXdvMmAllocatePagesForMdlEx)(
                         a1,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6);
  v13 = v12;
  if ( v12 )
  {
    VfFillAllocatePagesForMdl(v12);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 232LL, 0xF0u, v13->ByteCount);
  }
  return v13;
}

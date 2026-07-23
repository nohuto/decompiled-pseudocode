/*
 * XREFs of VerifierMmProbeAndLockProcessPages @ 0x1409E6ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409D72C0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DC83C (VfFaultsInjectResourceFailure.c)
 */

char __fastcall VerifierMmProbeAndLockProcessPages(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, unsigned int a4)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  __int64 v11; // r8
  char result; // al
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x71uLL, CurrentIrql, BugCheckParameter2, a2);
  v9 = 2071;
  if ( (unsigned int)VfVerifyMode < 3 )
    v9 = 2067;
  v10 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v10 & (unsigned __int16)v9) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xB1uLL,
      BugCheckParameter2,
      *(__int16 *)(BugCheckParameter2 + 10),
      (unsigned __int16)(v10 & v9));
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    RtlRaiseStatus(-1073741663);
  LOBYTE(v11) = a3;
  result = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, _QWORD))pXdvMmProbeAndLockProcessPages)(
             BugCheckParameter2,
             a2,
             v11,
             a4);
  if ( (MmVerifierData & 0x1000) != 0 )
    return ViTargetAddToCounter(retaddr, 176LL, 0xB8u, *(unsigned int *)(BugCheckParameter2 + 40));
  return result;
}

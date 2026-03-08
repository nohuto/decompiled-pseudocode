/*
 * XREFs of VerifierMmProbeAndLockProcessPages @ 0x140AE0540
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetAddToCounter @ 0x140AC8994 (ViTargetAddToCounter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 */

void __fastcall VerifierMmProbeAndLockProcessPages(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, unsigned int a4)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  __int64 v11; // r8
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
  ((void (__fastcall *)(ULONG_PTR, __int64, __int64, _QWORD))pXdvMmProbeAndLockProcessPages)(
    BugCheckParameter2,
    a2,
    v11,
    a4);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, *(unsigned int *)(BugCheckParameter2 + 40));
}

void __fastcall VerifierMmProbeAndLockPages(ULONG_PTR BugCheckParameter2, char a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  __int64 v9; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x70uLL, CurrentIrql, BugCheckParameter2, a2);
  v7 = 2071;
  if ( (unsigned int)VfVerifyMode < 3 )
    v7 = 2067;
  v8 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v8 & (unsigned __int16)v7) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xB0uLL,
      BugCheckParameter2,
      *(__int16 *)(BugCheckParameter2 + 10),
      (unsigned __int16)(v8 & v7));
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    RtlRaiseStatus(-1073741663);
  LOBYTE(v9) = a2;
  ((void (__fastcall *)(ULONG_PTR, __int64, _QWORD))pXdvMmProbeAndLockPages)(BugCheckParameter2, v9, a3);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, *(unsigned int *)(BugCheckParameter2 + 40));
}

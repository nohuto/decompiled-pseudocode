__int64 __fastcall VerifierMmUnlockPages(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // r9
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x78uLL, CurrentIrql, BugCheckParameter2, 0LL);
  v5 = *(__int16 *)(BugCheckParameter2 + 10);
  if ( (v5 & 2) == 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7CuLL, BugCheckParameter2, v5, 0LL);
  if ( (unsigned int)VfVerifyMode >= 3 && (v5 & 4) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7DuLL, BugCheckParameter2, v5, 0LL);
  if ( (v5 & 0x10) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB4uLL, BugCheckParameter2, v5, 16LL);
  if ( (v5 & 1) != 0 && _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  v6 = -(__int64)*(unsigned int *)(BugCheckParameter2 + 40);
  if ( _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, v6);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned __int64))pXdvMmUnlockPages)(
           BugCheckParameter2,
           a2,
           a3,
           v6);
}

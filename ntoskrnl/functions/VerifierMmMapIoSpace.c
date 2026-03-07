__int64 __fastcall VerifierMmMapIoSpace(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)BugCheckParameter3, a2);
  if ( (MmVerifierData & 1) != 0 )
    MmCheckMapIoSpace(BugCheckParameter3, a2);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1
    || (VfRuleClasses & 0x40000) != 0 && ViFnAutoFailInject && (unsigned __int8)ViFnAutoFailInject("MmMapIoSpace") )
  {
    return 0LL;
  }
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v7 = 4;
    if ( a3 != 1 )
    {
      v7 = 516;
      if ( a3 == 2 )
        v7 = 1028;
    }
    v8 = MmMapIoSpaceEx(BugCheckParameter3, a2, v7);
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, _QWORD))pXdvMmMapIoSpace)(BugCheckParameter3, a2, a3);
  }
  v9 = v8;
  if ( v8 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 216LL, 0xE0u, a2);
  }
  return v9;
}

__int64 __fastcall PspCreateSilo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v3; // rdi
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned int v7; // esi
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  P = 0LL;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1520) )
  {
    result = PspAllocStorage(&P);
    if ( (int)result < 0 )
      return result;
    v3 = P;
  }
  PspLockJobExclusive(a1, (__int64)CurrentThread);
  if ( (unsigned __int8)PspJobHasChildren(a1) )
  {
    v7 = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 1536) & 0x40000000) != 0 )
  {
    v7 = -1073740536;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x402000) != 0 )
  {
    v6 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1520), (signed __int64)v3, 0LL) != 0);
    P = (PVOID)(v6 & (unsigned __int64)P);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1536), 0x40000000u);
    v3 = P;
    v7 = 0;
  }
  else
  {
    v7 = -1073741811;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v3 )
    PspFreeStorage(v3);
  return v7;
}

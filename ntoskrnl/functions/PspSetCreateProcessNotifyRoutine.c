__int64 __fastcall PspSetCreateProcessNotifyRoutine(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // esi
  int v5; // edx
  struct _EX_RUNDOWN_REF *v6; // rdi
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r15
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  volatile signed __int32 *v12; // rax

  v2 = a2;
  v3 = a2 & 2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9);
      v11 = v10;
      if ( v10 )
      {
        LODWORD(v2) = v2 & 0xFFFFFFFE;
        if ( v10[1].Count == a1
          && LODWORD(v10[2].Count) == (_DWORD)v2
          && ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, 0LL, (__int64)v10) )
        {
          v12 = &PspCreateProcessNotifyRoutineCount;
          if ( v3 )
            v12 = &PspCreateProcessNotifyRoutineExCount;
          _InterlockedDecrement(v12);
          ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, v11);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          ExWaitForRundownProtectionRelease(v11);
          ExFreePoolWithTag(v11, 0);
          return 0LL;
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, v11);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 0x40 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        return 3221225594LL;
      }
    }
  }
  if ( (a2 & 2) != 0 )
    v5 = 32;
  else
    v5 = 0;
  if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, v5) )
    return 3221225506LL;
  v6 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, v2);
  if ( !v6 )
    return 3221225626LL;
  v7 = 0LL;
  while ( !ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v7, v6, 0LL) )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x40 )
    {
      ExFreePoolWithTag(v6, 0);
      return 3221225485LL;
    }
  }
  if ( v3 )
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineExCount);
    if ( (PspNotifyEnableMask & 4) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 2u);
  }
  else
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 2) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 1u);
  }
  return 0LL;
}

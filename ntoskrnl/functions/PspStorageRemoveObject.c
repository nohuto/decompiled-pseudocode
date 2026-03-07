__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  volatile signed __int64 *v13; // rsi
  unsigned int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  v14 = 0;
  v15 = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v14, &v15);
  v7 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = v15 + 16LL * v14;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = *(_QWORD *)(v9 + 8);
    v11 = v14;
    v12 = v15;
    if ( v10 )
    {
      if ( a3 || (v10 & 1) == 0 )
      {
        v10 &= ~1uLL;
        *(_QWORD *)(v15 + 16LL * v14 + 8) = 0LL;
      }
      else
      {
        v10 = 0LL;
        v7 = -1073741637;
      }
    }
    v13 = (volatile signed __int64 *)(v12 + 16 * v11);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 16 * v11));
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v7 >= 0 )
    {
      if ( !v10 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v10;
      else
        ObfDereferenceObject((PVOID)v10);
    }
    return (unsigned int)v7;
  }
  return result;
}

__int64 __fastcall PspStorageReplaceObject(__int64 a1, unsigned int a2, void *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rbp
  void *v10; // rsi
  void *v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v12 = 0;
  v13[0] = 0LL;
  result = PspGetStorageArray(a1, a2, &v12, v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ObfReferenceObject(a3);
    CurrentThread = KeGetCurrentThread();
    v9 = v13[0] + 16LL * v12;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = *(void **)(v9 + 8);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      v10 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      *(_QWORD *)(v9 + 8) = a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease(v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( (v7 & 0x80000000) != 0 )
    {
      v11 = a3;
    }
    else
    {
      if ( !v10 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v10;
        return v7;
      }
      v11 = v10;
    }
    ObfDereferenceObject(v11);
    return v7;
  }
  return result;
}

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x511uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    if ( !(unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(a1)
      || *(_QWORD *)(v6 + 1256)
      || *(_DWORD *)(v7 + 524)
      || (*(_DWORD *)(v7 + 152) & 0x10000) != 0 )
    {
      return;
    }
    v8 = (volatile signed __int64 *)(v6 + 1280);
    ExAcquirePushLockExclusiveEx(v6 + 1280, 0LL);
    if ( (unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(a1)
      && !*(_QWORD *)(a1 + 1256)
      && !a3[131]
      && (a3[38] & 0x10000) == 0 )
    {
      *(_QWORD *)(a1 + 1256) = CurrentThread;
      *(_QWORD *)(a1 + 1264) = a3;
      *(_DWORD *)(a1 + 1276) = PsSetIoPriorityThread(CurrentThread, 0LL);
    }
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 1256) != CurrentThread )
      return;
    v8 = (volatile signed __int64 *)(a1 + 1280);
    ExAcquirePushLockExclusiveEx(a1 + 1280, 0LL);
    PsSetIoPriorityThread(CurrentThread, *(unsigned int *)(a1 + 1276));
    v9 = *(unsigned int *)(a1 + 1272);
    if ( (_DWORD)v9 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v9);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v9) = 1;
      PsBoostThreadIoEx(CurrentThread, v9, 0LL, 0LL);
      CcUpdateSharedCacheMapFlag(a3, 0x20000000LL, 0LL);
    }
    *(_QWORD *)(a1 + 1256) = 0LL;
    *(_QWORD *)(a1 + 1264) = 0LL;
    *(_DWORD *)(a1 + 1276) = 5;
    *(_DWORD *)(a1 + 1272) = 32;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
}

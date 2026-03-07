__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rsi
  int v4; // ebp

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 - 136);
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 - 136, 0LL);
  if ( (*(_DWORD *)(a1 - 152) & 8) == 0 )
  {
    v4 = SmRegistrationCtxStart((_QWORD *)(a1 + 560));
    if ( v4 >= 0 )
      *(_DWORD *)(a1 - 152) |= 8u;
  }
  if ( (*(_DWORD *)(a1 - 152) & 0xC) == 8 )
  {
    v4 = SmcCacheManagerStart(a1, *(_QWORD *)(a1 + 560));
    if ( v4 >= 0 )
      *(_DWORD *)(a1 - 152) |= 4u;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}

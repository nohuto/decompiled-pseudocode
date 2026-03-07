struct _EX_RUNDOWN_REF __fastcall SmcCacheRemove(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _EX_RUNDOWN_REF v5; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  --CurrentThread->KernelApcDisable;
  v5.Count = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[2], 0LL);
  if ( a2 >> 4 == (v4[3].Count & 0xFFF) && v4->Count )
  {
    ExWaitForRundownProtectionRelease(v4 + 1);
    v5.Count = v4->Count;
    v4->Count = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v4[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v4[2]);
  KeAbPostRelease((ULONG_PTR)&v4[2]);
  KeLeaveCriticalRegion();
  return v5;
}

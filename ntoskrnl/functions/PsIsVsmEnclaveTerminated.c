bool __fastcall PsIsVsmEnclaveTerminated(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rdi
  bool v4; // si

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  v4 = *(_DWORD *)(a1 + 44) == 2;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return v4;
}

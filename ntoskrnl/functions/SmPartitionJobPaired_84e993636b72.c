void __fastcall SmPartitionJobPaired(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(_QWORD *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2 + 1992, 0LL);
  *(_QWORD *)(v2 + 1944) = a2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 1992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 1992));
  KeAbPostRelease(v2 + 1992);
  KeLeaveCriticalRegion();
}

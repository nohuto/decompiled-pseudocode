/*
 * XREFs of SmPartitionJobPaired @ 0x1409D3EB4
 * Callers:
 *     PspSetJobMemoryPartition @ 0x1409AFC84 (PspSetJobMemoryPartition.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

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

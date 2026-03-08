/*
 * XREFs of SmcStoreSlotCommit @ 0x1409D8CB0
 * Callers:
 *     SmcStoreCreate @ 0x1409D8464 (SmcStoreCreate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void __fastcall SmcStoreSlotCommit(__int64 a1, __int64 a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v5; // r14

  CurrentThread = KeGetCurrentThread();
  v5 = (volatile signed __int64 *)(a1 + 160);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  *(_DWORD *)(a2 + 4) &= ~4u;
  *(_DWORD *)a2 = a3;
  _InterlockedExchange64((volatile __int64 *)(a2 + 16), 0LL);
  *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ a4) & 3;
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegion();
}

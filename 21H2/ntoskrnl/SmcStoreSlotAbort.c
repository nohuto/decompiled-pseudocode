/*
 * XREFs of SmcStoreSlotAbort @ 0x1409D8810
 * Callers:
 *     SmcStoreCreate @ 0x1409D8074 (SmcStoreCreate.c)
 *     SmcStoreSlotReserve @ 0x1409D894C (SmcStoreSlotReserve.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall SmcStoreSlotAbort(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _PRIVILEGE_SET *v6; // rbp

  v3 = (volatile signed __int64 *)(a1 + 160);
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
  }
  *(_DWORD *)(a2 + 4) &= ~4u;
  v6 = *(struct _PRIVILEGE_SET **)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  CmSiFreeMemory(v6);
}

/*
 * XREFs of VrpDecrementSiloCount @ 0x1407F8780
 * Callers:
 *     VrpJobContextDelete @ 0x1407F8750 (VrpJobContextDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 */

char VrpDecrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpActiveSilosLock, 0LL);
  if ( !--VrpNumActiveSilos )
    CmUnRegisterCallback(VrpCallbackCookie);
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock(&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

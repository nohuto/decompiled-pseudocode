/*
 * XREFs of KiStartSavingSupervisorState @ 0x140A9C620
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KiUpdateSavedSupervisorState @ 0x140A9C6A0 (KiUpdateSavedSupervisorState.c)
 */

__int64 KiStartSavingSupervisorState()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int updated; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiSupervisorXStateFeaturesLock, 0LL);
  updated = KiUpdateSavedSupervisorState();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock);
  KeAbPostRelease((ULONG_PTR)&KiSupervisorXStateFeaturesLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return updated;
}

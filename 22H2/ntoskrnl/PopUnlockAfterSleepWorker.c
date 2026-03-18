/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140AA6A10
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A320 (MmUnlockPagableImageSection.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F194 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopRunNormalIrpWorkers @ 0x140598C3C (PopRunNormalIrpWorkers.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     PopClearShutdownMarker @ 0x1409807D4 (PopClearShutdownMarker.c)
 *     PopClearSleepMarker @ 0x1409807E4 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140980828 (PopClearSystemShutdownMarker.c)
 *     PopClearTransitionCheckpoints @ 0x140980868 (PopClearTransitionCheckpoints.c)
 *     PopAdjustHiberFile @ 0x140987D94 (PopAdjustHiberFile.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1409885DC (PopClearHibernateDiagnosticInfo.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 *     PopClearSystemSleepCheckpoint @ 0x140996E2C (PopClearSystemSleepCheckpoint.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A11978 (CmSetLazyFlushState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA622C (PoDelistPowerStateTransitionBlocker.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  qword_140C3CFE8 = KeGetCurrentThread();
  if ( PopWaitingForTransitionLock
    && (int)PoPushPowerStateTransitionRecordWithCallback(
              KeGetCurrentThread()->ApcState.Process,
              qword_140C3CFE8,
              0LL,
              0LL) < 0 )
  {
    PopWaitingForTransitionLock = 0;
  }
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile(v0);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  qword_140C3CFE8 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker();
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  return PopReleaseTransitionLock(1);
}

/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140AA37E0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058CC64 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopRunNormalIrpWorkers @ 0x14059671C (PopRunNormalIrpWorkers.c)
 *     PopReleaseTransitionLock @ 0x14082AD60 (PopReleaseTransitionLock.c)
 *     PopClearShutdownMarker @ 0x14097D724 (PopClearShutdownMarker.c)
 *     PopClearSleepMarker @ 0x14097D734 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x14097D778 (PopClearSystemShutdownMarker.c)
 *     PopClearTransitionCheckpoints @ 0x14097D7B8 (PopClearTransitionCheckpoints.c)
 *     PopAdjustHiberFile @ 0x140984CE4 (PopAdjustHiberFile.c)
 *     PopClearHibernateDiagnosticInfo @ 0x14098552C (PopClearHibernateDiagnosticInfo.c)
 *     PopFreeHiberContext @ 0x1409855F0 (PopFreeHiberContext.c)
 *     PopClearSystemSleepCheckpoint @ 0x140993D7C (PopClearSystemSleepCheckpoint.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A0EC64 (CmSetLazyFlushState.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA2FFC (PoDelistPowerStateTransitionBlocker.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopUnlockAfterSleepLock);
  qword_140C3CF28 = KeGetCurrentThread();
  if ( PopWaitingForTransitionLock
    && (int)PoPushPowerStateTransitionRecordWithCallback(
              KeGetCurrentThread()->ApcState.Process,
              qword_140C3CF28,
              0LL,
              0LL) < 0 )
  {
    PopWaitingForTransitionLock = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopUnlockAfterSleepLock);
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
  qword_140C3CF28 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker();
  PopReleaseRwLock((ULONG_PTR)&PopUnlockAfterSleepLock);
  return PopReleaseTransitionLock(1);
}

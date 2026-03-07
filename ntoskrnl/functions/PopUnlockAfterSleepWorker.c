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

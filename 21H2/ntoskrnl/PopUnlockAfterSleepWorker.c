/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140A4E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x14038D3D0 (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1403B6BDC (RtlBootStatusDisableFlushing.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406EBBF0 (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406EBCAC (PopClearShutdownMarker.c)
 *     CmSetLazyFlushState @ 0x1407FFF4C (CmSetLazyFlushState.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 *     PopClearTransitionCheckpoints @ 0x140800204 (PopClearTransitionCheckpoints.c)
 *     PopClearSleepMarker @ 0x140800270 (PopClearSleepMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x1408002B4 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x1408002F8 (PopClearSystemShutdownMarker.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 *     PopAdjustHiberFile @ 0x140801014 (PopAdjustHiberFile.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  __int64 v0; // rcx

  qword_140C22980 = (__int64)KeGetCurrentThread();
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  PopCheckpointSystemSleep(41);
  RtlBootStatusDisableFlushing(0);
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
  qword_140C22980 = 0LL;
  return PopReleaseTransitionLock(1);
}

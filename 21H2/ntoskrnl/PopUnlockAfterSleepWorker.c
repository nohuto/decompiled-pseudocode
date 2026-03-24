/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140994FE0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1402B0640 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14031AA10 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x14038412C (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7A00 (RtlBootStatusDisableFlushing.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406C3F6C (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406C3FFC (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x140776BD4 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x140776FBC (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x140777220 (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x140777260 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x1407772A4 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1407772E8 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x140777354 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14077755C (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14078DAD4 (PopReleaseTransitionLock.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  __int64 v0; // rcx
  __int64 v1; // rcx

  qword_140C23600 = (__int64)KeGetCurrentThread();
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  RtlBootStatusDisableFlushing(0);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext(v0);
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile(v1);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock();
  qword_140C23600 = 0LL;
  return PopReleaseTransitionLock(1);
}

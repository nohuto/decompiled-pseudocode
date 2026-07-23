/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140990530
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14029B0A0 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x140307D90 (ExNotifyCallback.c)
 *     PopRunNormalIrpWorkers @ 0x1403821BC (PopRunNormalIrpWorkers.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7300 (RtlBootStatusDisableFlushing.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406A688C (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x1406A691C (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x140773C64 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x14077404C (PopFreeHiberContext.c)
 *     PopClearSystemShutdownMarker @ 0x1407742B0 (PopClearSystemShutdownMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x1407742F0 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x140774334 (PopClearSleepMarker.c)
 *     PopClearTransitionCheckpoints @ 0x140774378 (PopClearTransitionCheckpoints.c)
 *     ExSwapinWorkerThreads @ 0x1407743E4 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1407745EC (CmSetLazyFlushState.c)
 *     PopReleaseTransitionLock @ 0x14078D9D4 (PopReleaseTransitionLock.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  UNICODE_STRING *v0; // rcx
  __int64 v1; // rcx

  qword_140C23C00 = (__int64)KeGetCurrentThread();
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
  qword_140C23C00 = 0LL;
  return PopReleaseTransitionLock(1);
}

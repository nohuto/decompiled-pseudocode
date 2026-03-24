/*
 * XREFs of _tlgCreate1Sz_char @ 0x14034B7DC
 * Callers:
 *     MiAgeWorkingSet @ 0x140208B00 (MiAgeWorkingSet.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402F2A14 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x140317F80 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140318224 (MiLogTrimWs.c)
 *     EtwTelemetryCoverageReport @ 0x140321950 (EtwTelemetryCoverageReport.c)
 *     PopPlNotifyDeviceDState @ 0x14039FD9C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A4378 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14052B644 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14052B7C0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14052B8E0 (MiLogResetPagesCommitRelease.c)
 *     EtwpCoverageRecord @ 0x140698CA4 (EtwpCoverageRecord.c)
 *     PopLogPowerRequestAction @ 0x1406F51E0 (PopLogPowerRequestAction.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14077FDCC (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x14077FF24 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14077FFD0 (PopBatteryCheckCompositeCapacity.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C7744 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C801C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x1408CB7A8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBA90 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1408CC00C (MiLogHotPatchRundown.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408E82F4 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x1408EC984 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x140902B14 (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A54464 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, const CHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &Src;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}

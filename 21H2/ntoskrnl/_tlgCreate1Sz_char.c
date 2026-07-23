/*
 * XREFs of _tlgCreate1Sz_char @ 0x140270A0C
 * Callers:
 *     MmNotifyProcessInSwapTrigger @ 0x1402136B4 (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     MiLogWsEmptyControl @ 0x14029EC00 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14029EEA4 (MiLogTrimWs.c)
 *     MiAgeWorkingSet @ 0x1402AD440 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x1403A05EC (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A4BC8 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14052B944 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14052BAC0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14052BBE0 (MiLogResetPagesCommitRelease.c)
 *     EtwpCoverageRecord @ 0x1406151A4 (EtwpCoverageRecord.c)
 *     PopLogPowerRequestAction @ 0x14066FB30 (PopLogPowerRequestAction.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14078008C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x1407801E4 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140780290 (PopBatteryCheckCompositeCapacity.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C7854 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C812C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x1408CB8B8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBBA0 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1408E8404 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x1408ECA94 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A55464 (MiFlushStrongCodeDriverLoadFailures.c)
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

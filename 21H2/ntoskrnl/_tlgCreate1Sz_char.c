/*
 * XREFs of _tlgCreate1Sz_char @ 0x1403699D0
 * Callers:
 *     MmNotifyProcessInSwapTrigger @ 0x140211750 (MmNotifyProcessInSwapTrigger.c)
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     MiAgeWorkingSet @ 0x14030C870 (MiAgeWorkingSet.c)
 *     MiLogWsEmptyControl @ 0x140373DA0 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140374708 (MiLogTrimWs.c)
 *     PopPlNotifyDeviceDState @ 0x1403B171C (PopPlNotifyDeviceDState.c)
 *     KiTraceLogHeteroRundown @ 0x1403DB8D8 (KiTraceLogHeteroRundown.c)
 *     PopPlNotifyDeviceFState @ 0x14045EA32 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140580088 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1405801E4 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1405802D8 (MiLogResetPagesCommitRelease.c)
 *     CarEtwCrashEvent @ 0x140602478 (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x140602808 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140602AEC (CarEtwWriteLiveDumpEvent.c)
 *     EtwpCoverageRecord @ 0x1406D45B4 (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     PopBatteryCheckCompositeCapacity @ 0x1407EE6D0 (PopBatteryCheckCompositeCapacity.c)
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1407EEBA8 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x1407EEFE4 (PopAccountCbEnergyChange.c)
 *     PopDiagTraceExecutePowerAction @ 0x1407FF0A8 (PopDiagTraceExecutePowerAction.c)
 *     MiLogCreateImageFileMapFailure @ 0x14096BE44 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14096C6C4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x140974B60 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x140975748 (MiLogHotPatchRundown.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x1409910B0 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopAccountBatteryEnergyChange @ 0x140994398 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B084F4 (MiFlushStrongCodeDriverLoadFailures.c)
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

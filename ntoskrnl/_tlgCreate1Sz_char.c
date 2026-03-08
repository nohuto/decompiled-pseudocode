/*
 * XREFs of _tlgCreate1Sz_char @ 0x1403BE3FC
 * Callers:
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x1402B9D3C (PopPlNotifyDeviceDState.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402C0A08 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x1402EFC60 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x1402F0ADC (MiLogTrimWs.c)
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     KiTraceLogHeteroRundown @ 0x1403AB22C (KiTraceLogHeteroRundown.c)
 *     CarEtwCrashEvent @ 0x1405D03FC (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D078C (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D0A70 (CarEtwWriteLiveDumpEvent.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140615DEC (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140615F48 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14061603C (MiLogResetPagesCommitRelease.c)
 *     MiLogWsEmptyControl @ 0x140650470 (MiLogWsEmptyControl.c)
 *     EtwpCoverageRecord @ 0x14078E9DC (EtwpCoverageRecord.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14086E710 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckCompositeCapacity @ 0x14086E838 (PopBatteryCheckCompositeCapacity.c)
 *     PopAccountCbEnergyChange @ 0x14086E8D8 (PopAccountCbEnergyChange.c)
 *     NtCreateIoRing @ 0x140947140 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140989974 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098BC1C (PopDiagTraceExecutePowerAction.c)
 *     PopAccountBatteryEnergyChange @ 0x140991AC0 (PopAccountBatteryEnergyChange.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2C844 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A2D7CC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchOperation @ 0x140A35E3C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B72430 (MiFlushStrongCodeDriverLoadFailures.c)
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

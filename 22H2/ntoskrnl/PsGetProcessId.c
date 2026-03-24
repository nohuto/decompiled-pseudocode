/*
 * XREFs of PsGetProcessId @ 0x1403446B0
 * Callers:
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x14067D728 (PopEtAggregateKeyCopyFromProcess.c)
 *     WbDispatchOperation @ 0x1406C7BE4 (WbDispatchOperation.c)
 *     PsOpenProcess @ 0x1406D34F0 (PsOpenProcess.c)
 *     PopCreatePowerRequestObject @ 0x1406F5E38 (PopCreatePowerRequestObject.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406FAED4 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1406FB2BC (EtwTraceWorkingSetSwap.c)
 *     EtwpNotifyGuid @ 0x1407150A4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42F4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x1408CB310 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CB7A8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBA90 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBE38 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CC00C (MiLogHotPatchRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDE40 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1408FDFC0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409058D0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409059D0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093E17C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x14095D564 (WheaTerminateProcess.c)
 *     EtwTraceSystemTimeChange @ 0x140998CD8 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}

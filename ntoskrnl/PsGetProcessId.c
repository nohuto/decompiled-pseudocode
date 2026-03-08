/*
 * XREFs of PsGetProcessId @ 0x140236D10
 * Callers:
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14067E52C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     PsOpenProcess @ 0x1406ABCC0 (PsOpenProcess.c)
 *     WbDispatchOperation @ 0x1406AECD0 (WbDispatchOperation.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x14070336C (PopEtAggregateKeyCopyFromProcess.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     EtwTraceWorkingSetSwap @ 0x140765840 (EtwTraceWorkingSetSwap.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     TtmpCloseTerminalHandle @ 0x1409A8790 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1409A8910 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409A9450 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409A9550 (TtmpOpenQueueHandle.c)
 *     EtwpObjectHandleRundown @ 0x1409EC598 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140A053E0 (WheaTerminateProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140A28438 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140A359F8 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A35E3C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A368B0 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     EtwTraceSystemTimeChange @ 0x140AA7600 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}

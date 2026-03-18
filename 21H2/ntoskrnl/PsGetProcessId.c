/*
 * XREFs of PsGetProcessId @ 0x140361530
 * Callers:
 *     PopEtAggregateKeyCopyFromProcess @ 0x140674EA8 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406EBE78 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1406EC338 (EtwTraceWorkingSetSwap.c)
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x1407E2B70 (WbDispatchOperation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 *     MiForceCrashForInvalidAccess @ 0x140967E00 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x14097471C (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140974B60 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1409755D4 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140975748 (MiLogHotPatchRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1409A3930 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1409A3AB0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409AB560 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409AB660 (TtmpOpenQueueHandle.c)
 *     EtwpObjectHandleRundown @ 0x1409EA9A0 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140A08E84 (WheaTerminateProcess.c)
 *     EtwTraceSystemTimeChange @ 0x140A526FC (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}

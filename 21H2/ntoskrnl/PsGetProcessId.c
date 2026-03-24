/*
 * XREFs of PsGetProcessId @ 0x14027B6A0
 * Callers:
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 *     WbDispatchOperation @ 0x14064EE24 (WbDispatchOperation.c)
 *     PsOpenProcess @ 0x14065A730 (PsOpenProcess.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140699308 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwpNotifyGuid @ 0x1406E1804 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140710328 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x14071071C (EtwTraceWorkingSetSwap.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42A4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x1408CB2C0 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CB758 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBA40 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBDE8 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CBFBC (MiLogHotPatchRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDDF0 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1408FDF70 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140905880 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140905980 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093E12C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x14095D514 (WheaTerminateProcess.c)
 *     EtwTraceSystemTimeChange @ 0x140998CE8 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}

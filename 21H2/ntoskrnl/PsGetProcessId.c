/*
 * XREFs of PsGetProcessId @ 0x140269640
 * Callers:
 *     PopEtAggregateKeyCopyFromProcess @ 0x1405F7FF8 (PopEtAggregateKeyCopyFromProcess.c)
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 *     PsOpenProcess @ 0x14064F550 (PsOpenProcess.c)
 *     PopCreatePowerRequestObject @ 0x140670788 (PopCreatePowerRequestObject.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406BE978 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1406BED6C (EtwTraceWorkingSetSwap.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C4404 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x1408CB420 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CB8B8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBBA0 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBF48 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1408FDF50 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1408FE0D0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409059E0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140905AE0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093E2FC (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x14095D6F4 (WheaTerminateProcess.c)
 *     EtwTraceSystemTimeChange @ 0x140999CE8 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}

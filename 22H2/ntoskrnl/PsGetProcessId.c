/*
 * XREFs of PsGetProcessId @ 0x1402FA490
 * Callers:
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14068190C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PsOpenProcess @ 0x1406F3DB0 (PsOpenProcess.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140763928 (WbDispatchOperation.c)
 *     EtwpNotifyGuid @ 0x14077FEF8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1407B338C (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x1407B7758 (EtwTraceWorkingSetSwap.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860054 (EtwQueryPerformanceTraceInformation.c)
 *     TtmpCloseTerminalHandle @ 0x1409AB810 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1409AB990 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409AC4D0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409AC5D0 (TtmpOpenQueueHandle.c)
 *     EtwpObjectHandleRundown @ 0x1409EF428 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140A080D0 (WheaTerminateProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B198 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140A38728 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A38B6C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A38FC8 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A395AC (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     EtwTraceSystemTimeChange @ 0x140AAA830 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}

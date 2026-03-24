/*
 * XREFs of MmGetDefaultPagePriority @ 0x14026E790
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14062E400 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x140630F78 (PfSnCheckActionsNeeded.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406A1A34 (PspApplyIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     PfpLogEventRequest @ 0x1407770EC (PfpLogEventRequest.c)
 *     PfTAccessTracingStart @ 0x140990448 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099A9EC (PfTAccessTracingCleanup.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}

/*
 * XREFs of MmGetDefaultPagePriority @ 0x14035B470
 * Callers:
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PfSnAsyncPrefetchWorker @ 0x1407E3C20 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x1407E3F78 (PfSnCheckActionsNeeded.c)
 *     PfpLogEventRequest @ 0x14097ADD8 (PfpLogEventRequest.c)
 *     PspApplyIFEOPerfOptions @ 0x1409ADCE8 (PspApplyIFEOPerfOptions.c)
 *     PfTAccessTracingCleanup @ 0x140A844E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A858C4 (PfTAccessTracingStart.c)
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}

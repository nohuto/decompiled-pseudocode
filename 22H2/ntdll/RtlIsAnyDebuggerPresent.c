/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800FF230
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D8000 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800ED6C0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF2FC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100800 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x18010AE68 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsAnyDebuggerPresent(void)
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}

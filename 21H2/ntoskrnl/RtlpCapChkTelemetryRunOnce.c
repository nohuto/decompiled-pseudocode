/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x140662030
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C03098);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}

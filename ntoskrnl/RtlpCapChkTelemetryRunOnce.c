/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x140861A30
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall RtlpCapChkTelemetryRunOnce(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04270, 0LL, 0LL);
  KeQueryPerformanceCounter(&RtlpPerformanceCounterFrequency);
  return 1LL;
}

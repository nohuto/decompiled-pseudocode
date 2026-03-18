/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140A48D7C
 * Callers:
 *     PopDiagTraceHiberStats @ 0x1407FDC18 (PopDiagTraceHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010);
}

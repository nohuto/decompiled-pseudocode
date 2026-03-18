/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140AAA810
 * Callers:
 *     PopDiagTraceHiberStats @ 0x14098F8D8 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39450);
}

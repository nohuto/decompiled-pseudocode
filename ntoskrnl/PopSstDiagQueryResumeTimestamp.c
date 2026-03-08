/*
 * XREFs of PopSstDiagQueryResumeTimestamp @ 0x140AA75E0
 * Callers:
 *     PopDiagTraceHiberStats @ 0x14098C828 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39050);
}

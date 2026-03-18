/*
 * XREFs of EngQueryPerformanceCounter @ 0x1C016A370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngQueryPerformanceCounter(LONGLONG *pPerformanceCount)
{
  *(LARGE_INTEGER *)pPerformanceCount = KeQueryPerformanceCounter(0LL);
}

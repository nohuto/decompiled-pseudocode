/*
 * XREFs of ExQueryPoolUsage @ 0x14029971C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14071F960 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     ExHeapQueryPoolUsage @ 0x140299760 (ExHeapQueryPoolUsage.c)
 */

__int64 __fastcall ExQueryPoolUsage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  return ExHeapQueryPoolUsage(a1, a2, a3, a4, a5, a6, a7, a8);
}

/*
 * XREFs of KiComputeDispatchInterruptCostDpcRoutine @ 0x1403AAF40
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall KiComputeDispatchInterruptCostDpcRoutine(__int64 a1, __int64 a2)
{
  *(LARGE_INTEGER *)(a2 + 72) = KeQueryPerformanceCounter(0LL);
  return KeSetEvent((PRKEVENT)(a2 + 80), 0, 0);
}

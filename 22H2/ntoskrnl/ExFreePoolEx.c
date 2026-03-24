/*
 * XREFs of ExFreePoolEx @ 0x140316F40
 * Callers:
 *     PopFreeWakeSource @ 0x1408E6AE8 (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}

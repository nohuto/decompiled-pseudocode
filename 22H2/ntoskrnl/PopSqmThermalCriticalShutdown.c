/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1408F9DA0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C4D58 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1408F9BC8 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}

/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x14099DE38
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x14099DC68 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}

/*
 * XREFs of PopSqmThermalHibernate @ 0x14099DE5C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x14099DC68 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}

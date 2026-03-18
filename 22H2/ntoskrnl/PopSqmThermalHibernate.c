/*
 * XREFs of PopSqmThermalHibernate @ 0x1409A0EEC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1409A0CF8 (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}

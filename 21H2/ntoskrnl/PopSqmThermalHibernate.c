/*
 * XREFs of PopSqmThermalHibernate @ 0x1409A0430
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403D33C4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1409A023C (PopSqmThermalCriticalEvent.c)
 */

void *__fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}

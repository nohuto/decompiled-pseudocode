/*
 * XREFs of WheaIsCriticalState @ 0x1403811C0
 * Callers:
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     WheaReportHwError @ 0x1406106A0 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x140613338 (WheapGenerateETWEvents.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 */

bool WheaIsCriticalState()
{
  return ObGetCurrentIrql() >= 2u && WheapCriticalStateRefCount > 0;
}

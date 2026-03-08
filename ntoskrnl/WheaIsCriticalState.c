/*
 * XREFs of WheaIsCriticalState @ 0x14037D730
 * Callers:
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x140610F18 (WheapGenerateETWEvents.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 */

bool WheaIsCriticalState()
{
  return ObGetCurrentIrql() >= 2u && WheapCriticalStateRefCount > 0;
}

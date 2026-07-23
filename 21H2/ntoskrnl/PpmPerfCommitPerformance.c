/*
 * XREFs of PpmPerfCommitPerformance @ 0x14039AFE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14022D9EC (PpmPerfControlExecuteAction.c)
 */

bool PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction((void (__fastcall *)(__int64 (__fastcall *)()))PpmPerfControlCommitPerformance);
}

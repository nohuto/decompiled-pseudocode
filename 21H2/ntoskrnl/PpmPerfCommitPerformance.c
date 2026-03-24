/*
 * XREFs of PpmPerfCommitPerformance @ 0x14039AE90
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1402AF68C (PpmPerfControlExecuteAction.c)
 */

bool PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction((void (__fastcall *)(__int64 (__fastcall *)()))PpmPerfControlCommitPerformance);
}

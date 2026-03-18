/*
 * XREFs of PpmPerfCommitPerformance @ 0x140355E80
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x140355EBC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance);
}

/*
 * XREFs of PpmPerfCommitPerformance @ 0x1402EA390
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1402EA3CC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance);
}

/*
 * XREFs of PpmPerfReadFeedback @ 0x1402EA3B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1402EA3CC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}

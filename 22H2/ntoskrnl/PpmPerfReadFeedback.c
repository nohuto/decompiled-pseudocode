/*
 * XREFs of PpmPerfReadFeedback @ 0x140355EA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x140355EBC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}

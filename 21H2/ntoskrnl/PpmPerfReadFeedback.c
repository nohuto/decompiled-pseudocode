/*
 * XREFs of PpmPerfReadFeedback @ 0x14023A0A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14023A0BC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}

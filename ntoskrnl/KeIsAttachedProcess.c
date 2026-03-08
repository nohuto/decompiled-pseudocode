/*
 * XREFs of KeIsAttachedProcess @ 0x140352D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}

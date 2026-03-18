/*
 * XREFs of KeIsAttachedProcess @ 0x1402BF6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}

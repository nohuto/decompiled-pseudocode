/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1402E3BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}

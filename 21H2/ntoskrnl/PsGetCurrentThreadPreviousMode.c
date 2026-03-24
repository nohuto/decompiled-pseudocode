/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1402AF9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}

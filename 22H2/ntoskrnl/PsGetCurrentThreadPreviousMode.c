/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1403070F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}

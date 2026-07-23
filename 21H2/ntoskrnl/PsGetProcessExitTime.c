/*
 * XREFs of PsGetProcessExitTime @ 0x140614000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PsGetProcessExitTime(void)
{
  return (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process[1].EndPadding[2];
}

/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x1402F0260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x4000) != 0;
}

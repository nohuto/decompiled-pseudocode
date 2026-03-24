/*
 * XREFs of _PostQuitMessage @ 0x1C000AD40
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C000AD64 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(unsigned int a1)
{
  return IPostQuitMessage(gptiCurrent, a1);
}

/*
 * XREFs of IopExceptionFilterMode @ 0x140500724
 * Callers:
 *     IopQueryNameInternal @ 0x140620924 (IopQueryNameInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IopExceptionFilterMode(char a1)
{
  return a1 != 0;
}

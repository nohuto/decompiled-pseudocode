/*
 * XREFs of EditionIsHotKey @ 0x1C01C1530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C00989D0 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 */

_BOOL8 __fastcall EditionIsHotKey(int a1, unsigned int a2)
{
  return IsHotKey(a1, a2) != 0LL;
}

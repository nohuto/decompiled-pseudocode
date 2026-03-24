/*
 * XREFs of EditionIsHotKey @ 0x1C01EA9B0
 * Callers:
 *     <none>
 * Callees:
 *     IsHotKey @ 0x1C0105528 (IsHotKey.c)
 */

_BOOL8 __fastcall EditionIsHotKey(int a1, int a2)
{
  return IsHotKey(a1, a2) != 0LL;
}

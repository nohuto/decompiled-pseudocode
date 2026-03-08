/*
 * XREFs of GreDeleteDC @ 0x1C00C4700
 * Callers:
 *     <none>
 * Callees:
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return GrepDeleteDC(a1, 0x400000u);
}

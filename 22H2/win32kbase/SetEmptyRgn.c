/*
 * XREFs of SetEmptyRgn @ 0x1C008A4F0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}

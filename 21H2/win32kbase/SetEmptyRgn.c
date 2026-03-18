/*
 * XREFs of SetEmptyRgn @ 0x1C008E960
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}

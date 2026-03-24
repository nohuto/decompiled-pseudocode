/*
 * XREFs of SetEmptyRgn @ 0x1C007FBC0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C007FC00 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}

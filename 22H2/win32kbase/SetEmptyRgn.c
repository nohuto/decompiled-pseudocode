/*
 * XREFs of SetEmptyRgn @ 0x1C0080E50
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0080E90 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}

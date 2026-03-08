/*
 * XREFs of SetEmptyRgn @ 0x1C003E1E0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0041FD0 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0);
}

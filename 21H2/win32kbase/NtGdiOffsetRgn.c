/*
 * XREFs of NtGdiOffsetRgn @ 0x1C00BE3D0
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  return GreOffsetRgn(a1, a2, a3);
}

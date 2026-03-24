/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C015D86C
 * Callers:
 *     NtGdiEngCreateBitmap @ 0x1C015D510 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C015D7F0 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1C02B2B10 (NtGdiEngCreateDeviceBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidUmpdSizl(struct tagSIZE a1, char a2)
{
  return a1.cx > 0 && a1.cy > 0 && (!a2 || (unsigned __int64)(a1.cx * (__int64)a1.cy) <= 0xFFFFFFFF);
}

/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C02C9DE0
 * Callers:
 *     NtGdiEngCreateBitmap @ 0x1C02CB8F0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1C02CBB70 (NtGdiEngCreateDeviceBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C02CBBC0 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidUmpdSizl(struct tagSIZE a1, char a2)
{
  return a1.cx > 0 && a1.cy > 0 && (!a2 || (unsigned __int64)(a1.cx * (__int64)a1.cy) <= 0xFFFFFFFF);
}

/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x1C02C5CC0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C00FA6A8 (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}

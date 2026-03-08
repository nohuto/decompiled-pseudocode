/*
 * XREFs of NtGdiSetSystemPaletteUse @ 0x1C02C7700
 * Callers:
 *     <none>
 * Callees:
 *     GreSetSystemPaletteUse @ 0x1C02D3F08 (GreSetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiSetSystemPaletteUse(HDC a1)
{
  return GreSetSystemPaletteUse(a1);
}

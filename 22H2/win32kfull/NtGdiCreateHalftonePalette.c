/*
 * XREFs of NtGdiCreateHalftonePalette @ 0x1C00B0F40
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleHalftonePalette @ 0x1C00B0F58 (GreCreateCompatibleHalftonePalette.c)
 */

__int64 __fastcall NtGdiCreateHalftonePalette(__int64 a1)
{
  return GreCreateCompatibleHalftonePalette(a1, 0LL);
}

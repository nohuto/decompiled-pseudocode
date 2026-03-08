/*
 * XREFs of NtGdiCreateCompatibleBitmap @ 0x1C00D3CF0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 */

__int64 __fastcall NtGdiCreateCompatibleBitmap(__int64 a1, int a2, int a3)
{
  return GreCreateCompatibleBitmapInternal(a1, a2, a3 & 0xF0FFFFFF, 0, 0LL, 0LL);
}

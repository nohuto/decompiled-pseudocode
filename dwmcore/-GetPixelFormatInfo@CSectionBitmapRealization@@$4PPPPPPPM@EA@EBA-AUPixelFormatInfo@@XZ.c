/*
 * XREFs of ?GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@EA@EBA?AUPixelFormatInfo@@XZ @ 0x18011DED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CSectionBitmapRealization::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 64, a2);
}

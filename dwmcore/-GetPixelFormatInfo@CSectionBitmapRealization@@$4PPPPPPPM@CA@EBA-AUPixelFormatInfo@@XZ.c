/*
 * XREFs of ?GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x18011DA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CSectionBitmapRealization::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 32, a2);
}

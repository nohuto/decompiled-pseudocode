/*
 * XREFs of ?GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}

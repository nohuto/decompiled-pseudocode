/*
 * XREFs of ?GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@FI@EBA?AUPixelFormatInfo@@XZ @ 0x18011F570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 88, a2);
}

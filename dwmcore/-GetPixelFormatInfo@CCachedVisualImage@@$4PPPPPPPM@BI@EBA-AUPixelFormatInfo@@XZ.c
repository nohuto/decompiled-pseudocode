/*
 * XREFs of ?GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@BI@EBA?AUPixelFormatInfo@@XZ @ 0x180118410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CCachedVisualImage::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CCachedVisualImage::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 24, a2);
}

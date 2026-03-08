/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA?AUPixelFormatInfo@@XZ @ 0x18011E910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CDxHandleBitmapRealization::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 48, a2);
}

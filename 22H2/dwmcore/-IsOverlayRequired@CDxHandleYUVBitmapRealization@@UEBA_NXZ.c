/*
 * XREFs of ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180136382
 * Callers:
 *     ?IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x180123280 (-IsOverlayRequired@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayRequired(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 68) & 0x80) != 0;
}

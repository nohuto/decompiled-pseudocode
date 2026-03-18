/*
 * XREFs of ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x18013636E
 * Callers:
 *     ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x180123260 (-IsOverlayCompatible@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsOverlayCompatible(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 68) & 0x40) != 0;
}

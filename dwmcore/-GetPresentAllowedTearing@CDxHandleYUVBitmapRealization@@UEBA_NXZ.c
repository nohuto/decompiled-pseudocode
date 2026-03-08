/*
 * XREFs of ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802B0C44
 * Callers:
 *     ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011EEF0 (-GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetPresentAllowedTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 68) & 0x1000) != 0;
}

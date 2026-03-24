/*
 * XREFs of ?GetSurfaceLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1800E38EC
 * Callers:
 *     ?GetSurfaceLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F8A50 (-GetSurfaceLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleYUVBitmapRealization::GetSurfaceLuid(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 396);
  return (struct _LUID)a2;
}

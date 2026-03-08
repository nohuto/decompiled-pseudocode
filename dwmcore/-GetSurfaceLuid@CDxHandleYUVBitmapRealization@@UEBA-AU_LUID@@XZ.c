/*
 * XREFs of ?GetSurfaceLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1801082BC
 * Callers:
 *     ?GetSurfaceLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011F010 (-GetSurfaceLuid@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleYUVBitmapRealization::GetSurfaceLuid(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 420);
  return (struct _LUID)a2;
}

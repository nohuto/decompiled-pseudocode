/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011EDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return CDxHandleYUVBitmapRealization::GetD2DBitmap(
           (CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3,
           a4);
}

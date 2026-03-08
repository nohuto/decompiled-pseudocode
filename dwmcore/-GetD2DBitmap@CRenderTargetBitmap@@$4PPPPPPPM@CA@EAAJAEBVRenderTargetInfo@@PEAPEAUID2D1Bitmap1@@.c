/*
 * XREFs of ?GetD2DBitmap@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011FB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CRenderTargetBitmap::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32), a2, a3, a4);
}

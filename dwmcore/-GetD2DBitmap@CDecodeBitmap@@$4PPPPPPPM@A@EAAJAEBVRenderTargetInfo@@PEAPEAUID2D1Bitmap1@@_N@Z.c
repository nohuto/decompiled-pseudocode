/*
 * XREFs of ?GetD2DBitmap@CDecodeBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18011F2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDecodeBitmap::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return CDecodeBitmap::GetD2DBitmap((CDecodeBitmap *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}

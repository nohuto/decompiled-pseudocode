/*
 * XREFs of ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x180031030
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180030F00 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180032D40 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 */

void __fastcall CBackdropVisualImage::OnCachedTargetInvalidated(
        CBackdropVisualImage *this,
        const struct CCachedVisualImage::CCachedTarget *a2)
{
  const struct RenderTargetInfo *RenderTargetInfo; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  RenderTargetInfo = (const struct RenderTargetInfo *)CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(a2, v4);
  CBackdropVisualImage::InvalidateBlurCache(this, RenderTargetInfo);
}

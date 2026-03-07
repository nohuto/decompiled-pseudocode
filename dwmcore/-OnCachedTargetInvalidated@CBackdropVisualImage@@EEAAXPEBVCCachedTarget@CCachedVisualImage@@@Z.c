void __fastcall CBackdropVisualImage::OnCachedTargetInvalidated(
        CBackdropVisualImage *this,
        const struct CCachedVisualImage::CCachedTarget *a2)
{
  const struct RenderTargetInfo *RenderTargetInfo; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  RenderTargetInfo = (const struct RenderTargetInfo *)CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(a2, v4);
  CBackdropVisualImage::InvalidateBlurCache(this, RenderTargetInfo);
}

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  return CRenderTargetBitmap::GetDeviceTexture((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32), a2, a3, a4);
}

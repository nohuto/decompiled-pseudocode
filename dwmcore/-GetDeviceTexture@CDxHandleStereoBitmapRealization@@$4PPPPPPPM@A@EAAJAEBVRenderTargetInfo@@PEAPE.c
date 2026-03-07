int __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CDxHandleStereoBitmapRealization::GetDeviceTexture(
           (CDxHandleStereoBitmapRealization *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3);
}

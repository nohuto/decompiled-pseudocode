/*
 * XREFs of ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011E8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
           (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3);
}

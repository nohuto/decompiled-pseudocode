/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011EB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

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

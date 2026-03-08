/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011E190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CDxHandleBitmapRealization::GetDeviceTexture(
           (CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 32),
           a2,
           a3);
}

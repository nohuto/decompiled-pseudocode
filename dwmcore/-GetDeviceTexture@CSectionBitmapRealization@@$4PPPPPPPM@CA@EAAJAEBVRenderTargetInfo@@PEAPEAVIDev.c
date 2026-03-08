/*
 * XREFs of ?GetDeviceTexture@CSectionBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011D9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CSectionBitmapRealization::GetDeviceTexture((CSectionBitmapRealization *)(a1 - *(int *)(a1 - 4) - 32), a2, a3);
}

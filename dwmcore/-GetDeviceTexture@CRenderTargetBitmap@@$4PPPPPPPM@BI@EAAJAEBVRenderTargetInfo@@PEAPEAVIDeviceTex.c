/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011F7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  return CRenderTargetBitmap::GetDeviceTexture((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 24), a2, a3, a4);
}

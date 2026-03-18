/*
 * XREFs of ?GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapRealization::GetDeviceTexture(
        CWICBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CD2DBitmapCache::GetCachedTexture((CWICBitmapRealization *)((char *)this - 80), a2, a3);
}

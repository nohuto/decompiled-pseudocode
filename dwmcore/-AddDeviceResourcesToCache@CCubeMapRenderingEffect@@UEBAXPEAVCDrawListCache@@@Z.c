/*
 * XREFs of ?AddDeviceResourcesToCache@CCubeMapRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x1802B4F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCubeMapRenderingEffect::AddDeviceResourcesToCache(
        CCubeMapRenderingEffect *this,
        struct CDrawListCache *a2)
{
  CDrawListBitmap::AddDeviceResourceToCache((CCubeMapRenderingEffect *)((char *)this + 16), a2);
}

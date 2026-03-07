void __fastcall CCubeMapRenderingEffect::AddDeviceResourcesToCache(
        CCubeMapRenderingEffect *this,
        struct CDrawListCache *a2)
{
  CDrawListBitmap::AddDeviceResourceToCache((CCubeMapRenderingEffect *)((char *)this + 16), a2);
}

void __fastcall CDrawListCache::NotifyInvalidResource(CDrawListCache *this, const struct IDeviceResource *a2)
{
  CDrawListCache::Invalidate((CDrawListCache *)((char *)this - 16));
}

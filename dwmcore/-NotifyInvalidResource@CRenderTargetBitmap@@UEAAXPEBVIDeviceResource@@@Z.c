void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  const struct IDeviceResource *v2; // rsi
  CRenderTargetBitmap *v3; // rdi

  v2 = 0LL;
  v3 = (CRenderTargetBitmap *)((char *)this - 160);
  if ( *((_BYTE *)this - 16) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 160), a2) )
  {
    (*(void (__fastcall **)(CRenderTargetBitmap *, const struct IDeviceResource *))(*(_QWORD *)v3 + 8LL))(v3, a2);
    if ( v3 )
      v2 = (CRenderTargetBitmap *)((char *)this + *(int *)(*((_QWORD *)this - 18) + 12LL) - 144);
    CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this - 80), v2);
    CRenderTargetBitmap::ReleaseDeviceTarget(v3);
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v3 + 16LL))(v3);
  }
}

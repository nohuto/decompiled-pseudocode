void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(
        CCompositionSurfaceBitmap *this,
        const struct IDeviceResource *a2)
{
  CResource::NotifyOnChanged((__int64)this - 88, 5u, 0LL);
}

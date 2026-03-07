void __fastcall CWindowBackgroundTreatment::NotifyInvalidResource(
        CWindowBackgroundTreatment *this,
        const struct IDeviceResource *a2)
{
  CWindowBackgroundTreatment *v2; // rbx

  v2 = (CWindowBackgroundTreatment *)((char *)this - 64);
  CWindowBackgroundTreatment::InvalidateBitmapRealization((__int64)this - 64);
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(v2);
}

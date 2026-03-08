/*
 * XREFs of ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x180216E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800A4D24 (-InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ.c)
 */

void __fastcall CWindowBackgroundTreatment::NotifyInvalidResource(
        CWindowBackgroundTreatment *this,
        const struct IDeviceResource *a2)
{
  CWindowBackgroundTreatment *v2; // rbx

  v2 = (CWindowBackgroundTreatment *)((char *)this - 64);
  CWindowBackgroundTreatment::InvalidateBitmapRealization((__int64)this - 64);
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(v2);
}

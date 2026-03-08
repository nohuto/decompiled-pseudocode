/*
 * XREFs of ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800A4CE4
 * Callers:
 *     ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x1800A48A4 (--1CWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x180216E20 (-NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001EC20 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(CWindowBackgroundTreatment *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  __int64 v3; // rbx

  v1 = (__int64 *)*((_QWORD *)this + 42);
  for ( i = (__int64 *)*((_QWORD *)this + 41); i != v1; ++i )
  {
    v3 = *i;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(*i + 24));
    *(_BYTE *)(v3 + 140) = 1;
  }
}

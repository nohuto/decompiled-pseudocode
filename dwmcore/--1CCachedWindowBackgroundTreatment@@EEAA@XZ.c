/*
 * XREFs of ??1CCachedWindowBackgroundTreatment@@EEAA@XZ @ 0x18000A45C
 * Callers:
 *     ??_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x18000A420 (--_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTreatment@@@Z @ 0x18000BA6C (-RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTrea.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001EC20 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(
        CCachedWindowBackgroundTreatment *this)
{
  CWindowBackgroundTreatment *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CCachedWindowBackgroundTreatment::`vftable';
  v2 = (CWindowBackgroundTreatment *)*((_QWORD *)this + 2);
  if ( v2 )
    CWindowBackgroundTreatment::RemoveDependentCachedTreatment(v2, this);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((char *)this + 24);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}

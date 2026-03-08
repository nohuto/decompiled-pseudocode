/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800BA1D0
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800BA120 (--_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1802574C0 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x1800BA170 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800BA294 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  CCompositionSurfaceInfo *v2; // rcx

  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( *((_QWORD *)this + 4) )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  if ( (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3 )
    detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 64,
      0LL);
  v2 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 == (CCompositionSurfaceInfo *)((char *)this + 88) )
    v2 = 0LL;
  operator delete(v2);
}

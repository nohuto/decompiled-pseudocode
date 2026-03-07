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

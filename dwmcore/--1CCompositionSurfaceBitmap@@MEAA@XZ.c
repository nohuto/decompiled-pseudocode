void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  struct ICompositionSurfaceInfoListener *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  CCompositionSurfaceInfo *v5; // rcx

  v2 = (CCompositionSurfaceBitmap *)((char *)this + 88);
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 12) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CCompositionSurfaceBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CCompositionSurfaceBitmap::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 144;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 160;
  v5 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 13);
  if ( v5 )
    CCompositionSurfaceInfo::UnRegisterBitmapNotifier(v5, v2);
  FastRegion::CRegion::FreeMemory((CCompositionSurfaceBitmap *)((char *)this + 120));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  CResource::~CResource(this);
}

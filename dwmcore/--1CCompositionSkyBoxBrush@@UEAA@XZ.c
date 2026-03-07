void __fastcall CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(CCompositionSkyBoxBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct CResource *v4; // rdx
  struct CResource *v5; // rdx

  *(_QWORD *)this = &CCompositionSkyBoxBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CCompositionSkyBoxBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CCompositionSkyBoxBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 72;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 88;
  v4 = (struct CResource *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 11) = 0LL;
  }
  v5 = (struct CResource *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    CResource::UnRegisterNotifierInternal(this, v5);
    *((_QWORD *)this + 12) = 0LL;
  }
  CBrush::~CBrush(this);
}

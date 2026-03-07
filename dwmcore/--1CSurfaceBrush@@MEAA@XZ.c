void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CSurfaceBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CEffectBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSurfaceBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 120;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                         - 136;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  CBrush::~CBrush(this);
}

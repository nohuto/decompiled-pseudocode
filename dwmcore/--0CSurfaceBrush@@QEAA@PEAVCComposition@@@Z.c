CSurfaceBrush *__fastcall CSurfaceBrush::CSurfaceBrush(CSurfaceBrush *this, struct CComposition *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  const struct CResource *v6; // rcx

  *((_QWORD *)this + 8) = &CSurfaceBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 26) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 25) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 26) + 4LL) + 208) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &CSurfaceBrush::`vftable';
  v3 = *((_QWORD *)this + 8);
  *((_BYTE *)this + 80) = 0;
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 64) = &CEffectBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSurfaceBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 120;
  v5 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v5 + 60) = v5 - 136;
  v6 = (const struct CResource *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 22) = 1056964608;
  *((_DWORD *)this + 23) = 1056964608;
  *((_DWORD *)this + 24) = 2;
  *((_DWORD *)this + 25) = 1;
  *((_QWORD *)this + 14) = CSurfaceBrush::FindCommonRenderStrategy(v6);
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 35) = 1065353216;
  return this;
}

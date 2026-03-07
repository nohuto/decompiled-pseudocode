CSpriteVectorShape *__fastcall CSpriteVectorShape::CSpriteVectorShape(
        CSpriteVectorShape *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 8) = &CSpriteVectorShape::`vbtable'{for `CContent'};
  *((_QWORD *)this + 31) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 30) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 31) + 4LL) + 248) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CVectorShape::CVectorShape(this, a2);
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)v2 = &CSpriteVectorShape::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CSpriteVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CSpriteVectorShape::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 160;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v5 + v2 + 60) = v5 - 176;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_DWORD *)(v2 + 204) = 1065353216;
  *(_DWORD *)(v2 + 208) = 1065353216;
  return (CSpriteVectorShape *)v2;
}

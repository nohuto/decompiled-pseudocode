CYCbCrSurface *__fastcall CYCbCrSurface::CYCbCrSurface(CYCbCrSurface *this, struct CComposition *a2)
{
  CYCbCrSurface *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CYCbCrSurface *result; // rax

  *((_QWORD *)this + 8) = &CYCbCrSurface::`vbtable'{for `CContent'};
  *((_QWORD *)this + 17) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 16) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 17) + 4LL) + 136) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *((_QWORD *)v2 + 8);
  *(_QWORD *)v2 = &CYCbCrSurface::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(v3 + 4) + 64) = &CYCbCrSurface::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 8) + 8LL) + 64) = &CYCbCrSurface::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)v2 + 8) + 4LL);
  *(_DWORD *)((char *)v2 + v4 + 60) = v4 - 48;
  v5 = *(int *)(*((_QWORD *)v2 + 8) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v5 + 60) = v5 - 64;
  return result;
}

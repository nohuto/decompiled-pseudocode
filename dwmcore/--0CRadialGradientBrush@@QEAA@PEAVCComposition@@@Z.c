CRadialGradientBrush *__fastcall CRadialGradientBrush::CRadialGradientBrush(
        CRadialGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CRadialGradientBrush *result; // rax

  *((_QWORD *)this + 8) = &CRadialGradientBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 37) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 36) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 37) + 4LL) + 296) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CGradientBrush::CGradientBrush(this, a2);
  *(_QWORD *)this = &CRadialGradientBrush::`vftable';
  *((_QWORD *)this + 11) = &CRadialGradientBrush::`vftable'{for `IAtlasEntryOwner'};
  *((_QWORD *)this + 12) = &CRadialGradientBrush::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CRadialGradientBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CRadialGradientBrush::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 208;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 224;
  *((_DWORD *)this + 60) = 1056964608;
  *((_DWORD *)this + 61) = 1056964608;
  *((_DWORD *)this + 62) = 1056964608;
  *(_QWORD *)((char *)this + 252) = 1056964608LL;
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 65) = 0;
  *((_BYTE *)this + 80) = 1;
  return result;
}

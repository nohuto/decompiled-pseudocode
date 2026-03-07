CColorKeyBitmap *__fastcall CColorKeyBitmap::CColorKeyBitmap(CColorKeyBitmap *this, const struct CColorKey *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CColorKeyBitmap *result; // rax

  *((_QWORD *)this + 1) = &CGDISubSectionBitmapRealization::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 23) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)this = &ID2DBitmapCacheSource::`vftable';
  *((_QWORD *)this + 20) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CColorKeyBitmap::`vftable'{for `CMILCOMBaseT<ID2DBitmapCacheSource>'};
  *((_QWORD *)this + 3) = &CColorKeyBitmap::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CColorKeyBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CColorKeyBitmap::`vftable'{for `IPixelFormat'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 152;
  v4 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 168;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 3) = *(_OWORD *)a2;
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 8);
  result = this;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  return result;
}

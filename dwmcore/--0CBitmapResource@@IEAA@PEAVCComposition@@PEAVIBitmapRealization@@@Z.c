CBitmapResource *__fastcall CBitmapResource::CBitmapResource(
        CBitmapResource *this,
        struct CComposition *a2,
        struct IBitmapRealization *a3)
{
  __int64 v4; // rcx

  *((_QWORD *)this + 8) = &CBitmapResource::`vbtable'{for `CImageSource'};
  *((_QWORD *)this + 14) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 13) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 14) + 4LL) + 112) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CImageSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CBitmapResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CBitmapResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CBitmapResource::`vftable'{for `IPixelFormat'};
  v4 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 24;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL) - 40;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
    (_QWORD *)this + 9,
    (__int64)a3);
  return this;
}

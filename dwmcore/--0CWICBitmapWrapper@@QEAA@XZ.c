CWICBitmapWrapper *__fastcall CWICBitmapWrapper::CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  CWICBitmapWrapper *result; // rax

  *((_QWORD *)this + 1) = &CWICBitmapWrapper::`vbtable';
  *((_QWORD *)this + 18) = &CWICBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 24) = &CWICBitmapRealization::`vbtable'{for `IPixelFormat'};
  CBitmap::CBitmap(this);
  *((_QWORD *)this + 17) = &ID2DBitmapCacheSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 8LL) + 144) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `CBitmap'};
  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest2'};
  *((_QWORD *)this + 5) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 6) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 17) = &CWICBitmapWrapper::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 19) = &CWICBitmapWrapper::`vftable'{for `IWICDecoderBitmapSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CWICBitmapWrapper::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CWICBitmapWrapper::`vftable'{for `IPixelFormat's `ID2DBitmapCacheSource'};
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 4) = 0;
  *((_QWORD *)this + 20) = 0LL;
  return result;
}

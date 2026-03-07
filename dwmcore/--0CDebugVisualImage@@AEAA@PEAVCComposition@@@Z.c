CDebugVisualImage *__fastcall CDebugVisualImage::CDebugVisualImage(CDebugVisualImage *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CDebugVisualImage *result; // rax

  *((_QWORD *)this + 8) = &CDebugVisualImage::`vbtable'{for `CImageSource'};
  *((_QWORD *)this + 10) = &CDebugVisualImage::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 227) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 230) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 226) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 227) + 4LL) + 1816) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CCachedVisualImage::CCachedVisualImage(this, a2, 0, 0);
  *(_QWORD *)this = &CDebugVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 9) = &CDebugVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CDebugVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CDebugVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CDebugVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &CDebugVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 1728;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 1744;
  v5 = *(int *)(*((_QWORD *)this + 8) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 60) = v5 - 1768;
  return result;
}

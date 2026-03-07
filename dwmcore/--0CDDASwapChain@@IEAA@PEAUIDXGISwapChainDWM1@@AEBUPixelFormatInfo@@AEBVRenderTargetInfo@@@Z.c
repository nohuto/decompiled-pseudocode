CDDASwapChain *__fastcall CDDASwapChain::CDDASwapChain(
        CDDASwapChain *this,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx

  *((_QWORD *)this + 1) = &CDDASwapChain::`vbtable'{for `ISwapChain'};
  *((_QWORD *)this + 23) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 26) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *(_QWORD *)this = &IBitmapLock::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 20) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &IDDASwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &IYUVSwapChainRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &IDDASwapChain::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CDDASwapChain::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CDDASwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CDDASwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CDDASwapChain::`vftable'{for `IDeviceResource'};
  v7 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v7 + 4) = v7 - 152;
  v8 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v8 + 4) = v8 - 168;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL)
                                                                         - 192;
  wil::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>(
    (_QWORD *)this + 3,
    (__int64)a2);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = *(_QWORD *)a3;
  *((_DWORD *)this + 12) = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)a4;
  *(_QWORD *)((char *)this + 68) = *((_QWORD *)a4 + 2);
  *((_QWORD *)this + 10) = (char *)this + 88;
  *((_DWORD *)this + 22) = 0;
  return this;
}

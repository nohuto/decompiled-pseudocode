COverlaySwapChainBase *__fastcall COverlaySwapChainBase::COverlaySwapChainBase(
        COverlaySwapChainBase *this,
        struct CD3DDevice *a2,
        const struct RenderTargetInfo *a3,
        int a4,
        unsigned int a5,
        struct _LUID a6)
{
  __int64 v9; // r11
  __int64 v10; // xmm1_8
  COverlaySwapChainBase *result; // rax

  IOverlaySwapChain::IOverlaySwapChain(this);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &IBitmapUnlock::`vftable';
  *((_DWORD *)this + 6) = 0;
  CDeviceResource::CDeviceResource((COverlaySwapChainBase *)((char *)this + 40));
  *((_QWORD *)this + 2) = &COverlaySwapChainBase::`vftable'{for `CMILCOMBaseWeakRef'};
  *(_QWORD *)this = &COverlaySwapChainBase::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 5) = &COverlaySwapChainBase::`vftable'{for `CDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL)
                                                                         - 240;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (char *)this + 80,
    v9);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)a3;
  v10 = *((_QWORD *)a3 + 2);
  *(struct _LUID *)((char *)this + 116) = a6;
  *((_DWORD *)this + 31) = a5;
  *((_QWORD *)this + 13) = v10;
  *((_DWORD *)this + 28) = a4;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = (char *)this + 144;
  *((_DWORD *)this + 36) = 0;
  result = this;
  *((_DWORD *)this + 52) = 0;
  return result;
}

void __fastcall COverlaySwapChainBase::~COverlaySwapChainBase(COverlaySwapChainBase *this)
{
  __int64 v2; // rcx
  CD3DDevice *v3; // rcx
  __int64 v4; // rax

  *(_QWORD *)this = &COverlaySwapChainBase::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &COverlaySwapChainBase::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &COverlaySwapChainBase::`vftable'{for `CDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 240;
  FastRegion::CRegion::FreeMemory((COverlaySwapChainBase *)((char *)this + 136));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 128);
  v3 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v3 )
    CD3DDevice::Release(v3);
  CDeviceResource::~CDeviceResource((COverlaySwapChainBase *)((char *)this + 40));
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 56) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 16LL))(*((_QWORD *)this + 4));
  }
}

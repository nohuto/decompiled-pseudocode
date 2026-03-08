/*
 * XREFs of ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801E7574
 * Callers:
 *     ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x1801E7650 (--_ECRemoteAppRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1801E82D8 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRemoteAppRenderTarget::~CRemoteAppRenderTarget(CRemoteAppRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CRemoteAppRenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 9) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CRemoteAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 19) = &CRemoteAppRenderTarget::`vftable'{for `IVailRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CRemoteAppRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 224;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 240;
  v4 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 264;
  CRemoteAppRenderTarget::ReleaseSwapChain(this);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 168);
  CRenderTarget::~CRenderTarget(this);
}

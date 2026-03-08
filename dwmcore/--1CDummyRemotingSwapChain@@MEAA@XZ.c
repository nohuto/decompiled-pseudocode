/*
 * XREFs of ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802959D4
 * Callers:
 *     ??_GCDummyRemotingSwapChain@@MEAAPEAXI@Z @ 0x180295B40 (--_GCDummyRemotingSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDummyRemotingSwapChain::~CDummyRemotingSwapChain(CDummyRemotingSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  HMODULE v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CD3DDevice *v8; // rcx

  *(_QWORD *)this = &CDummyRemotingSwapChain::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CDummyRemotingSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CDummyRemotingSwapChain::`vftable'{for `ILegacyRemotingSwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CDummyRemotingSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CDummyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CDummyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 248;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 264;
  v4 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 288;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
  v5 = (HMODULE)*((_QWORD *)this + 11);
  if ( v5 )
    FreeLibrary(v5);
  `vector destructor iterator'(
    (char *)this + 128,
    64LL,
    2LL,
    (void (__fastcall *)(char *))CDummyRemotingSwapChain::CPresentStats::~CPresentStats);
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 10);
  v8 = (CD3DDevice *)*((_QWORD *)this + 9);
  if ( v8 )
    CD3DDevice::Release(v8);
  CDeviceResource::~CDeviceResource((CDummyRemotingSwapChain *)((char *)this + 16));
}

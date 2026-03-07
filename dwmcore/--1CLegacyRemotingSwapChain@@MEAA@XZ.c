void __fastcall CLegacyRemotingSwapChain::~CLegacyRemotingSwapChain(CLegacyRemotingSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  void *v7; // rdi
  HANDLE CurrentProcess; // rax
  HMODULE v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  CD3DDevice *v13; // rcx

  *(_QWORD *)this = &CLegacyRemotingSwapChain::`vftable'{for `CMILCOMBaseT<ILegacyRemotingSwapChain>'};
  *((_QWORD *)this + 3) = &CLegacyRemotingSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 224;
  v3 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 240;
  v4 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 264;
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 64);
  }
  v7 = (void *)*((_QWORD *)this + 26);
  if ( v7 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v7);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 14);
  v9 = (HMODULE)*((_QWORD *)this + 12);
  if ( v9 )
    FreeLibrary(v9);
  v10 = (char *)*((_QWORD *)this + 25);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  FastRegion::CRegion::FreeMemory((void **)this + 16);
  v11 = *((_QWORD *)this + 14);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 13);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 80);
  v13 = (CD3DDevice *)*((_QWORD *)this + 9);
  if ( v13 )
    CD3DDevice::Release(v13);
  CDeviceResource::~CDeviceResource((CLegacyRemotingSwapChain *)((char *)this + 24));
}

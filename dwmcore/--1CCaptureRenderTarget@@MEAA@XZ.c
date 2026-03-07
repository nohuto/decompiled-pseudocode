void __fastcall CCaptureRenderTarget::~CCaptureRenderTarget(CCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  HANDLE **v4; // rdi
  HANDLE *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx
  CD3DDevice *v9; // rcx

  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 233) = &CCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 1992;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 2008;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 76) = *(_DWORD *)(*((_QWORD *)this + 10) + 12LL)
                                                                           - 2032;
  CCaptureRenderTarget::SetController(this, 0LL);
  CCaptureRenderTarget::ReleaseFlipResources(this);
  v4 = (HANDLE **)((char *)this + 2016);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 2016);
  CCaptureRenderTarget::ReleaseRenderingResources(this);
  v5 = (HANDLE *)*((_QWORD *)this + 255);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      v5,
      *((HANDLE **)this + 256));
    std::_Deallocate<16,0>(
      *((void **)this + 255),
      (*((_QWORD *)this + 257) - *((_QWORD *)this + 255)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 255) = 0LL;
    *((_QWORD *)this + 256) = 0LL;
    *((_QWORD *)this + 257) = 0LL;
  }
  if ( *v4 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      *v4,
      *((HANDLE **)this + 253));
    std::_Deallocate<16,0>(*v4, (*((_QWORD *)this + 254) - *((_QWORD *)this + 252)) & 0xFFFFFFFFFFFFFFF8uLL);
    *v4 = 0LL;
    *((_QWORD *)this + 253) = 0LL;
    *((_QWORD *)this + 254) = 0LL;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)this + 1992);
  v6 = (char *)*((_QWORD *)this + 248);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 247);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 246);
  v7 = (char *)*((_QWORD *)this + 245);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 243);
  v8 = *((_QWORD *)this + 239);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
      v8,
      *((_QWORD *)this + 240));
    std::_Deallocate<16,0>(
      *((void **)this + 239),
      8 * ((__int64)(*((_QWORD *)this + 241) - *((_QWORD *)this + 239)) >> 3));
    *((_QWORD *)this + 239) = 0LL;
    *((_QWORD *)this + 240) = 0LL;
    *((_QWORD *)this + 241) = 0LL;
  }
  v9 = (CD3DDevice *)*((_QWORD *)this + 234);
  if ( v9 )
    CD3DDevice::Release(v9);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}

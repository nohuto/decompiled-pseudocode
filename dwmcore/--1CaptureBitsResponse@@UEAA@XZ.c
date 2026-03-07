void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  char *v2; // rdi
  const void *v3; // rcx
  void *v4; // rcx

  v2 = (char *)this + 1680;
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1680);
  v3 = (const void *)*((_QWORD *)this + 208);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 207);
  if ( v4 )
    CloseHandle(v4);
  _InterlockedDecrement(&CaptureBitsResponse::s_cOutstandingCaptures);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(v2);
  COcclusionContext::~COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 64);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
  if ( *((_QWORD *)this + 5) )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease();
  *(_QWORD *)this = &CResponseItem::`vftable';
}

void __fastcall CComputeScribbleFramebuffer::~CComputeScribbleFramebuffer(CComputeScribbleFramebuffer *this)
{
  void *v2; // rdi
  CD3DDevice *v3; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 20);
  FastRegion::CRegion::FreeMemory((void **)this + 10);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 9);
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(*((CComputeScribbleSynchronizer **)this + 6));
    operator delete(v2);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  v3 = (CD3DDevice *)*((_QWORD *)this + 2);
  if ( v3 )
    CD3DDevice::Release(v3);
}

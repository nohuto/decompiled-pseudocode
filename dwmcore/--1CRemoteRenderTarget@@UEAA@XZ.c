void __fastcall CRemoteRenderTarget::~CRemoteRenderTarget(CRemoteRenderTarget *this)
{
  CResource *v2; // rcx
  CResource *v3; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 40);
  v2 = (CResource *)*((_QWORD *)this + 24);
  if ( v2 )
    CResource::InternalRelease(v2);
  v3 = (CResource *)*((_QWORD *)this + 23);
  if ( v3 )
    CResource::InternalRelease(v3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 176);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 21);
  CRenderTarget::~CRenderTarget(this);
}

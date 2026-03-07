void __fastcall CDDARenderTarget::~CDDARenderTarget(CDDARenderTarget *this)
{
  CResource *v2; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 251);
  COcclusionContext::~COcclusionContext((void **)this + 57);
  v2 = (CResource *)*((_QWORD *)this + 21);
  if ( v2 )
    CResource::InternalRelease(v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 160);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 19);
  CRenderTarget::~CRenderTarget(this);
}

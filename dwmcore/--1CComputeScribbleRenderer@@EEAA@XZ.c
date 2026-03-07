void __fastcall CComputeScribbleRenderer::~CComputeScribbleRenderer(CComputeScribbleRenderer *this)
{
  CComputeScribbleScheduler *v2; // rbx

  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 5);
  v2 = (CComputeScribbleScheduler *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(v2);
    operator delete(v2);
  }
}

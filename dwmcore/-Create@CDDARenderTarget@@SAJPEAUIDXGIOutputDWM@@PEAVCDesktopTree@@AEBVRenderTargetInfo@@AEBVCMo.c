__int64 __fastcall CDDARenderTarget::Create(
        struct IDXGIOutputDWM *a1,
        struct CDesktopTree *a2,
        const struct RenderTargetInfo *a3,
        const struct CMonitorTransform *a4,
        struct CDDARenderTarget **a5)
{
  CDDARenderTarget *v9; // rax
  __int64 v10; // rcx
  CDDARenderTarget *v11; // rax
  CDDARenderTarget *v12; // rdi
  unsigned int v13; // ebx

  *a5 = 0LL;
  v9 = (CDDARenderTarget *)DefaultHeap::AllocClear(0x868uLL);
  if ( v9 && (v11 = CDDARenderTarget::CDDARenderTarget(v9, a1, a3), (v12 = v11) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CDDARenderTarget *)((char *)v11 + 8));
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=((CResource **)v12 + 21, (__int64)a2);
    CRenderTarget::SetVisualTree(v12, a2);
    CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)v12 + 2) + 216LL), v12);
    v13 = 0;
    CDDARenderTarget::UpdateTransform(v12, a4);
    *a5 = v12;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v13;
}

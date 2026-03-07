__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  CRemoteAppRenderTarget *v4; // rcx
  int v6; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v7[10]; // [rsp+28h] [rbp-50h] BYREF

  v6 = 4;
  memset_0(v7, 0, 0x40uLL);
  v7[0] = *((_QWORD *)this + 32);
  CRemoteAppRenderTarget::SendMetaData(v4, (const struct _DWMIndirectMetaData *)&v6);
  CRenderTargetManager::RemoveRenderTarget(*((CRenderTargetManager **)g_pComposition + 27), this);
  CRemoteAppRenderTarget::ReleaseSwapChain(this);
  *((_QWORD *)this + 32) = 0LL;
  return 0LL;
}

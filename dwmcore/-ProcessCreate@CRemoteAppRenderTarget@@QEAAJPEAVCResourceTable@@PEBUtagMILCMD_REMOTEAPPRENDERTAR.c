__int64 __fastcall CRemoteAppRenderTarget::ProcessCreate(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_CREATE *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  *((_QWORD *)this + 32) = *((_QWORD *)a3 + 1);
  v4 = CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)a3 + 1);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x44u, 0LL);
  else
    CRenderTargetManager::AddRenderTarget(*((CRenderTargetManager **)g_pComposition + 27), this);
  return v6;
}

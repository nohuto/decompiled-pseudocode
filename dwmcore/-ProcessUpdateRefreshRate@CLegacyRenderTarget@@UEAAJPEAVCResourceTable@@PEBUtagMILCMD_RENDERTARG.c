__int64 __fastcall CLegacyRenderTarget::ProcessUpdateRefreshRate(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE *a3)
{
  CSyncLockGroup *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)this + 22);
  v4 = (CSyncLockGroup *)*((_QWORD *)this + 2321);
  if ( v4 )
  {
    CSyncLockGroup::RemoveRenderTarget(
      v4,
      (struct IMonitorTarget *)(((unsigned __int64)this + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_QWORD *)this + 2321) = 0LL;
  }
  v5 = CLegacyRenderTarget::EnsureDXGIOutput(this);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x94u, 0LL);
    goto LABEL_9;
  }
  CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 144));
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 224LL))(v7);
    if ( v8 >= 0 )
    {
      CLegacyRenderTarget::CheckForceParallelMode(this);
      *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 580LL) = 1;
      return 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Cu, 0LL);
LABEL_9:
    CLegacyRenderTarget::ReleaseSwapChain(this);
  }
  return 0LL;
}

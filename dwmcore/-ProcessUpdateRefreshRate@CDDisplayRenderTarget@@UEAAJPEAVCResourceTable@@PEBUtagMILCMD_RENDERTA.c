__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateRefreshRate(
        CDirectFlipInfo **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE *a3)
{
  CDDisplaySwapChain *v4; // rcx
  int updated; // eax
  __int64 v6; // rcx

  CDDisplayRenderTarget::UpdateMPOCaps(this + 18);
  v4 = this[23];
  if ( v4 )
  {
    updated = CDDisplaySwapChain::UpdateRefreshRate(v4);
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x94u, 0LL);
      wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(this + 23);
    }
    else
    {
      *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 580LL) = 1;
    }
  }
  return 0LL;
}

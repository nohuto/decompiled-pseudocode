/*
 * XREFs of ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E5530
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C71C0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E65B4 (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x180288760 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 */

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

/*
 * XREFs of ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E65B4
 * Callers:
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E5530 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801E63B4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ @ 0x180102C1C (-InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CMILCOMBaseWeakRef::InternalRelease((CMILCOMBaseWeakRef *)(result + 16));
  return result;
}

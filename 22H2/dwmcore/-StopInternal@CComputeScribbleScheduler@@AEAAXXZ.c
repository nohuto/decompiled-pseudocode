/*
 * XREFs of ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x18020414C
 * Callers:
 *     ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x1801FBA30 (-DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180203994 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x180203D50 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180100300 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180204C30 (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 */

void __fastcall CComputeScribbleScheduler::StopInternal(CComputeScribbleScheduler *this)
{
  CComputeScribbleFramebuffer **v1; // rsi
  CComputeScribbleFramebuffer **i; // rbx

  v1 = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 15);
  for ( i = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 14); i != v1; ++i )
    CComputeScribbleFramebuffer::ClearScribbles(*i);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
}

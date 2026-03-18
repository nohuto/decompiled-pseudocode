/*
 * XREFs of ??0?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGISwapChainDWM1@@@Z @ 0x1800CB308
 * Callers:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x1800CB0A0 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ??0CDDASwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802A2F10 (--0CDDASwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>::com_ptr_t<IDXGISwapChainDWM1,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}

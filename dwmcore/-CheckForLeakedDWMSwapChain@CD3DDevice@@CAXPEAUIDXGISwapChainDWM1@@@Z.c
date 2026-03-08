/*
 * XREFs of ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1800C6754
 * Callers:
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800C69DC (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180109F7C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::CheckForLeakedDWMSwapChain(struct IDXGISwapChainDWM1 *a1)
{
  _DWORD v1[4]; // [rsp+20h] [rbp-C8h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v1[0] = 0;
  if ( (*(int (__fastcall **)(struct IDXGISwapChainDWM1 *, _DWORD *))(*(_QWORD *)a1 + 240LL))(a1, v1) >= 0 )
  {
    if ( v1[0] )
    {
      memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      pExceptionRecord.ExceptionCode = 142213121;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}

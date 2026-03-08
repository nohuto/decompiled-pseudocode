/*
 * XREFs of ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0352DFC
 * Callers:
 *     ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0355A10 (-SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C03531F4 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0353F54 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocal(DXGSWAPCHAIN *this)
{
  __int64 v2; // rcx
  bool v3; // dl
  __int64 CurrentProcess; // rdi
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  CurrentProcess = PsGetCurrentProcess(v2);
  if ( *((_QWORD *)this + 14) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v3);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 96));
  }
  if ( *((_QWORD *)this + 20) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v3);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 144));
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}

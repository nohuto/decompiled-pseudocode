/*
 * XREFs of ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C0355A60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C003FBD0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C00581D0 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 */

void __fastcall SwapChainObDeleteProcedure(DXGSWAPCHAIN **a1)
{
  DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // r8

  v2 = *a1;
  if ( v2 )
  {
    DXGSWAPCHAIN::`scalar deleting destructor'(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventIndirectSwapChainDestroy, v3, *a1);
    *a1 = 0LL;
  }
}

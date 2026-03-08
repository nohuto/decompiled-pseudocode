/*
 * XREFs of ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0355A10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C003FBD0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0352DFC (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

void __fastcall SwapChainObCloseProcedure(struct _EPROCESS *a1, DXGSWAPCHAIN **a2)
{
  __int64 v3; // r8

  if ( *a2 )
  {
    DXGSWAPCHAIN::DestroyLocal(*a2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventIndirectSwapChainCloseHandle, v3, *a2);
  }
}

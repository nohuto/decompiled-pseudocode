/*
 * XREFs of ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C02ACB0C
 * Callers:
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C02AF580 (DxgkRemoveSurfaceFromSwapChain.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AAD78 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AAE0C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02AB9C8 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::RemoveSurface(
        struct _KTHREAD **this,
        struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 BufferIdx; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  DXGSWAPCHAIN *v15; // rcx

  if ( this[2] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 2399LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)this + 56) )
  {
    v7 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v7 + 24) = 2405LL;
    WdLogEvent5_WdError(v7);
    return 3221225659LL;
  }
  BufferIdx = a2->BufferIdx;
  if ( (unsigned int)BufferIdx >= *((_DWORD *)this + 12) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v10[3] = a2->BufferIdx;
    v11 = *((unsigned int *)this + 12);
LABEL_7:
    v10[4] = v11;
LABEL_8:
    WdLogEvent5_WdError(v10);
    DXGSWAPCHAIN::MarkAbandoned(this, v12, v13);
    return 3221225485LL;
  }
  v14 = (__int64)this[7] + 112 * BufferIdx;
  if ( !*(_DWORD *)(v14 + 8) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v10[3] = a2->BufferIdx;
    v11 = *(int *)(v14 + 8);
    goto LABEL_7;
  }
  if ( *(HANDLE *)(v14 + 64) != a2->hNtSurfaceHandle )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v10[3] = a2->hNtSurfaceHandle;
    v10[4] = *((_QWORD *)this[7] + 8);
    v10[5] = a2->BufferIdx;
    goto LABEL_8;
  }
  DXGSWAPCHAIN::DestroySurfacesResourcesLocal((__int64)this, 0LL, v14, a4);
  if ( *(_BYTE *)(v14 + 80) )
  {
    *(_DWORD *)(v14 + 8) = 2;
  }
  else
  {
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v15, (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)v14);
    memset((void *)v14, 0, 0x70uLL);
    --*((_DWORD *)this + 13);
  }
  return 0LL;
}

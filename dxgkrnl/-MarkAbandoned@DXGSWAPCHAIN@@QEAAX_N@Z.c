/*
 * XREFs of ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0353F54
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02247B4 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0224A6A (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0352DFC (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C03532FC (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@IH@Z @ 0x1C0353D8C (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@IH@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C035539C (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C03555B8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C035591C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C0355C20 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0051A38 (McTemplateK0ppp_EtwWriteTransfer.c)
 */

void __fastcall DXGSWAPCHAIN::MarkAbandoned(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  struct _KEVENT *v4; // rcx
  struct _KEVENT *v5; // rcx

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3494LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3494LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 12) || !*((_DWORD *)this + 13) )
  {
    v4 = (struct _KEVENT *)this[16];
    *((_DWORD *)this + 12) = 1;
    if ( v4 )
      KeSetEvent(v4, 2, 0);
    v5 = (struct _KEVENT *)this[22];
    if ( v5 )
      KeSetEvent(v5, 2, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventIndirectSwapChainMarkAbandoned,
        a3,
        this,
        this[22],
        this[16]);
  }
}

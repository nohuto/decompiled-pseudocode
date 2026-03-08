/*
 * XREFs of ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C03531F4
 * Callers:
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0352DFC (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C03545C0 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0354970 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0352F24 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainLocalClient(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2)
{
  void *v4; // rcx
  unsigned int i; // edi

  v4 = (void *)*((_QWORD *)a2 + 4);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 14); ++i )
    DXGSWAPCHAIN::DestroySurfacesResourcesLocal((__int64)v4, *((_DWORD *)a2 + 7), *((_QWORD *)this + 8) + 112LL * i);
  *((_QWORD *)a2 + 2) = 0LL;
}

/*
 * XREFs of ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C00583E4
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02247B4 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C03532FC (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C0353838 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGSWAPCHAIN::GetClientSurfaceInfo(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        unsigned int a3,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO **a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **a5)
{
  __int64 v6; // rbx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v12; // rdx

  v6 = a3;
  if ( a3 >= *((_DWORD *)this + 14) )
  {
    WdLogSingleEntry1(1LL, 439LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v9,
          v10,
          0LL,
          2,
          -1,
          L"SurfaceIdx < m_SurfaceTableSize",
          439LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v11 = *((int *)a2 + 7);
  v12 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 8) + 112 * v6);
  *a4 = v12;
  *a5 = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)v12 + 32 * v11 + 48);
}

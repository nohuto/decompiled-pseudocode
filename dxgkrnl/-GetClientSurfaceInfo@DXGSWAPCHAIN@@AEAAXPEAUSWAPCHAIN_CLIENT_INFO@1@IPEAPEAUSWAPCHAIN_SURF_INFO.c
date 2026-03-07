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

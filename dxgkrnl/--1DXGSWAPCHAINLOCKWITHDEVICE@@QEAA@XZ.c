/*
 * XREFs of ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03523E8
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1C0355B14 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C0356160 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C0356760 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C0356B70 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1C0357700 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C0358510 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C0358800 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0224C40 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE(DXGSWAPCHAINLOCKWITHDEVICE *this)
{
  DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
  COREACCESS::~COREACCESS((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
  if ( *((_BYTE *)this + 32) )
    DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
}

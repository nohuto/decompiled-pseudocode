/*
 * XREFs of ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1C0355B14
 * Callers:
 *     DxgkReleaseSwapChain @ 0x1C03580B0 (DxgkReleaseSwapChain.c)
 *     _lambda_6d6dde8dff0ce95e6db7d2028557ce08_::operator() @ 0x1C03CC22C (_lambda_6d6dde8dff0ce95e6db7d2028557ce08_--operator().c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0352378 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03523E8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C035241C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall SwapChainReleaseInternal(
        struct DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4,
        int a5)
{
  int v9; // ebx
  struct DXGDEVICE *v11; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v12[128]; // [rsp+60h] [rbp-B8h] BYREF

  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry1(1LL, 1493LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pKmReleaseSwapChain->pMetaData == nullptr",
      1493LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  a2[1].hNtSwapChain = 0LL;
  v11 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12, this, a2->bProducer, a4);
  v9 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v12, &v11, 1);
  if ( v9 >= 0 )
    v9 = DXGSWAPCHAIN::ReleaseBuffer(this, a2, a3, a4, a5);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12);
  return (unsigned int)v9;
}

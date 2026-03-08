/*
 * XREFs of ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C03530A4
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C03523BC (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFIXEDQUEUE@@QEAA@XZ @ 0x1C0058130 (--1DXGFIXEDQUEUE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0352E90 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainGlobal(DXGSWAPCHAIN *this)
{
  unsigned int i; // edi
  void *v3; // rcx
  void *v4; // rdi
  void *v5; // rcx
  struct DXGPROCESS *Current; // rax

  if ( *((_QWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1779LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ProducerInfo.pNtProcess == nullptr",
      1779LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 14) )
  {
    WdLogSingleEntry1(1LL, 1780LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ConsumerInfo.pNtProcess == nullptr",
      1780LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 14); ++i )
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
      this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(*((_QWORD *)this + 8) + 112LL * i));
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 27);
  if ( v4 )
  {
    DXGFIXEDQUEUE::~DXGFIXEDQUEUE(*((DXGFIXEDQUEUE **)this + 27));
    operator delete(v4);
    *((_QWORD *)this + 27) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 28) = 0LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)v5);
  WdLogSingleEntry2(4LL, this, Current);
}

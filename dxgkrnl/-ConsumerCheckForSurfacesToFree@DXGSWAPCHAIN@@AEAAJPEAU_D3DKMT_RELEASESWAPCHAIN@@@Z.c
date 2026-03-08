/*
 * XREFs of ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C0352C74
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0352E90 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0352F24 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ConsumerCheckForSurfacesToFree(
        unsigned __int64 this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2)
{
  DXGSWAPCHAIN *v3; // rbx
  unsigned int bProducer; // ebp
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r8
  DXGSWAPCHAIN *v11; // rcx
  unsigned int v12; // eax

  v3 = (DXGSWAPCHAIN *)this;
  if ( *(struct _KTHREAD **)(this + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3578LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3578LL, 0LL, 0LL, 0LL, 0LL);
  }
  bProducer = a2[1].bProducer;
  v5 = 0;
  a2[1].bProducer = 0;
  if ( !*((_DWORD *)v3 + 14) )
    return 0LL;
  while ( 1 )
  {
    v6 = *((_QWORD *)v3 + 27);
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 )
    {
      this = *(unsigned int *)(v6 + 12);
      while ( (_DWORD)this != *(_DWORD *)(v6 + 8) )
      {
        if ( *(_DWORD *)(v7 + 4LL * (unsigned int)this) == v5 )
          goto LABEL_13;
        v8 = this + 1;
        this = (unsigned int)(this + 1);
        if ( v8 == *(_DWORD *)(v6 + 4) )
          this = 0LL;
      }
    }
    v9 = 112LL * v5;
    v10 = v9 + *((_QWORD *)v3 + 8);
    if ( *(_DWORD *)(v10 + 8) != 2 )
      goto LABEL_13;
    DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, 1LL, v10);
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
      v11,
      (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v9 + *((_QWORD *)v3 + 8)));
    memset((void *)(v9 + *((_QWORD *)v3 + 8)), 0, 0x70uLL);
    v12 = a2[1].bProducer;
    if ( v12 >= bProducer )
      break;
    this = v12;
    *((_DWORD *)a2[1].pMetaData + v12) = v5;
    ++a2[1].bProducer;
    --*((_DWORD *)v3 + 15);
LABEL_13:
    if ( ++v5 >= *((_DWORD *)v3 + 14) )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v3);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Caller only provided 0x%I64x entires in deferred free list, that was not enough. Swapchain 0x%I64x",
    (__int64)v3,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225625LL;
}

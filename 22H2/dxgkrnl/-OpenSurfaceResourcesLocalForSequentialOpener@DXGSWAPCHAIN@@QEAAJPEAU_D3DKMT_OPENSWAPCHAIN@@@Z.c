/*
 * XREFs of ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02ABA8C
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C02AEA40 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AAE0C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02ABEEC (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  BOOL bProducer; // eax
  unsigned int v15; // esi
  __int64 v16; // rdi
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v7 = *((_DWORD *)this + 13);
  if ( a2->SurfaceCount != v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 2233LL;
    WdLogEvent5_WdAssertion(v8);
    v7 = *((_DWORD *)this + 13);
  }
  v9 = 0;
  v10 = 0LL;
  if ( v7 )
  {
    do
    {
      if ( (unsigned int)v10 >= a2->SurfaceCount )
        break;
      v11 = *((_QWORD *)this + 7);
      v12 = 112LL * (unsigned int)v10;
      if ( !*(_DWORD *)(v12 + v11 + 8) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11, v4);
        *(_QWORD *)(v13 + 24) = 2241LL;
        WdLogEvent5_WdAssertion(v13);
        v11 = *((_QWORD *)this + 7);
      }
      v9 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
             this,
             (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v12 + v11),
             a2->bProducer,
             &a2->pNtSurfaceHandles[v10]);
      if ( v9 < 0 )
        goto LABEL_10;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *((_DWORD *)this + 13) );
    if ( v9 >= 0 )
      goto LABEL_13;
LABEL_10:
    bProducer = a2->bProducer;
    v15 = 0;
    if ( *((_DWORD *)this + 12) )
    {
      v16 = bProducer ? 0x30 : 0;
      do
        DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
          v5,
          *(unsigned int *)((char *)this + v16 + 116),
          *((_QWORD *)this + 7) + 112LL * v15++,
          v6);
      while ( v15 < *((_DWORD *)this + 12) );
    }
  }
LABEL_13:
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v4);
  return (unsigned int)v9;
}

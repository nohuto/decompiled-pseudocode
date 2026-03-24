/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AAE0C
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02AA7D0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C02AABA4 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02AB07C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02ABA8C (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C02ACB0C (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  void *v7; // rcx
  unsigned int v8; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rdi
  char *v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  struct DXGSYNCOBJECT *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  PERESOURCE *Global; // rax

  v4 = (int)a2;
  v6 = 32LL * (int)a2;
  v7 = *(void **)(v6 + a3 + 72);
  if ( v7 )
  {
    ObCloseHandle(v7, 1);
    *(_QWORD *)(v6 + a3 + 72) = 0LL;
    *(_QWORD *)(32 * (v4 + 2) + a3) = 0LL;
  }
  v8 = *(_DWORD *)(v6 + a3 + 56);
  if ( v8 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v7, a2, a3, a4);
    v10 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(v6 + a3 + 56) = 0;
      return;
    }
    v11 = (char *)Current + 208;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v12 = (v8 >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)v10 + 64) )
    {
      v13 = *((_QWORD *)v10 + 30);
      v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
      if ( ((v8 >> 25) & 0x60) == (v14 & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      {
        v15 = v14 & 0x1F;
        if ( (_BYTE)v15 == 8 )
        {
          v17 = *(struct DXGSYNCOBJECT **)(v13 + 16LL * v12);
LABEL_12:
          ExReleasePushLockSharedEx(v11, 0LL);
          KeLeaveCriticalRegion();
          if ( v17 )
          {
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v19, v18);
            DXGGLOBAL::DestroySyncObject(Global, v17, v8);
          }
          goto LABEL_14;
        }
        v16 = WdLogNewEntry5_WdError((v8 >> 25) & 0x60, v15);
        *(_QWORD *)(v16 + 24) = 316LL;
        WdLogEvent5_WdError(v16);
      }
    }
    v17 = 0LL;
    goto LABEL_12;
  }
}

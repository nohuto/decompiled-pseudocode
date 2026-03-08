/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0352F24
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C03527E8 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C0352C74 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C03531F4 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0354050 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C035539C (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  void *v6; // rcx
  unsigned int v7; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rdi
  volatile signed __int32 *v10; // r14
  unsigned int v11; // ecx
  __int64 v12; // rdi
  int v13; // edx
  struct DXGSYNCOBJECT *v14; // rdi
  PERESOURCE *Global; // rax

  v3 = a2;
  v5 = 32LL * a2;
  v6 = *(void **)(v5 + a3 + 72);
  if ( v6 )
  {
    ObCloseHandle(v6, 1);
    *(_QWORD *)(v5 + a3 + 72) = 0LL;
    *(_QWORD *)(32 * (v3 + 2) + a3) = 0LL;
  }
  v7 = *(_DWORD *)(v5 + a3 + 56);
  if ( v7 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v6);
    v9 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(v5 + a3 + 56) = 0;
      return;
    }
    v10 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v11 = (v7 >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)v9 + 74) )
    {
      v12 = *((_QWORD *)v9 + 35);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
      {
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 8 )
          {
            v14 = *(struct DXGSYNCOBJECT **)(v12 + 16LL * v11);
LABEL_12:
            _InterlockedDecrement(v10 + 4);
            ExReleasePushLockSharedEx(v10, 0LL);
            KeLeaveCriticalRegion();
            if ( v14 )
            {
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(Global, v14, v7);
            }
            goto LABEL_14;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
    goto LABEL_12;
  }
}

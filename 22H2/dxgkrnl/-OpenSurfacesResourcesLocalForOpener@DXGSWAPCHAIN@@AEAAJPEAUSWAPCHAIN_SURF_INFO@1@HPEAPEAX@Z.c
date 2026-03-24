/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02ABEEC
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02AA584 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02ABA8C (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C004BFE0 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171360 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02AB07C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4)
{
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v16; // r15
  __int64 CurrentProcess; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  PERESOURCE *Global; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct DXGPROCESS *Current; // r15
  unsigned int v47; // r14d
  unsigned int v48; // ecx
  __int64 v49; // rdx
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  bool v52; // zf
  struct DXGSYNCOBJECT *v53; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v54[8]; // [rsp+48h] [rbp-50h] BYREF
  char v55; // [rsp+50h] [rbp-48h]
  __int64 v56; // [rsp+A0h] [rbp+8h]
  unsigned int v57; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2143LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v13 = v9 == 0 ? 0x30 : 0;
  v14 = *(__int64 *)((char *)this + v13 + 104);
  if ( !v14 )
    return 3221225558LL;
  v16 = 32LL * v9;
  v56 = 32LL * (a3 == 0);
  LOBYTE(v10) = -(v9 == 0);
  CurrentProcess = PsGetCurrentProcess(v10, v13, v11, v12);
  v18 = ObDuplicateObject(
          v14,
          *(_QWORD *)((char *)a2 + v16 + 72),
          CurrentProcess,
          (char *)a2 + v56 + 72,
          *((_DWORD *)this + 16),
          0,
          4,
          1);
  v21 = v18;
  if ( v18 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v56 + 72);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v20, v19);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v54, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v54, v32);
    v57 = 0;
    v35 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v34, v33);
    LODWORD(v21) = DXGGLOBAL::OpenSyncObject(v35, *((unsigned int *)a2 + 7), &v53, &v57, 0LL);
    if ( (int)v21 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v37, v36, v38, v39);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v47 = v57;
      v48 = (v57 >> 6) & 0xFFFFFF;
      if ( v48 < *((_DWORD *)Current + 64) )
      {
        v49 = *((_QWORD *)Current + 30);
        if ( ((v57 >> 25) & 0x60) == (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0x60)
          && (*(_DWORD *)(v49 + 16LL * v48 + 8) & 0x1F) != 0 )
        {
          v50 = 2 * (((unsigned __int64)v57 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v49 + 16 * (((unsigned __int64)v57 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v51 = WdLogNewEntry5_WdAssertion((v57 >> 25) & 0x60, v49);
            *(_QWORD *)(v51 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v51);
            v49 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v49 + 8 * v50 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v52 = v55 == 0;
      *(_DWORD *)((char *)a2 + v56 + 56) = v47;
      if ( !v52 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
      *((_BYTE *)a2 + v56 + 48) = 1;
    }
    else
    {
      v40 = WdLogNewEntry5_WdError(v37, v36);
      v41 = *((unsigned int *)a2 + 7);
      v42 = v40;
      *(_QWORD *)(v40 + 24) = v41;
      *(_QWORD *)(v40 + 32) = PsGetCurrentProcess(v41, v43, v44, v45);
      WdLogEvent5_WdError(v42);
      if ( v55 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v20, v19);
    v23 = *(_QWORD *)((char *)a2 + v16 + 72);
    v24 = v22;
    *(_QWORD *)(v22 + 24) = v23;
    *(_QWORD *)(v22 + 32) = v14;
    v28 = PsGetCurrentProcess(v23, v25, v26, v27);
    *(_QWORD *)(v24 + 48) = v21;
    *(_QWORD *)(v24 + 40) = v28;
    WdLogEvent5_WdError(v24);
  }
  if ( (int)v21 < 0 )
    DXGSWAPCHAIN::DestroySwapchainLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 136LL : 88LL)),
      v29,
      v30);
  return (unsigned int)v21;
}

/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C03545C0
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02247B4 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0354050 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C00586F8 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0166CCC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C03531F4 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r12
  int v12; // ebx
  struct DXGSYNCOBJECT *v13; // r13
  __int64 v14; // r15
  __int64 CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  struct DXGSYNCOBJECT *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGPROCESS *Current; // rbp
  unsigned int v30; // esi
  unsigned int v31; // ecx
  __int64 v32; // r8
  int v33; // edx
  unsigned __int64 v34; // rbx
  int v35; // [rsp+38h] [rbp-60h]
  _BYTE v36[8]; // [rsp+50h] [rbp-48h] BYREF
  char v37; // [rsp+58h] [rbp-40h]
  struct DXGSYNCOBJECT *v38; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2209LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2209LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v10 = *(__int64 *)((char *)this + (v8 == 0 ? 0x30 : 0) + 112);
  if ( !v10 )
    return 3221225558LL;
  v12 = *((_DWORD *)this + 18);
  v13 = (struct DXGSYNCOBJECT *)(32LL * v8);
  v38 = v13;
  v14 = 32LL * (a3 == 0);
  LOBYTE(v9) = -(v8 == 0);
  CurrentProcess = PsGetCurrentProcess(v9);
  LOBYTE(v35) = 1;
  v16 = ObDuplicateObject(
          v10,
          *(_QWORD *)((char *)v13 + (_QWORD)a2 + 72),
          CurrentProcess,
          (char *)a2 + v14 + 72,
          v12,
          0,
          4,
          v35);
  v18 = v16;
  if ( v16 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v14 + 72);
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v36);
    v39 = 0;
    v24 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    LODWORD(v18) = DXGGLOBAL::OpenSyncObject(v24, *((_DWORD *)a2 + 7), &v38, &v39, 0LL);
    if ( (int)v18 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v25);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v30 = v39;
      v31 = (v39 >> 6) & 0xFFFFFF;
      if ( v31 < *((_DWORD *)Current + 74) )
      {
        v32 = *((_QWORD *)Current + 35);
        v33 = *(_DWORD *)(v32 + 16LL * v31 + 8);
        if ( ((v39 >> 25) & 0x60) == (v33 & 0x60) && (v33 & 0x1F) != 0 )
        {
          v34 = 2 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v32 + 16 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v34 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)((char *)a2 + v14 + 56) = v30;
      if ( v37 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
      *((_BYTE *)a2 + v14 + 48) = 1;
      return (unsigned int)v18;
    }
    v26 = PsGetCurrentProcess(v25);
    WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v26);
    v28 = PsGetCurrentProcess(v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
      *((unsigned int *)a2 + 7),
      v28,
      0LL,
      0LL,
      0LL);
    if ( v37 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
  }
  else
  {
    v19 = PsGetCurrentProcess(v17);
    v20 = v38;
    WdLogSingleEntry4(2LL, *(_QWORD *)((char *)a2 + (_QWORD)v38 + 72), v10, v19, v18);
    v22 = PsGetCurrentProcess(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to dup NT handle 0x%I64x into from creator process 0x%I64x, to process 0x%I64x, status 0x%I64x",
      *(_QWORD *)((char *)a2 + (_QWORD)v20 + 72),
      v10,
      v22,
      v18,
      0LL);
  }
  DXGSWAPCHAIN::DestroySwapchainLocalClient(
    (DXGSWAPCHAIN *)this,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 144LL : 96LL)));
  return (unsigned int)v18;
}

/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02ABBC8
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02AA7D0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0pqp_EtwWriteTransfer @ 0x1C004C404 (McTemplateK0pqp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171360 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4)
{
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  PVOID v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcess; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // eax
  PERESOURCE *Global; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r15d
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct DXGPROCESS *Current; // rsi
  unsigned int v48; // edi
  unsigned int v49; // ecx
  __int64 v50; // rdx
  int v51; // r8d
  __int64 v52; // rax
  PVOID *Object; // [rsp+20h] [rbp-40h]
  char v54; // [rsp+38h] [rbp-28h]
  __int64 v55; // [rsp+40h] [rbp-20h] BYREF
  struct DXGSYNCOBJECT *v56; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v57[8]; // [rsp+50h] [rbp-10h] BYREF
  char v58; // [rsp+58h] [rbp-8h]
  unsigned int v59; // [rsp+A0h] [rbp+40h] BYREF
  PVOID v60; // [rsp+A8h] [rbp+48h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2046LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *(_QWORD *)a2 = 0LL;
  v60 = 0LL;
  v9 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v60, 0LL);
  v12 = v9;
  if ( v9 < 0 )
    goto LABEL_4;
  v15 = v60;
  if ( v60 )
  {
    v16 = *((_QWORD *)v60 + 2);
    if ( v16 )
    {
      v17 = (__int64 *)(v16 + 136);
      v18 = 0LL;
      v19 = *v17;
      if ( (__int64 *)*v17 != v17 )
        v18 = *(_QWORD *)(v19 - 40);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        LODWORD(Object) = (a2 - this[7]) / 112;
        McTemplateK0pqp_EtwWriteTransfer(v19, (a2 - this[7]) / 112, v18, this, Object, v18);
      }
    }
  }
  ObfDereferenceObject(v15);
  v55 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v21, v20, v22, v23);
  v29 = PsGetCurrentProcess(v26, v25, v27, v28);
  v54 = 1;
  v30 = ObDuplicateObject(v29, a4, CurrentProcess, &v55, 0, 0, 6, v54);
  v12 = v30;
  if ( v30 < 0 )
  {
LABEL_4:
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = a4;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  else
  {
    *((_QWORD *)a3 + 3) = v55;
    *((_QWORD *)a3 + 2) = a4;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57, v32);
    v59 = 0;
    v35 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v34, v33);
    v40 = DXGGLOBAL::OpenSyncObject(v35, *((unsigned int *)a2 + 7), &v56, &v59, 0LL);
    if ( v40 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v37, v36, v38, v39);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v48 = v59;
      v49 = (v59 >> 6) & 0xFFFFFF;
      if ( v49 < *((_DWORD *)Current + 64) )
      {
        v50 = *((_QWORD *)Current + 30);
        v51 = *(_DWORD *)(v50 + 16LL * v49 + 8);
        if ( ((v59 >> 25) & 0x60) == (v51 & 0x60) && (v51 & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v50 + 16 * (((unsigned __int64)v59 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v52 = WdLogNewEntry5_WdAssertion((v59 >> 25) & 0x60, v50);
            *(_QWORD *)(v52 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v52);
            v50 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v50 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      *((_DWORD *)a3 + 2) = v48;
      if ( v58 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
      *(_BYTE *)a3 = 1;
    }
    else
    {
      v41 = WdLogNewEntry5_WdError(v37, v36);
      v42 = *((unsigned int *)a2 + 7);
      v43 = v41;
      *(_QWORD *)(v41 + 24) = v42;
      *(_QWORD *)(v41 + 32) = PsGetCurrentProcess(v42, v44, v45, v46);
      WdLogEvent5_WdError(v43);
      if ( v58 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    }
    return (unsigned int)v40;
  }
}

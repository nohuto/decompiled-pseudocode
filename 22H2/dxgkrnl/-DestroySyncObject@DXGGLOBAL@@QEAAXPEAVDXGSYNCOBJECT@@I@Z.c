/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0048CE8 (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?VmBusSignalFenceCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAAF0 (-VmBusSignalFenceCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01174F4 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0123534 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0124124 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01288B0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C012A160 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkShareObjectsInternal @ 0x1C012AA60 (DxgkShareObjectsInternal.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C016B840 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0171148 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0216060 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C021777C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0239474 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F5D0 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F810 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C0289060 (DxgkCreateProtectedSession.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02990FC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AAD78 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02AAE0C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0114D10 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C012489C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0248798 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C029105C (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C02912E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  PERESOURCE *v13; // rbx
  __int64 v14; // rdx
  char *v15; // rcx
  int v16; // eax
  struct DXGGLOBAL *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  struct DXGSYNCOBJECT *v43; // rcx
  struct DXGSYNCOBJECT **v44; // rax
  int v45; // eax
  int v46; // eax
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  struct DXGSYNCOBJECT *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v60; // ebx
  struct DXGGLOBAL *v61; // rax
  int v62; // r9d
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  PERESOURCE *v66; // [rsp+50h] [rbp-20h] BYREF
  char v67; // [rsp+58h] [rbp-18h]
  _BYTE v68[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v69; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v70; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    v49 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v49 + 24) = 2732LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[65]) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v50 + 24) = 2733LL;
    WdLogEvent5_WdAssertion(v50);
  }
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v66 = (PERESOURCE *)Global;
  v67 = 0;
  if ( !Global )
  {
    v51 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v51 + 24) = 2427LL;
    WdLogEvent5_WdAssertion(v51);
    Global = (struct DXGGLOBAL *)v66;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v52 + 24) = 2432LL;
    WdLogEvent5_WdAssertion(v52);
  }
  if ( v67 )
  {
    v53 = WdLogNewEntry5_WdCriticalError(v12, v11);
    *(_QWORD *)(v53 + 40) = &v66;
    *(_QWORD *)(v53 + 24) = 275LL;
    *(_QWORD *)(v53 + 32) = 4LL;
    *(_OWORD *)(v53 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v53);
  }
  v13 = v66;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v13[65], 1u);
  v16 = *((_DWORD *)a2 + 49) >> 2;
  v67 = 1;
  if ( (v16 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 48) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v68, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v68);
    v15 = (char *)a2 + 296;
    v54 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 37);
    v14 = (__int64)v54 - 48;
    if ( v54 == (struct DXGSYNCOBJECT *)((char *)a2 + 296) )
      v14 = 0LL;
    if ( v14 )
    {
      v70 = *(_QWORD *)(v14 + 32);
      if ( v70 )
      {
        v55 = *(_QWORD *)(v14 + 16);
        v69 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v55 + 616) + 8LL)
                                                                                                  + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v70,
          0,
          &v69);
      }
    }
    if ( v68[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v68, v14);
  }
  v17 = DXGGLOBAL::GetGlobal((__int64)v15, v14);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v17 + 65)) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v56 + 24) = 2469LL;
    WdLogEvent5_WdAssertion(v56);
  }
  CurrentProcess = PsGetCurrentProcess(v19, v18, v20, v21);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v27 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v25, v24)) == 0LL
    || (v28 = *((_QWORD *)Current + 1)) == 0 )
  {
    v28 = v27;
  }
  if ( (_DWORD)v3 )
  {
    if ( *((_BYTE *)a2 + 277) )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(a2, v3, v26);
      if ( HostHandle )
      {
        v60 = *(_DWORD *)(v28 + 424);
        v61 = DXGGLOBAL::GetGlobal(v58, v57);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v61 + 197), v60, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(a2, v3);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v62 = *(_DWORD *)(v28 + 232);
        if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, &EventBlockThread, v30, v62);
      }
      ExAcquirePushLockExclusiveEx(v28 + 208, 0LL);
    }
    *(_QWORD *)(v28 + 216) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v28 + 240), (unsigned int)v3);
    *(_QWORD *)(v28 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v28 + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)a2 + 6) )
  {
    v63 = WdLogNewEntry5_WdAssertion(v25, v24);
    *(_QWORD *)(v63 + 24) = 2495LL;
    WdLogEvent5_WdAssertion(v63);
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v24);
  v31[3] = a2;
  v31[4] = v3;
  v36 = PsGetCurrentProcess(v33, v32, v34, v35);
  v37 = PsGetProcessDxgProcess(v36);
  v40 = v37;
  if ( v37 && (*(_BYTE *)(v37 + 347) & 0x10) == 0
    || (v48 = DXGTHREAD::GetCurrent(v39, v38)) == 0LL
    || (v41 = *((_QWORD *)v48 + 1)) == 0 )
  {
    v41 = v40;
  }
  v31[5] = v41;
  WdLogEvent5_WdEvent(v31);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 6, 0xFFFFFFFF) == 1 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 58));
    v43 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v44 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v44 != a2) )
    {
      __fastfail(3u);
    }
    *v44 = v43;
    *((_QWORD *)v43 + 1) = v44;
    if ( this[60] != (PERESOURCE)KeGetCurrentThread() )
    {
      v64 = WdLogNewEntry5_WdCriticalError(v43, v42);
      *(_QWORD *)(v64 + 24) = 275LL;
      *(_QWORD *)(v64 + 32) = 4LL;
      *(_QWORD *)(v64 + 40) = this + 58;
      *(_OWORD *)(v64 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v64);
    }
    v45 = *((_DWORD *)this + 122);
    if ( v45 <= 0 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v65 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v65);
      v45 = *((_DWORD *)this + 122);
    }
    v46 = v45 - 1;
    *((_DWORD *)this + 122) = v46;
    if ( !v46 )
    {
      this[60] = 0LL;
      ExReleasePushLockExclusiveEx(this + 58, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v67 )
  {
    v67 = 0;
    ExReleaseResourceLite(v66[65]);
    KeLeaveCriticalRegion();
  }
}

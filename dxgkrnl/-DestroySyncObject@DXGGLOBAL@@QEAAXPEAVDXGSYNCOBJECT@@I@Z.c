/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0055D5C (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0166A88 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C0184A40 (DxgkOpenResourceFromNtHandleInternal.c)
 *     DxgkShareObjectsInternal @ 0x1C0186240 (DxgkShareObjectsInternal.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C018667C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01B3290 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01B94C4 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DD0C0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BBA68 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02BD19C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325E44 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     DxgkCreateProtectedSession @ 0x1C0344700 (DxgkCreateProtectedSession.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0352E90 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0352F24 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C036F040 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038DD30 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038E510 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007010 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C0186C00 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C01A6AC4 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v7; // rdx
  struct DXGSYNCOBJECT **v8; // rax
  struct DXGSYNCOBJECT *v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  int v12; // [rsp+40h] [rbp-30h]
  _BYTE v13[16]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2745LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject != NULL", 2745LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[75]) )
  {
    WdLogSingleEntry1(1LL, 2746LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!IsSyncObjectLockExclusiveOwner()",
      2746LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v14, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v14);
  if ( (*((_DWORD *)a2 + 51) & 4) != 0 && (unsigned int)(*((_DWORD *)a2 + 50) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    v9 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 37);
    v10 = (char *)v9 - 48;
    if ( v9 == (struct DXGSYNCOBJECT *)((char *)a2 + 296) )
      v10 = 0LL;
    if ( v10 )
    {
      v16 = *((_QWORD *)v10 + 4);
      if ( v16 )
      {
        v11 = *((_QWORD *)v10 + 2);
        v15 = -1LL;
        LOBYTE(v12) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v11 + 736) + 8LL) + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v16,
          0,
          &v15,
          v12);
      }
    }
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 67));
    v7 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v8 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v8 != a2) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 67);
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v14[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v14);
}

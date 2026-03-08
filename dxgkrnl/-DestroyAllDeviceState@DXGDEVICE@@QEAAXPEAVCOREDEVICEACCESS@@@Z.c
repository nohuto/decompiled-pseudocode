/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B70A8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B9100 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009EE0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C017BF2C (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C017DAAC (OutputDuplProcessDestroyDevice.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0189C24 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C01B3EC0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4254 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8B78 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B92F4 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C01B9444 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C01D2D24 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C02E42F8 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C02E4C44 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C02E4CB0 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  struct DXGOVERLAY **i; // rbx
  char v5; // bl
  char *v6; // rdx
  struct COREDEVICEACCESS *v7; // r8
  struct DXGCONTEXT **j; // rbx
  struct DXGPAGINGQUEUE **k; // rbx
  unsigned int v10; // edx
  DXGADAPTER *v11; // rcx
  struct _ERESOURCE *v12; // rcx
  _BYTE v13[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 771LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      771LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 117), *((_QWORD *)this + 5));
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 432));
  *((_BYTE *)this + 72) = 1;
  *((_QWORD *)this + 55) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 432, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1, 0);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  for ( i = (struct DXGOVERLAY **)((char *)this + 512); *i != (struct DXGOVERLAY *)i; DXGDEVICE::DestroyOverlay(
                                                                                        this,
                                                                                        *i) )
    ;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  if ( *((_DWORD *)this + 152) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations(this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((struct DXGADAPTER **)this + 235), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1, 0);
    if ( *((_QWORD *)this + 100) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v5 = 0;
      }
      else
      {
        v5 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL, 4294967293LL);
      if ( v5 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v6);
      if ( *((DXGDEVICE **)this + 105) != (DXGDEVICE *)((char *)this + 840) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 152LL))(*((_QWORD *)this + 100));
    }
    DXGDEVICE::DrainResources(this);
    DXGDEVICE::DrainAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice(this, (struct COREDEVICEACCESS *)a2);
  }
  for ( j = (struct DXGCONTEXT **)((char *)this + 496);
        *j != (struct DXGCONTEXT *)j;
        DXGDEVICE::DestroyContext(this, *j, 0LL) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 105) != (DXGDEVICE *)((char *)this + 840) )
    WdLogSingleEntry5(0LL, 275LL, 43LL, this, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 0LL);
  for ( k = (struct DXGPAGINGQUEUE **)((char *)this + 528);
        *k != (struct DXGPAGINGQUEUE *)k;
        DXGDEVICE::DestroyPagingQueue(this, *k, v7) )
  {
    ;
  }
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  DXGDEVICE::DestroyAllTrackedWorkloads(this);
  v10 = *((_DWORD *)this + 117);
  if ( v10 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v10);
    *((_DWORD *)this + 117) = 0;
  }
  v11 = (DXGADAPTER *)*((_QWORD *)this + 235);
  if ( v11 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
    *((_QWORD *)this + 235) = 0LL;
  }
  v12 = (struct _ERESOURCE *)*((_QWORD *)this + 17);
  if ( v12 )
  {
    ExDeleteResourceLite(v12);
    operator delete(*((void **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}

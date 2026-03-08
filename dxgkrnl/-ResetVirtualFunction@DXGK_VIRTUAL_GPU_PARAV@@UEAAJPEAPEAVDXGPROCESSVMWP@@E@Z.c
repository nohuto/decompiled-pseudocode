/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C036AC70
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E74 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C005AADC (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C036ECE8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct DXGPROCESSVMWP **a2,
        char a3)
{
  _QWORD *i; // rdi
  DXGPROCESS *v7; // rcx
  _BYTE v9[88]; // [rsp+50h] [rbp-D8h] BYREF
  DXGADAPTER *v10; // [rsp+A8h] [rbp-80h]

  if ( !*((_BYTE *)this + 156) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, *((struct DXGADAPTER *const *)this + 2), 0LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
      {
        WdLogSingleEntry1(1LL, 672LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"CoreAdapterAccess.IsSharedOwner()",
          672LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
      for ( i = (_QWORD *)*((_QWORD *)this + 40); i != (_QWORD *)((char *)this + 320); i = (_QWORD *)*i )
      {
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 39));
        if ( !*((_BYTE *)i - 48) )
          DXGDEVICE::FlushScheduler(i - 15, 4u, 0xFFFFFFFD, 0);
        i[40] = 0LL;
        ExReleasePushLockExclusiveEx(i + 39, 0LL);
        KeLeaveCriticalRegion();
      }
      _InterlockedDecrement((volatile signed __int32 *)this + 76);
      ExReleasePushLockSharedEx((char *)this + 288, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
    }
    if ( *((_QWORD *)this + 12) && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 13)) && a2 )
      *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 173) = 0;
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
  }
  if ( a3 )
  {
    v7 = (DXGPROCESS *)*((_QWORD *)this + 12);
    if ( v7 )
    {
      DXGPROCESS::ReleaseReference(v7);
      *((_QWORD *)this + 12) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  *((_BYTE *)this + 156) = 1;
  return 0LL;
}

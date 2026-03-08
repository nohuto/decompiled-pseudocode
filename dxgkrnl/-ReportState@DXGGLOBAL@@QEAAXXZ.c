/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C031007C
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C030DA24 (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C00228E4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C003FB88 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1C0051588 (McTemplateK0j_EtwWriteTransfer.c)
 *     McTemplateK0pppj_EtwWriteTransfer @ 0x1C0055AFC (McTemplateK0pppj_EtwWriteTransfer.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C01C7198 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1C0340F88 (-ReportProcess@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C034C530 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C038860C (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 */

void __fastcall DXGGLOBAL::ReportState(DXGGLOBAL *this)
{
  volatile signed __int32 *v2; // rbx
  _QWORD *v3; // rdi
  DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  DXGGLOBAL *i; // rbx
  DXGGLOBAL *v8; // rdi
  DXGGLOBAL *v9; // rbx
  DXGGLOBAL *v10; // r15
  DXGADAPTERSYNCOBJECT *v11; // rbx
  DXGADAPTERSYNCOBJECT *j; // r14
  DXGGLOBAL *v13; // rdi
  DXGGLOBAL *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v29; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[144]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (volatile signed __int32 *)((char *)this + 432);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  _InterlockedIncrement(v2 + 4);
  v3 = (_QWORD *)*((_QWORD *)this + 52);
  v24[0] = (char *)this + 416;
  while ( 1 )
  {
    v24[1] = v3;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v24);
    if ( !Current )
      break;
    DXGPROCESS::ReportProcess(Current);
    v3 = (_QWORD *)*v3;
  }
  _InterlockedDecrement(v2 + 4);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 488));
  for ( i = (DXGGLOBAL *)*((_QWORD *)this + 215); i != (DXGGLOBAL *)((char *)this + 1720); i = *(DXGGLOBAL **)i )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppj_EtwWriteTransfer(v5, &EventReportVirtualMachine, v6);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 126);
  ExReleasePushLockSharedEx((char *)this + 488, 0LL);
  KeLeaveCriticalRegion();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v27, this, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v27);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGGLOBAL *)((char *)this + 536), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v8 = (DXGGLOBAL *)*((_QWORD *)this + 73);
  while ( v8 != (DXGGLOBAL *)((char *)this + 584) && v8 )
  {
    v9 = v8;
    v10 = v8;
    v8 = *(DXGGLOBAL **)v8;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGGLOBAL *)((char *)v9 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    v11 = (DXGGLOBAL *)((char *)v9 + 296);
    if ( (*((_DWORD *)v10 + 51) & 4) != 0 )
    {
      for ( j = *(DXGADAPTERSYNCOBJECT **)v11; j != v11; j = *(DXGADAPTERSYNCOBJECT **)j )
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*(_QWORD *)v11 - 48LL), v10);
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(v11, v10);
    }
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  if ( v27[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v27);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  v13 = (DXGGLOBAL *)*((_QWORD *)this + 96);
  while ( v13 != (DXGGLOBAL *)((char *)this + 768) && v13 )
  {
    v14 = v13;
    v13 = *(DXGGLOBAL **)v13;
    _m_prefetchw((char *)v14 + 24);
    v15 = *((_QWORD *)v14 + 3);
    while ( v15 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 3, v15 + 1, v15);
      if ( v16 == v15 )
      {
        LOBYTE(v15) = 1;
        break;
      }
    }
    if ( (_BYTE)v15 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v14, 0LL);
      DXGADAPTER::ReleaseReference(v14);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v30, 2LL) >= 0 )
      {
        v17 = *((_QWORD *)v14 + 366);
        if ( v17 )
          ADAPTER_RENDER::FlushScheduler(v17, 6u, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState(v14);
        v18 = *((_QWORD *)v14 + 366);
        if ( v18 )
          ADAPTER_RENDER::FlushScheduler(v18, 7u, 0xFFFFFFFF, 0);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    }
  }
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  if ( DXGGLOBAL::IsVmConnectedToHost(this) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v19, &EventVGPUGuestStart, v20);
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 214), &v29);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v22, &EventVGPUGuestEnd, v23, (__int64)&v29);
  }
}

/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01B3290
 * Callers:
 *     DxgkWslShareObjects @ 0x1C0324D60 (DxgkWslShareObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C01CA2A0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C038391C (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  void **v8; // rax
  DXGKEYEDMUTEX *v9; // rsi
  struct DXGSYNCOBJECT *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v14; // rax
  int v15; // [rsp+20h] [rbp-89h] BYREF
  __int64 v16; // [rsp+28h] [rbp-81h]
  char v17; // [rsp+30h] [rbp-79h]
  _BYTE v18[16]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-59h]
  volatile signed __int64 *v20; // [rsp+58h] [rbp-51h]
  char v21; // [rsp+60h] [rbp-49h]
  __int64 v22; // [rsp+68h] [rbp-41h]
  __int64 v23; // [rsp+90h] [rbp-19h]
  DXGADAPTER *v24; // [rsp+98h] [rbp-11h]
  char v25; // [rsp+A0h] [rbp-9h]
  __int64 v26; // [rsp+A8h] [rbp-1h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 16000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 16000);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 16000);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(volatile signed __int64 **)(*(_QWORD *)(v4 + 80) + 16LL);
  v18[1] = 0;
  v20 = v5;
  v21 = 0;
  v22 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement64(v5 + 3);
    v19 = -1LL;
  }
  v24 = (DXGADAPTER *)v5;
  v25 = 0;
  v26 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement64(v5 + 3);
    v5 = (volatile signed __int64 *)v24;
    v23 = -1LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v5) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 64), 0xFFFFFFFF);
  v6 = *(_QWORD *)(v4 + 80);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 256, 0LL);
  *(_QWORD *)(v6 + 264) = KeGetCurrentThread();
  v7 = *(_QWORD **)a1;
  if ( *(void **)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = (void **)*((_QWORD *)a1 + 1), *v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  v7[1] = v8;
  *(_QWORD *)(v6 + 264) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 256, 0LL);
  KeLeaveCriticalRegion();
  v9 = (DXGKEYEDMUTEX *)*((_QWORD *)a1 + 3);
  v10 = (struct DXGSYNCOBJECT *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
      *((_DWORD *)a1 + 10));
    *((_DWORD *)a1 + 10) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 68), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v4, 0LL, 0);
  *((_QWORD *)a1 + 2) = 0LL;
  if ( v9 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v9);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  if ( v10 )
  {
    v14 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(v14, v10, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v15);
  }
}

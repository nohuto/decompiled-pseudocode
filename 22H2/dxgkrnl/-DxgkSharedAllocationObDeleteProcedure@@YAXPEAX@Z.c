/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01288B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0008E28 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0134E10 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0248750 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  struct DXGADAPTER *v5; // rdx
  struct DXGADAPTER *const v6; // rdx
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  void **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGKEYEDMUTEX *v12; // r14
  struct DXGSYNCOBJECT *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v18; // rax
  int v19; // [rsp+20h] [rbp-79h] BYREF
  __int64 v20; // [rsp+28h] [rbp-71h]
  char v21; // [rsp+30h] [rbp-69h]
  _BYTE v22[8]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v23[64]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v24[16]; // [rsp+88h] [rbp-11h] BYREF
  DXGADAPTER *v25; // [rsp+98h] [rbp-1h]

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 16000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 16000);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 16000LL);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(struct DXGADAPTER **)(*(_QWORD *)(v4 + 80) + 16LL);
  v22[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v23, v5);
  COREACCESS::COREACCESS((COREACCESS *)v24, v6);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v25) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 64));
  v7 = *(_QWORD *)(v4 + 80);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 248, 0LL);
  *(_QWORD *)(v7 + 256) = KeGetCurrentThread();
  v8 = *(_QWORD **)a1;
  if ( *(void **)(*(_QWORD *)a1 + 8LL) != a1 || (v9 = (void **)*((_QWORD *)a1 + 1), *v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  *(_QWORD *)(v7 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
  KeLeaveCriticalRegion();
  v12 = (DXGKEYEDMUTEX *)*((_QWORD *)a1 + 3);
  v13 = (struct DXGSYNCOBJECT *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
  {
    Global = DXGGLOBAL::GetGlobal(v11, v10);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 197),
      *((_DWORD *)a1 + 10));
    *((_DWORD *)a1 + 10) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 68), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v4, 0LL, 0);
  *((_QWORD *)a1 + 2) = 0LL;
  if ( v12 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v12, v10);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  if ( v13 )
  {
    v18 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10);
    DXGGLOBAL::DestroySyncObject(v18, v13, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22, v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v14);
  if ( v21 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  }
}

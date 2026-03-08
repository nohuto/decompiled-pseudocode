/*
 * XREFs of DxgkUnlock @ 0x1C01CDE70
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390260 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CE1EC (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // r14
  unsigned __int8 v4; // r12
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v8; // rsi
  struct _KTHREAD **v9; // r8
  __int128 v10; // xmm0
  struct DXGDEVICE *v11; // rdi
  char *v12; // r14
  __int64 v13; // rcx
  int v14; // esi
  struct _KEVENT *v15; // r15
  DXGPUSHLOCK *v16; // rsi
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KEVENT *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-128h] BYREF
  struct DXGDEVICE *v37; // [rsp+58h] [rbp-120h] BYREF
  int v38; // [rsp+60h] [rbp-118h] BYREF
  __int64 v39; // [rsp+68h] [rbp-110h]
  char v40; // [rsp+70h] [rbp-108h]
  struct _D3DKMT_UNLOCK v41; // [rsp+78h] [rbp-100h] BYREF
  struct DXGDEVICE *v42; // [rsp+88h] [rbp-F0h] BYREF
  int v43; // [rsp+90h] [rbp-E8h]
  _BYTE v44[8]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v45[16]; // [rsp+A8h] [rbp-D0h] BYREF
  DXGADAPTER *v46; // [rsp+B8h] [rbp-C0h]
  char v47; // [rsp+C0h] [rbp-B8h]
  __int64 v48; // [rsp+C8h] [rbp-B0h]
  _BYTE v49[88]; // [rsp+E8h] [rbp-90h] BYREF

  v3 = (__int128 *)a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2012);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2012);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( v9 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v9 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v9 = v8;
  }
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( !v40 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_53;
  }
LABEL_7:
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v10 = *v3;
  }
  else
  {
    v10 = *v3;
  }
  v41 = (struct _D3DKMT_UNLOCK)v10;
  v36 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v10, v9, &v36);
  v11 = v36;
  if ( !v36 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v10, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      (unsigned int)v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( !v40 )
      return 3221225485LL;
    v29 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_53:
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v38);
    return 3221225485LL;
  }
  v42 = v36;
  v12 = (char *)v36 + 16;
  v13 = *(_QWORD *)(*((_QWORD *)v36 + 2) + 16LL);
  if ( *(int *)(v13 + 2552) >= 0x2000 || *(_BYTE *)(v13 + 2852) )
  {
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v43 = v14;
  }
  else
  {
    v14 = 0;
    v43 = 0;
  }
  v15 = *(struct _KEVENT **)v12;
  if ( *((_DWORD *)v11 + 116) == 2 )
  {
    if ( KeReadStateEvent(v15 + 5) )
      goto LABEL_17;
    v31 = v15 + 5;
LABEL_60:
    KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v15 + 4) )
  {
    v31 = v15 + 4;
    goto LABEL_60;
  }
LABEL_17:
  if ( v14 )
  {
    v16 = (struct DXGDEVICE *)((char *)v11 + 144);
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 40);
      v18 = 1;
      v11 = v36;
    }
    else
    {
      KeLeaveCriticalRegion();
      v18 = 0;
    }
    if ( !v18 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v12 + 16LL));
      DXGPUSHLOCK::AcquireShared(v16);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v12 + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v12 + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, (const EVENT_DESCRIPTOR *)"g", v33, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v12 + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v11, 2, v17, 0);
  if ( v49[72] )
    COREACCESS::AcquireShared((COREACCESS *)v49, 0LL);
  if ( v47 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v45, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v46 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v20, 72);
      KeWaitForSingleObject((char *)v46 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v46, 0LL);
  }
  v48 = 0LL;
  v47 = 1;
  if ( *((_DWORD *)v36 + 152) == 4 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v38);
    return 0LL;
  }
  else
  {
    v41.hDevice = 0;
    v21 = v36;
    v22 = DXGDEVICE::Unlock(v36, &v41, v4);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    if ( v43 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v21 + 40);
      ExReleasePushLockSharedEx((char *)v21 + 144, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*((PERESOURCE *)v21 + 17));
    }
    KeLeaveCriticalRegion();
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v38);
    }
    return v22;
  }
}

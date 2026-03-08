/*
 * XREFs of DxgkLock2 @ 0x1C019E150
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037BE70 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     DxgkLock2Internal @ 0x1C019DDA0 (DxgkLock2Internal.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C031D8A0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C038B814 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkLock2(struct DXGALLOCATION *a1)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v8; // rsi
  struct _KTHREAD **v9; // r13
  struct _D3DKMT_LOCK2 *v10; // r12
  ULONG64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  struct _KEVENT **v13; // r14
  __int64 v14; // rax
  int v15; // esi
  struct _KEVENT *v16; // r12
  DXGPUSHLOCK *v17; // rsi
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // rsi
  int v23; // edi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  struct DXGPROCESS *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  bool v38; // [rsp+50h] [rbp-168h]
  struct DXGDEVICE *v39; // [rsp+58h] [rbp-160h] BYREF
  int v40; // [rsp+60h] [rbp-158h] BYREF
  __int64 v41; // [rsp+68h] [rbp-150h]
  char v42; // [rsp+70h] [rbp-148h]
  struct DXGDEVICE *v43; // [rsp+78h] [rbp-140h] BYREF
  struct DXGALLOCATION *v44; // [rsp+80h] [rbp-138h]
  struct DXGALLOCATION *v45; // [rsp+88h] [rbp-130h]
  __int64 v46; // [rsp+90h] [rbp-128h]
  struct DXGPROCESS *v47; // [rsp+98h] [rbp-120h]
  struct DXGDEVICE *v48; // [rsp+A8h] [rbp-110h] BYREF
  int v49; // [rsp+B0h] [rbp-108h]
  PVOID Object; // [rsp+B8h] [rbp-100h]
  __int64 v51; // [rsp+C0h] [rbp-F8h]
  __int128 v52; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-E0h]
  _BYTE v54[8]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v55[16]; // [rsp+E8h] [rbp-D0h] BYREF
  DXGADAPTER *v56; // [rsp+F8h] [rbp-C0h]
  char v57; // [rsp+100h] [rbp-B8h]
  __int64 v58; // [rsp+108h] [rbp-B0h]
  _BYTE v59[16]; // [rsp+128h] [rbp-90h] BYREF
  __int64 v60; // [rsp+138h] [rbp-80h]
  __int64 v61; // [rsp+168h] [rbp-50h]
  char v62; // [rsp+170h] [rbp-48h]

  v45 = a1;
  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v38 = v3;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v4, 2103);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2103);
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
    {
      v47 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      goto LABEL_6;
    }
LABEL_5:
    v9 = v8;
    v47 = (struct DXGPROCESS *)v8;
    goto LABEL_6;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v31 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  v9 = (struct _KTHREAD **)v31;
  if ( !v31 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v3 = v38;
    goto LABEL_5;
  }
  v47 = v31;
  v3 = v38;
LABEL_6:
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_60;
  }
  v52 = 0LL;
  v53 = 0LL;
  v10 = (struct _D3DKMT_LOCK2 *)&v52;
  v44 = (struct DXGALLOCATION *)&v52;
  if ( v3 )
  {
    v11 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v52 = *(_OWORD *)v11;
    v53 = *(_QWORD *)(v11 + 16);
  }
  else
  {
    v10 = (struct _D3DKMT_LOCK2 *)a1;
    v44 = a1;
  }
  v43 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v10->hDevice, v9, &v43);
  v12 = v43;
  if ( !v43 )
  {
    WdLogSingleEntry2(2LL, v10->hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      v10->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 )
      return 3221225485LL;
    v32 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_60:
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v40);
    return 3221225485LL;
  }
  v13 = (struct _KEVENT **)((char *)v43 + 16);
  v14 = *(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL);
  v51 = v14;
  v46 = v14;
  v48 = v43;
  if ( *(int *)(v14 + 2552) >= 0x2000 || *(_BYTE *)(v14 + 2852) )
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  else
    v15 = 0;
  v49 = v15;
  if ( *((_DWORD *)v12 + 116) == 2 )
  {
    Object = &(*v13)[5];
    if ( !KeReadStateEvent((PRKEVENT)Object) )
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  }
  else
  {
    v16 = *v13;
    if ( !KeReadStateEvent(*v13 + 4) )
      KeWaitForSingleObject(&v16[4], Executive, 0, 0, 0LL);
    v10 = (struct _D3DKMT_LOCK2 *)v44;
  }
  if ( v15 )
  {
    v17 = (struct DXGDEVICE *)((char *)v12 + 144);
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v12 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 40);
      v19 = 1;
      v12 = v43;
    }
    else
    {
      KeLeaveCriticalRegion();
      v19 = 0;
    }
    if ( !v19 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v13)->Header.WaitListHead.Blink);
      DXGPUSHLOCK::AcquireShared(v17);
      DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v13)->Header.WaitListHead.Blink);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v13)->Header.WaitListHead.Blink);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, (const EVENT_DESCRIPTOR *)"g", v35, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 17), 1u);
      DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v13)->Header.WaitListHead.Blink);
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v12, 0, v18, 0);
  if ( v62 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v59, 0LL);
    if ( *(_DWORD *)(v60 + 200) != 1 )
    {
LABEL_78:
      COREACCESS::Release((COREACCESS *)v59);
LABEL_79:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v48);
      if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v40);
      return 3221226166LL;
    }
  }
  if ( v57 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v55, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v56 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v56 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, 72);
      KeWaitForSingleObject((char *)v56 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v56, 0LL);
  }
  v58 = 0LL;
  v57 = 1;
  if ( *(_DWORD *)(v61 + 608) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v55);
    if ( !v62 )
      goto LABEL_79;
    goto LABEL_78;
  }
  v22 = v43;
  v23 = DxgkLock2Internal(v43, v51, (__int64)v9, v10);
  if ( v23 >= 0 && v38 )
  {
    v24 = (_QWORD *)((char *)a1 + 16);
    if ( (unsigned __int64)a1 + 16 >= MmUserProbeAddress )
      v24 = (_QWORD *)MmUserProbeAddress;
    *v24 = v10->pData;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
  if ( v49 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v22 + 40);
    ExReleasePushLockSharedEx((char *)v22 + 144, 0LL);
  }
  else
  {
    ExReleaseResourceLite(*((PERESOURCE *)v22 + 17));
  }
  KeLeaveCriticalRegion();
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v40);
  }
  return (unsigned int)v23;
}

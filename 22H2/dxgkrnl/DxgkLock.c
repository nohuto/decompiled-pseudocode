/*
 * XREFs of DxgkLock @ 0x1C018C3E0
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380760 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007C60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C018763C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C900 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0197978 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0198020 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v7; // rsi
  struct _KTHREAD **v8; // r8
  struct _D3DKMT_LOCK *v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rcx
  int v12; // esi
  struct _KEVENT *v13; // r15
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edi
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // rcx
  char *v22; // rcx
  char *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KEVENT *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-178h] BYREF
  struct DXGDEVICE *v38; // [rsp+58h] [rbp-170h] BYREF
  int v39; // [rsp+60h] [rbp-168h] BYREF
  __int64 v40; // [rsp+68h] [rbp-160h]
  char v41; // [rsp+70h] [rbp-158h]
  struct _D3DKMT_LOCK *v42; // [rsp+78h] [rbp-150h]
  struct _D3DKMT_LOCK v43; // [rsp+80h] [rbp-148h] BYREF
  struct DXGDEVICE *v44; // [rsp+B0h] [rbp-118h] BYREF
  int v45; // [rsp+B8h] [rbp-110h]
  __int64 v46; // [rsp+C0h] [rbp-108h] BYREF
  struct DXGADAPTER *v47; // [rsp+C8h] [rbp-100h]
  char v48; // [rsp+D0h] [rbp-F8h]
  _BYTE v49[8]; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v50[16]; // [rsp+F8h] [rbp-D0h] BYREF
  DXGADAPTER *v51; // [rsp+108h] [rbp-C0h]
  char v52; // [rsp+110h] [rbp-B8h]
  __int64 v53; // [rsp+118h] [rbp-B0h]
  _BYTE v54[16]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v55; // [rsp+148h] [rbp-80h]
  __int64 v56; // [rsp+178h] [rbp-50h]
  char v57; // [rsp+180h] [rbp-48h]

  v42 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2011);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2011);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v8 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( v8 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v8 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v8 = v7;
  }
  if ( !v8 )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_62;
  }
LABEL_7:
  memset(&v43, 0, sizeof(v43));
  if ( v4 )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v43 = *v9;
  }
  else
  {
    v43 = *a1;
  }
  v37 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, v43.hDevice, v8, &v37);
  v10 = v37;
  if ( !v37 )
  {
    WdLogSingleEntry2(2LL, v43.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      v43.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 )
      return 3221225485LL;
    v30 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_62:
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v39);
    return 3221225485LL;
  }
  v44 = v37;
  v11 = *(_QWORD *)(*((_QWORD *)v37 + 2) + 16LL);
  if ( *(int *)(v11 + 2552) >= 0x2000 || *(_BYTE *)(v11 + 2852) )
  {
    v12 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v45 = v12;
  }
  else
  {
    v12 = 0;
    v45 = 0;
  }
  v13 = (struct _KEVENT *)*((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 116) == 2 )
  {
    if ( KeReadStateEvent(v13 + 5) )
      goto LABEL_17;
    v32 = v13 + 5;
LABEL_69:
    KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v13 + 4) )
  {
    v32 = v13 + 4;
    goto LABEL_69;
  }
LABEL_17:
  KeEnterCriticalRegion();
  if ( v12 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 40);
      v14 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v14 = 0;
    }
    if ( !v14 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v10 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
  }
  v15 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL);
  v47 = (struct DXGADAPTER *)v15;
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
  v46 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 152));
  v48 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v37, 0, v16, 0);
  if ( v57 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v54, 0LL);
    if ( *(_DWORD *)(v55 + 200) != 1 )
      goto LABEL_82;
  }
  if ( v52 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v50, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v51 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v51 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventBlockThread, v18, 72);
      KeWaitForSingleObject((char *)v51 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v51, 0LL);
  }
  v53 = 0LL;
  v52 = 1;
  if ( *(_DWORD *)(v56 + 608) == 1 )
  {
    v43.hDevice = 0;
    v19 = DXGDEVICE::Lock(v37, &v43, (struct COREDEVICEACCESS *)v49);
    if ( v19 >= 0 )
    {
      p_pData = &a1->pData;
      if ( v4 )
      {
        if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
          p_pData = (_QWORD *)MmUserProbeAddress;
        *p_pData = v43.pData;
        p_hAllocation = &a1->hAllocation;
        if ( (unsigned __int64)&a1->hAllocation >= MmUserProbeAddress )
          p_hAllocation = (_DWORD *)MmUserProbeAddress;
        *p_hAllocation = v43.hAllocation;
      }
      else
      {
        *p_pData = v43.pData;
        a1->hAllocation = v43.hAllocation;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    v22 = (char *)v47 + 136;
    _InterlockedDecrement((volatile signed __int32 *)v47 + 38);
    ExReleasePushLockSharedEx(v22, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v47 + 2), v47);
    if ( v45 )
    {
      v23 = (char *)v37 + 144;
      _InterlockedDecrement((volatile signed __int32 *)v37 + 40);
      ExReleasePushLockSharedEx(v23, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*((PERESOURCE *)v37 + 17));
    }
    KeLeaveCriticalRegion();
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v39);
    }
    return (unsigned int)v19;
  }
  COREACCESS::Release((COREACCESS *)v50);
  if ( v57 )
LABEL_82:
    COREACCESS::Release((COREACCESS *)v54);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v46);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v44);
  if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v39);
  return 3221226166LL;
}

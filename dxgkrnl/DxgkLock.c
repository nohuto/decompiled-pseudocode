__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v8; // rsi
  struct _KTHREAD **v9; // r8
  struct _D3DKMT_LOCK *v10; // rcx
  struct DXGDEVICE *v11; // rdi
  __int64 v12; // rcx
  int v13; // esi
  struct _KEVENT *v14; // r15
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edi
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // rcx
  char *v23; // rcx
  char *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _KEVENT *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGDEVICE *v38; // [rsp+50h] [rbp-178h] BYREF
  struct DXGDEVICE *v39; // [rsp+58h] [rbp-170h] BYREF
  int v40; // [rsp+60h] [rbp-168h] BYREF
  __int64 v41; // [rsp+68h] [rbp-160h]
  char v42; // [rsp+70h] [rbp-158h]
  struct _D3DKMT_LOCK *v43; // [rsp+78h] [rbp-150h]
  struct _D3DKMT_LOCK v44; // [rsp+80h] [rbp-148h] BYREF
  struct DXGDEVICE *v45; // [rsp+B0h] [rbp-118h] BYREF
  int v46; // [rsp+B8h] [rbp-110h]
  __int64 v47; // [rsp+C0h] [rbp-108h] BYREF
  struct DXGADAPTER *v48; // [rsp+C8h] [rbp-100h]
  char v49; // [rsp+D0h] [rbp-F8h]
  _BYTE v50[8]; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v51[16]; // [rsp+F8h] [rbp-D0h] BYREF
  DXGADAPTER *v52; // [rsp+108h] [rbp-C0h]
  char v53; // [rsp+110h] [rbp-B8h]
  __int64 v54; // [rsp+118h] [rbp-B0h]
  _BYTE v55[16]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v56; // [rsp+148h] [rbp-80h]
  __int64 v57; // [rsp+178h] [rbp-50h]
  char v58; // [rsp+180h] [rbp-48h]

  v43 = a1;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2011);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2011);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_62;
  }
LABEL_7:
  memset(&v44, 0, sizeof(v44));
  if ( v4 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v44 = *v10;
  }
  else
  {
    v44 = *a1;
  }
  v38 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v44.hDevice, v9, &v38);
  v11 = v38;
  if ( !v38 )
  {
    WdLogSingleEntry2(2LL, v44.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      v44.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 )
      return 3221225485LL;
    v31 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_62:
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v40);
    return 3221225485LL;
  }
  v45 = v38;
  v12 = *(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL);
  if ( *(int *)(v12 + 2552) >= 0x2000 || *(_BYTE *)(v12 + 2852) )
  {
    v13 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v46 = v13;
  }
  else
  {
    v13 = 0;
    v46 = 0;
  }
  v14 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
  if ( *((_DWORD *)v11 + 116) == 2 )
  {
    if ( KeReadStateEvent(v14 + 5) )
      goto LABEL_17;
    v33 = v14 + 5;
LABEL_69:
    KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v14 + 4) )
  {
    v33 = v14 + 4;
    goto LABEL_69;
  }
LABEL_17:
  KeEnterCriticalRegion();
  if ( v13 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 40);
      v15 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v15 = 0;
    }
    if ( !v15 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v11 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (const EVENT_DESCRIPTOR *)"g", v35, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
  }
  v16 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
  v48 = (struct DXGADAPTER *)v16;
  _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
  v47 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v16 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 152));
  v49 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v38, 0, v17, 0);
  if ( v58 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v55, 0LL);
    if ( *(_DWORD *)(v56 + 200) != 1 )
      goto LABEL_82;
  }
  if ( v53 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v51, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v52 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)"g", v19, 72);
      KeWaitForSingleObject((char *)v52 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v52, 0LL);
  }
  v54 = 0LL;
  v53 = 1;
  if ( *(_DWORD *)(v57 + 608) == 1 )
  {
    v44.hDevice = 0;
    v20 = DXGDEVICE::Lock(v38, &v44, (struct COREDEVICEACCESS *)v50);
    if ( v20 >= 0 )
    {
      p_pData = &a1->pData;
      if ( v4 )
      {
        if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
          p_pData = (_QWORD *)MmUserProbeAddress;
        *p_pData = v44.pData;
        p_hAllocation = &a1->hAllocation;
        if ( (unsigned __int64)&a1->hAllocation >= MmUserProbeAddress )
          p_hAllocation = (_DWORD *)MmUserProbeAddress;
        *p_hAllocation = v44.hAllocation;
      }
      else
      {
        *p_pData = v44.pData;
        a1->hAllocation = v44.hAllocation;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    v23 = (char *)v48 + 136;
    _InterlockedDecrement((volatile signed __int32 *)v48 + 38);
    ExReleasePushLockSharedEx(v23, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v48 + 2), v48);
    if ( v46 )
    {
      v24 = (char *)v38 + 144;
      _InterlockedDecrement((volatile signed __int32 *)v38 + 40);
      ExReleasePushLockSharedEx(v24, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*((PERESOURCE *)v38 + 17));
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
    return (unsigned int)v20;
  }
  COREACCESS::Release((COREACCESS *)v51);
  if ( v58 )
LABEL_82:
    COREACCESS::Release((COREACCESS *)v55);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v47);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v40);
  return 3221226166LL;
}

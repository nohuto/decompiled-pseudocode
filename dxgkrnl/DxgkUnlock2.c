__int64 __fastcall DxgkUnlock2(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r15
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v8; // rsi
  struct _KTHREAD **v9; // r12
  unsigned int *v10; // r13
  __int64 v11; // rax
  struct DXGDEVICE *v12; // rdi
  char *v13; // r14
  __int64 v14; // rcx
  int v15; // esi
  struct _KEVENT *v16; // r15
  DXGPUSHLOCK *v17; // rsi
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // rdi
  unsigned int v23; // esi
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
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-118h] BYREF
  int v38; // [rsp+58h] [rbp-110h] BYREF
  __int64 v39; // [rsp+60h] [rbp-108h]
  char v40; // [rsp+68h] [rbp-100h]
  __int64 v41; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGDEVICE *v42; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGDEVICE *v43; // [rsp+80h] [rbp-E8h] BYREF
  int v44; // [rsp+88h] [rbp-E0h]
  _BYTE v45[8]; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v46[16]; // [rsp+98h] [rbp-D0h] BYREF
  DXGADAPTER *v47; // [rsp+A8h] [rbp-C0h]
  char v48; // [rsp+B0h] [rbp-B8h]
  __int64 v49; // [rsp+B8h] [rbp-B0h]
  _BYTE v50[16]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-80h]
  __int64 v52; // [rsp+118h] [rbp-50h]
  char v53; // [rsp+120h] [rbp-48h]

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2104);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2104);
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
  v41 = 0LL;
  v10 = (unsigned int *)&v41;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned int *)MmUserProbeAddress;
    v11 = *(_QWORD *)a1;
    v41 = *(_QWORD *)a1;
  }
  else
  {
    v10 = a1;
    LODWORD(v11) = *a1;
  }
  v42 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v11, v9, &v42);
  v12 = v42;
  if ( !v42 )
  {
    WdLogSingleEntry2(2LL, *v10, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      *v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( !v40 )
      return 3221225485LL;
    v30 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_53:
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v38);
    return 3221225485LL;
  }
  v43 = v42;
  v13 = (char *)v42 + 16;
  v14 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL);
  if ( *(int *)(v14 + 2552) >= 0x2000 || *(_BYTE *)(v14 + 2852) )
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  else
    v15 = 0;
  v44 = v15;
  v16 = *(struct _KEVENT **)v13;
  if ( *((_DWORD *)v12 + 116) == 2 )
  {
    if ( KeReadStateEvent(v16 + 5) )
      goto LABEL_16;
    v32 = v16 + 5;
LABEL_60:
    KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
    goto LABEL_16;
  }
  if ( !KeReadStateEvent(v16 + 4) )
  {
    v32 = v16 + 4;
    goto LABEL_60;
  }
LABEL_16:
  if ( v15 )
  {
    v17 = (struct DXGDEVICE *)((char *)v12 + 144);
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v12 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 40);
      v19 = 1;
      v12 = v42;
    }
    else
    {
      KeLeaveCriticalRegion();
      v19 = 0;
    }
    if ( !v19 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v13 + 16LL));
      DXGPUSHLOCK::AcquireShared(v17);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v13 + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v13 + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, (const EVENT_DESCRIPTOR *)"g", v34, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v13 + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v12, 2, v18, 0);
  if ( v53 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v50, 0LL);
    if ( *(_DWORD *)(v51 + 200) != 1 )
      goto LABEL_74;
  }
  if ( v48 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v46, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v47 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v47 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, 72);
      KeWaitForSingleObject((char *)v47 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v47, 0LL);
  }
  v49 = 0LL;
  v48 = 1;
  if ( *(_DWORD *)(v52 + 608) == 1 )
  {
    v22 = v42;
    v23 = DxgkUnlock2Internal(v42);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    if ( v44 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v22 + 40);
      ExReleasePushLockSharedEx((char *)v22 + 144, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*((PERESOURCE *)v22 + 17));
    }
    KeLeaveCriticalRegion();
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v38);
    }
    return v23;
  }
  COREACCESS::Release((COREACCESS *)v46);
  if ( v53 )
LABEL_74:
    COREACCESS::Release((COREACCESS *)v50);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v38);
  return 3221226166LL;
}

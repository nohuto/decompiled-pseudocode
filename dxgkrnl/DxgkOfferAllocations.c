__int64 __fastcall DxgkOfferAllocations(_D3DKMT_OFFERALLOCATIONS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v7; // rsi
  struct _KTHREAD **v8; // rdi
  unsigned __int8 v9; // r15
  _OWORD *p_hDevice; // rcx
  __int64 hDevice; // rsi
  struct DXGDEVICE *v12; // rdi
  char *v13; // r14
  __int64 v14; // rcx
  int v15; // esi
  struct _KEVENT *v16; // r12
  DXGPUSHLOCK *v17; // rsi
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // rdi
  UINT *p_Flags; // rcx
  UINT Value; // eax
  unsigned int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _KEVENT *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  struct DXGDEVICE *v38; // [rsp+50h] [rbp-138h] BYREF
  struct DXGDEVICE *v39; // [rsp+58h] [rbp-130h] BYREF
  int v40; // [rsp+60h] [rbp-128h] BYREF
  __int64 v41; // [rsp+68h] [rbp-120h]
  char v42; // [rsp+70h] [rbp-118h]
  struct DXGDEVICE *v43; // [rsp+78h] [rbp-110h] BYREF
  int v44; // [rsp+80h] [rbp-108h]
  _D3DKMT_OFFERALLOCATIONS v45; // [rsp+88h] [rbp-100h] BYREF
  _BYTE v46[8]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v47[16]; // [rsp+B8h] [rbp-D0h] BYREF
  DXGADAPTER *v48; // [rsp+C8h] [rbp-C0h]
  char v49; // [rsp+D0h] [rbp-B8h]
  __int64 v50; // [rsp+D8h] [rbp-B0h]
  _BYTE v51[16]; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v52; // [rsp+108h] [rbp-80h]
  __int64 v53; // [rsp+138h] [rbp-50h]
  char v54; // [rsp+140h] [rbp-48h]

  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2070);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2070);
  CurrentProcess = PsGetCurrentProcess(v4);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_92;
  }
LABEL_7:
  v9 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v45, 0, sizeof(v45));
  if ( v9 )
  {
    p_hDevice = &a1->hDevice;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v45.hDevice = *p_hDevice;
    *(_OWORD *)&v45.HandleList = p_hDevice[1];
  }
  else
  {
    v45 = *a1;
  }
  v38 = 0LL;
  hDevice = v45.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v45.hDevice, v8, &v38);
  v12 = v38;
  if ( !v38 )
  {
    WdLogSingleEntry2(2LL, hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_92;
  }
  v43 = v38;
  v13 = (char *)v38 + 16;
  v14 = *(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL);
  if ( *(int *)(v14 + 2552) >= 0x2000 || *(_BYTE *)(v14 + 2852) )
  {
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v44 = v15;
  }
  else
  {
    v15 = 0;
    v44 = 0;
  }
  v16 = *(struct _KEVENT **)v13;
  if ( *((_DWORD *)v12 + 116) == 2 )
  {
    if ( KeReadStateEvent(v16 + 5) )
      goto LABEL_16;
    v34 = v16 + 5;
LABEL_64:
    KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
    goto LABEL_16;
  }
  if ( !KeReadStateEvent(v16 + 4) )
  {
    v34 = v16 + 4;
    goto LABEL_64;
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
      v12 = v38;
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
        McTemplateK0q_EtwWriteTransfer(v35, (const EVENT_DESCRIPTOR *)"g", v36, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v13 + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v12, 0, v18, 0);
  if ( v54 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v51, 0LL);
    if ( *(_DWORD *)(v52 + 200) != 1 )
      goto LABEL_78;
  }
  if ( v49 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v47, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v48 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, 72);
      KeWaitForSingleObject((char *)v48 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v48, 0LL);
  }
  v50 = 0LL;
  v49 = 1;
  if ( *(_DWORD *)(v53 + 608) == 1 )
  {
    v22 = v38;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL) + 2096LL) < 0x5010u )
      goto LABEL_34;
    if ( v9 )
    {
      p_Flags = (UINT *)&a1->Flags;
      if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
        p_Flags = (UINT *)MmUserProbeAddress;
      Value = *p_Flags;
      v45.Flags.Value = *p_Flags;
      v22 = v38;
    }
    else
    {
      Value = a1->Flags.Value;
      v45.Flags.Value = Value;
    }
    if ( (Value & 0xFFFFFFFC) == 0 )
    {
LABEL_34:
      v25 = DXGDEVICE::OfferAllocations(v22, &v45, v9);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
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
      if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v40);
      }
      return v25;
    }
    WdLogSingleEntry1(3LL, (unsigned __int64)Value >> 2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_92:
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v40);
    return 3221225485LL;
  }
  COREACCESS::Release((COREACCESS *)v47);
  if ( v54 )
LABEL_78:
    COREACCESS::Release((COREACCESS *)v51);
  WdLogSingleEntry2(3LL, v38, -1073741130LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v37, v40);
  return 3221226166LL;
}

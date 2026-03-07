__int64 __fastcall DxgkReclaimAllocations2(_D3DKMT_RECLAIMALLOCATIONS2 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  struct DXGPROCESS *v8; // rbx
  unsigned __int8 v9; // si
  _D3DKMT_RECLAIMALLOCATIONS2 *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // edi
  struct _KEVENT *v14; // r15
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edi
  _QWORD *p_PagingFenceValue; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KEVENT *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-138h] BYREF
  __int64 v34; // [rsp+58h] [rbp-130h]
  char v35; // [rsp+60h] [rbp-128h]
  struct DXGPAGINGQUEUE *v36; // [rsp+68h] [rbp-120h] BYREF
  DXGPAGINGQUEUE *v37; // [rsp+70h] [rbp-118h] BYREF
  _D3DKMT_RECLAIMALLOCATIONS2 v38; // [rsp+78h] [rbp-110h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-E8h] BYREF
  int v40; // [rsp+A8h] [rbp-E0h]
  __int64 v41; // [rsp+B0h] [rbp-D8h]
  _BYTE v42[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v43[16]; // [rsp+C8h] [rbp-C0h] BYREF
  DXGADAPTER *v44; // [rsp+D8h] [rbp-B0h]
  char v45; // [rsp+E0h] [rbp-A8h]
  __int64 v46; // [rsp+E8h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+108h] [rbp-80h] BYREF
  __int64 v48; // [rsp+118h] [rbp-70h]
  __int64 v49; // [rsp+148h] [rbp-40h]
  char v50; // [rsp+150h] [rbp-38h]

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2071);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v8 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_55;
  }
LABEL_7:
  v9 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v38, 0, sizeof(v38));
  if ( v9 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
    v38 = *v10;
  }
  else
  {
    v38 = *a1;
  }
  v36 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v37, v38.hPagingQueue, v8, &v36, 1);
  if ( !v36 )
  {
    WdLogSingleEntry2(3LL, v38.hPagingQueue, -1073741811LL);
    if ( v37 )
      DXGPAGINGQUEUE::ReleaseReference(v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 )
      return 3221225485LL;
    v27 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_55:
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v33);
    return 3221225485LL;
  }
  v11 = *((_QWORD *)v36 + 2);
  v41 = v11;
  v39 = v11;
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(int *)(v12 + 2552) >= 0x2000 || *(_BYTE *)(v12 + 2852) )
  {
    v13 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v40 = v13;
  }
  else
  {
    v13 = 0;
    v40 = 0;
  }
  v14 = *(struct _KEVENT **)(v11 + 16);
  if ( *(_DWORD *)(v11 + 464) == 2 )
  {
    if ( KeReadStateEvent(v14 + 5) )
      goto LABEL_16;
    v29 = v14 + 5;
LABEL_62:
    KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
    goto LABEL_16;
  }
  if ( !KeReadStateEvent(v14 + 4) )
  {
    v29 = v14 + 4;
    goto LABEL_62;
  }
LABEL_16:
  KeEnterCriticalRegion();
  if ( v13 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 160));
      v16 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v16 = 0;
    }
    if ( !v16 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v11 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v11 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v11 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (const EVENT_DESCRIPTOR *)"g", v31, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v11 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, v11, 0, v15, 0);
  if ( v50 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v47, 0LL);
    if ( *(_DWORD *)(v48 + 200) != 1 )
      goto LABEL_75;
  }
  if ( v45 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v43, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v44 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v44 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (const EVENT_DESCRIPTOR *)"g", v18, 72);
      KeWaitForSingleObject((char *)v44 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v44, 0LL);
  }
  v46 = 0LL;
  v45 = 1;
  if ( *(_DWORD *)(v49 + 608) == 1 )
  {
    v19 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v11, v36, &v38, v9);
    if ( v19 >= 0 )
    {
      if ( v9 )
      {
        p_PagingFenceValue = &a1->PagingFenceValue;
        if ( (unsigned __int64)&a1->PagingFenceValue >= MmUserProbeAddress )
          p_PagingFenceValue = (_QWORD *)MmUserProbeAddress;
        *p_PagingFenceValue = v38.PagingFenceValue;
      }
      else
      {
        a1->PagingFenceValue = v38.PagingFenceValue;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    if ( v40 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 160));
      ExReleasePushLockSharedEx(v11 + 144, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 136));
    }
    KeLeaveCriticalRegion();
    if ( v37 )
      DXGPAGINGQUEUE::ReleaseReference(v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v33);
    }
    return (unsigned int)v19;
  }
  COREACCESS::Release((COREACCESS *)v43);
  if ( v50 )
LABEL_75:
    COREACCESS::Release((COREACCESS *)v47);
  WdLogSingleEntry2(3LL, v11, -1073741130LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v39);
  if ( v37 )
    DXGPAGINGQUEUE::ReleaseReference(v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v32, v33);
  return 3221226166LL;
}

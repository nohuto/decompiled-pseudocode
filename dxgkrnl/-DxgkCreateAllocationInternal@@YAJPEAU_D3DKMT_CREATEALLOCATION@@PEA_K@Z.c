__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct DXGALLOCATION **a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // r14
  struct DXGPROCESS *v8; // r15
  bool v9; // r14
  _D3DKMT_CREATEALLOCATION *v10; // rax
  struct DXGDEVICE *v11; // rbx
  char Flags; // al
  UINT NumAllocations; // edx
  __int64 v14; // rcx
  int v15; // r14d
  struct _KEVENT *v16; // r15
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  void *v23; // r12
  struct DXGDEVICE *v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rax
  OUTPUTDUPL_MGR *v27; // rcx
  DXGGLOBAL *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  DXGSESSIONMGR *v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v36; // edx
  __int64 v37; // rax
  OUTPUTDUPL_MGR *v38; // rcx
  void *v39; // r14
  unsigned int v40; // eax
  unsigned int StandardAllocationDriverData; // ebx
  _DWORD *p_hResource; // rcx
  _DWORD *p_hGlobalShare; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rcx
  char *v45; // rcx
  char *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r14d
  __int64 v56; // rcx
  __int64 v57; // r8
  struct _KEVENT *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r8
  struct DXGDEVICE *v62; // rbx
  __int64 v63; // r8
  unsigned __int8 v64; // [rsp+80h] [rbp-218h]
  struct DXGDEVICE *v65; // [rsp+88h] [rbp-210h] BYREF
  struct DXGPROCESS *v66; // [rsp+90h] [rbp-208h]
  int v67; // [rsp+98h] [rbp-200h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-1F8h]
  char v69; // [rsp+A8h] [rbp-1F0h]
  void *v70; // [rsp+B0h] [rbp-1E8h]
  struct DXGDEVICE *v71; // [rsp+B8h] [rbp-1E0h] BYREF
  struct DXGALLOCATION **v72; // [rsp+C0h] [rbp-1D8h]
  struct DXGRESOURCE *v73; // [rsp+C8h] [rbp-1D0h]
  unsigned int v74[4]; // [rsp+D0h] [rbp-1C8h] BYREF
  _D3DKMT_CREATEALLOCATION v75; // [rsp+E0h] [rbp-1B8h] BYREF
  void *v76; // [rsp+130h] [rbp-168h] BYREF
  struct DXGDEVICE *v77; // [rsp+138h] [rbp-160h] BYREF
  int v78; // [rsp+140h] [rbp-158h]
  __int64 v79; // [rsp+148h] [rbp-150h] BYREF
  struct DXGADAPTER *v80; // [rsp+150h] [rbp-148h]
  char v81; // [rsp+158h] [rbp-140h]
  _QWORD v82[3]; // [rsp+160h] [rbp-138h] BYREF
  int Size; // [rsp+190h] [rbp-108h] BYREF
  __int64 v84; // [rsp+194h] [rbp-104h]
  int v85; // [rsp+19Ch] [rbp-FCh]
  __int64 v86; // [rsp+1A0h] [rbp-F8h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v87; // [rsp+1A8h] [rbp-F0h] BYREF
  _BYTE v88[8]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v89[16]; // [rsp+1C8h] [rbp-D0h] BYREF
  DXGADAPTER *v90; // [rsp+1D8h] [rbp-C0h]
  char v91; // [rsp+1E0h] [rbp-B8h]
  __int64 v92; // [rsp+1E8h] [rbp-B0h]
  _BYTE v93[16]; // [rsp+208h] [rbp-90h] BYREF
  __int64 v94; // [rsp+218h] [rbp-80h]
  __int64 v95; // [rsp+248h] [rbp-50h]
  char v96; // [rsp+250h] [rbp-48h]

  v72 = a2;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2003);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    v66 = v8;
    if ( v8 )
      goto LABEL_6;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v8 = v7;
    v66 = v7;
    goto LABEL_6;
  }
  v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  v66 = v8;
  if ( !v8 )
    goto LABEL_5;
LABEL_6:
  v73 = v8;
  v9 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v64 = v9;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  memset(&v75, 0, sizeof(v75));
  memset(&v87, 0, sizeof(v87));
  if ( v9 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v75 = *v10;
  }
  else
  {
    v75 = *a1;
  }
  v71 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v65, v75.hDevice, (struct _KTHREAD **)v8, &v71);
  v11 = v71;
  if ( !v71 )
  {
    WdLogSingleEntry2(2LL, v75.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v75.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  Flags = (char)v75.Flags;
  if ( (*(_DWORD *)&v75.Flags & 0x100000) != 0 )
  {
    if ( (*(_DWORD *)&v75.Flags & 0x10000) != 0 )
    {
      WdLogSingleEntry1(2LL, 8939LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NoKmdAccess cannot be used with StandardAllocation",
        8939LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_197;
    }
    if ( !g_OSTestSigningEnabled )
    {
      WdLogSingleEntry1(2LL, 8944LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NoKmdAccess can be used only with testsigning",
        8944LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_197;
    }
  }
  NumAllocations = v75.NumAllocations;
  if ( v75.NumAllocations > 0x682AA )
  {
    WdLogSingleEntry3(3LL, v71, v75.NumAllocations, -1073741811LL);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( (*((_DWORD *)v8 + 106) & 0x100) == 0
    && ((*(_BYTE *)&v75.Flags & 8) != 0
     || (*(_WORD *)&v75.Flags & 0x100) != 0
     || (*(_WORD *)&v75.Flags & 0x1000) != 0
     || (*(_WORD *)&v75.Flags & 0x200) != 0) )
  {
    WdLogSingleEntry2(3LL, v71, -1073741811LL);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( (*(_BYTE *)&v75.Flags & 0x20) != 0
    && (*(_DWORD *)&v75.Flags & 0x10000) == 0
    && (*((_DWORD *)v8 + 106) & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, v71, -1073741811LL);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( (*(_DWORD *)&v75.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&v75.Flags & 0x10000) == 0 )
    {
      WdLogSingleEntry2(3LL, v71, -1073741811LL);
      if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_197;
    }
  }
  else if ( (*(_DWORD *)&v75.Flags & 0x10000) == 0 )
  {
    goto LABEL_22;
  }
  v55 = ValidateStandardAllocationParams(&v75, &v87, v9);
  if ( v55 < 0 )
  {
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v67);
    return (unsigned int)v55;
  }
  Flags = (char)v75.Flags;
  NumAllocations = v75.NumAllocations;
LABEL_22:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( !v75.hResource && !NumAllocations )
  {
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  v77 = v11;
  v14 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
  if ( *(int *)(v14 + 2552) >= 0x2000 || *(_BYTE *)(v14 + 2852) )
  {
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v78 = v15;
  }
  else
  {
    v15 = 0;
    v78 = 0;
  }
  v16 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
  if ( *((_DWORD *)v11 + 116) == 2 )
  {
    if ( KeReadStateEvent(v16 + 5) )
      goto LABEL_29;
    v58 = v16 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v16 + 4) )
      goto LABEL_29;
    v58 = v16 + 4;
  }
  KeWaitForSingleObject(v58, Executive, 0, 0, 0LL);
LABEL_29:
  KeEnterCriticalRegion();
  if ( v15 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 40);
      v17 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v17 = 0;
    }
    if ( !v17 )
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
      McTemplateK0q_EtwWriteTransfer(v59, (const EVENT_DESCRIPTOR *)"g", v60, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
  }
  v18 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
  v80 = (struct DXGADAPTER *)v18;
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  v79 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v18 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 152));
  v81 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v88, (__int64)v71, 2, v19, 0);
  if ( v96 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v93, 0LL);
    if ( *(_DWORD *)(v94 + 200) != 1 )
    {
LABEL_174:
      COREACCESS::Release((COREACCESS *)v93);
LABEL_175:
      WdLogSingleEntry2(3LL, v71, -1073741130LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v79);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
      if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v61, v67);
      return 3221226166LL;
    }
  }
  if ( v91 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v89, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v90 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v90 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, 72);
      KeWaitForSingleObject((char *)v90 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v90, 0LL);
  }
  v92 = 0LL;
  v91 = 1;
  if ( *(_DWORD *)(v95 + 608) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v89);
    if ( !v96 )
      goto LABEL_175;
    goto LABEL_174;
  }
  v22 = 8LL * v75.NumAllocations;
  if ( !is_mul_ok(v75.NumAllocations, 8uLL) )
    v22 = -1LL;
  v23 = (void *)operator new[](v22, 0x4B677844u, 256LL);
  v70 = v23;
  if ( v23 )
  {
    v24 = v71;
    v25 = *((_QWORD *)v71 + 235);
    if ( !v25 )
    {
      v25 = *(_QWORD *)(*((_QWORD *)v71 + 2) + 16LL);
      if ( !v25 )
      {
        WdLogSingleEntry1(1LL, 11140LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11140LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v26 = *(_QWORD *)(v25 + 2920);
    if ( !v26
      || (v27 = *(OUTPUTDUPL_MGR **)(v26 + 120)) == 0LL
      || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v27, v24) >= 0 )
    {
      v82[0] = *(_QWORD *)(v25 + 404);
      v82[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
      v82[2] = v24;
      v28 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        v28,
        lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_,
        v82);
    }
    v31 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v31
      && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v30, v29, v32, v33),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                              v31,
                                              CurrentProcessSessionId)) != 0LL) )
    {
      v37 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v37 )
      {
        v38 = *(OUTPUTDUPL_MGR **)(v37 + 120);
        if ( v38 )
          OUTPUTDUPL_MGR::CleanUpPendingList(v38, v24);
      }
      else
      {
        WdLogSingleEntry1(2LL, 3909LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL",
          3909LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 3902LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3902LL, 0LL, 0LL, 0LL, 0LL);
    }
    v75.hGlobalShare = 0;
    v75.hDevice = 0;
    v39 = 0LL;
    v76 = 0LL;
    v40 = 0;
    v74[0] = 0;
    if ( (*(_DWORD *)&v75.Flags & 0x10000) == 0 )
      goto LABEL_55;
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 2820LL) >= 2000 )
    {
      v86 = 0LL;
      Size = v87.ExistingHeapData.Size;
      v84 = 1LL;
      v85 = 7;
      StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v24, v36, &Size, v74, &v76);
      if ( (StandardAllocationDriverData & 0x80000000) != 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v79);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
        if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
        if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return StandardAllocationDriverData;
LABEL_210:
        McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v67);
        return StandardAllocationDriverData;
      }
      v39 = v76;
      v40 = v74[0];
LABEL_55:
      StandardAllocationDriverData = DXGDEVICE::CreateAllocation(
                                       v24,
                                       &v75,
                                       v64,
                                       0,
                                       0LL,
                                       0LL,
                                       (struct COREDEVICEACCESS *)v88,
                                       0,
                                       0LL,
                                       0LL,
                                       0LL,
                                       (unsigned __int64 *)v72,
                                       &v87,
                                       v39,
                                       v40);
      if ( v64 )
      {
        p_hResource = &a1->hResource;
        if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
          p_hResource = (_DWORD *)MmUserProbeAddress;
        *p_hResource = v75.hResource;
        p_hGlobalShare = &a1->hGlobalShare;
        if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
          p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
        *p_hGlobalShare = v75.hGlobalShare;
        p_Flags = &a1->Flags;
        if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
          p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
        *p_Flags = v75.Flags;
      }
      else
      {
        a1->hResource = v75.hResource;
        a1->hGlobalShare = v75.hGlobalShare;
        a1->Flags = v75.Flags;
      }
      operator delete(v23);
      operator delete(v39);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
      v45 = (char *)v80 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v80 + 38);
      ExReleasePushLockSharedEx(v45, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v80 + 2), v80);
      if ( v78 )
      {
        v46 = (char *)v71 + 144;
        _InterlockedDecrement((volatile signed __int32 *)v71 + 40);
        ExReleasePushLockSharedEx(v46, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v71 + 17));
      }
      KeLeaveCriticalRegion();
      if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return StandardAllocationDriverData;
      goto LABEL_210;
    }
    WdLogSingleEntry2(2LL, v24, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Creating StandardAllocation only supported on WDDM2.0+, returning 0x%I64x",
      (__int64)v24,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v79);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
    if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( !v69 )
      return 3221225485LL;
    v53 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_197:
    McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v67);
    return 3221225485LL;
  }
  v62 = v71;
  WdLogSingleEntry3(6LL, v71, v75.NumAllocations, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Device 0x%I64x: Out of memory allocating destroy handle table with 0x%I64x elements, returning 0x%I64x",
    (__int64)v62,
    v75.NumAllocations,
    -1073741801LL,
    0LL,
    0LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v79);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
  if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v63, v67);
  return 3221225495LL;
}

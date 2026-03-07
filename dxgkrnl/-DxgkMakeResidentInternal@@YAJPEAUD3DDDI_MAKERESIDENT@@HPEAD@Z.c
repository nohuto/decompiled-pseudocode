__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, char *a3)
{
  int v4; // ebx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rsi
  struct DXGPROCESS *v11; // rax
  struct D3DDDI_MAKERESIDENT *v12; // rcx
  struct D3DDDI_MAKERESIDENT *v13; // r12
  struct DXGPAGINGQUEUE *v14; // r14
  unsigned __int64 NumAllocations; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct DXGALLOCATIONREFERENCE *v18; // rsi
  unsigned __int64 v19; // rbx
  _BYTE *Pool2; // rcx
  unsigned int *AllocationList; // r15
  __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // ebx
  struct _KEVENT *v25; // rsi
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  char v31; // bl
  __int64 v32; // rax
  __int64 v33; // rax
  struct DXGPROCESS *v34; // rsi
  struct DXGPROCESS *v35; // r13
  unsigned int *v36; // rsi
  unsigned int *v37; // rcx
  unsigned int v38; // r8d
  struct _EX_RUNDOWN_REF *v39; // rax
  ULONG_PTR Count; // r8
  ULONG_PTR v41; // rbx
  ULONG_PTR *v42; // rcx
  struct _EX_RUNDOWN_REF **v43; // rcx
  struct DXGTHREAD *DxgThread; // rax
  struct DXGPAGINGQUEUE *v45; // rsi
  __int64 v46; // r14
  __int64 Value; // r8
  int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rdx
  struct D3DDDI_MAKERESIDENT *v51; // r13
  UINT64 *p_NumBytesToTrim; // rsi
  UINT64 *p_PagingFenceValue; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  int Resident; // ebx
  __int64 v57; // r8
  int v58; // r8d
  struct D3DDDI_MAKERESIDENT *v59; // r9
  _QWORD *v60; // rcx
  _QWORD *v61; // rcx
  __int64 v62; // rcx
  DXGALLOCATIONREFERENCE *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  DXGPAGINGQUEUE *v72; // rcx
  __int64 v73; // rax
  bool v74; // cf
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  DXGALLOCATIONREFERENCE *v77; // rbx
  struct _KEVENT *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // eax
  char *v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // r8
  struct DXGTHREAD *v85; // rax
  struct _ETHREAD *v86; // rbx
  KSPIN_LOCK *v87; // rax
  __int64 v88; // r15
  unsigned int v89; // r14d
  struct D3DDDI_MAKERESIDENT_FLAGS v90; // ebx
  unsigned int v91; // esi
  unsigned int HostProcess; // eax
  __int64 v93; // rcx
  __int64 v94; // r8
  unsigned int v95[2]; // [rsp+28h] [rbp-490h]
  struct DXGALLOCATIONREFERENCE *v96; // [rsp+30h] [rbp-488h]
  char v97; // [rsp+50h] [rbp-468h]
  int v98; // [rsp+58h] [rbp-460h] BYREF
  __int64 v99; // [rsp+60h] [rbp-458h]
  char v100; // [rsp+68h] [rbp-450h]
  struct _EX_RUNDOWN_REF *v101; // [rsp+70h] [rbp-448h] BYREF
  DXGPAGINGQUEUE *v102; // [rsp+78h] [rbp-440h] BYREF
  struct D3DDDI_MAKERESIDENT *v103; // [rsp+80h] [rbp-438h]
  _BYTE *v104; // [rsp+88h] [rbp-430h]
  struct DXGPAGINGQUEUE *v105; // [rsp+90h] [rbp-428h] BYREF
  struct DXGPROCESS *v106; // [rsp+98h] [rbp-420h]
  struct D3DDDI_MAKERESIDENT *v107; // [rsp+A0h] [rbp-418h]
  __int64 v108; // [rsp+A8h] [rbp-410h] BYREF
  int v109; // [rsp+B0h] [rbp-408h]
  unsigned int v110; // [rsp+B8h] [rbp-400h]
  struct _EX_RUNDOWN_REF **v111; // [rsp+C0h] [rbp-3F8h]
  struct DXGTHREAD *v112; // [rsp+C8h] [rbp-3F0h] BYREF
  ULONG_PTR *v113; // [rsp+D0h] [rbp-3E8h]
  struct DXGALLOCATIONREFERENCE *v114; // [rsp+D8h] [rbp-3E0h]
  __int64 v115; // [rsp+E0h] [rbp-3D8h]
  unsigned int *v116; // [rsp+E8h] [rbp-3D0h]
  struct D3DDDI_MAKERESIDENT *v117; // [rsp+F0h] [rbp-3C8h]
  _BYTE v118[24]; // [rsp+F8h] [rbp-3C0h] BYREF
  __int128 v119; // [rsp+110h] [rbp-3A8h] BYREF
  __int128 v120; // [rsp+120h] [rbp-398h]
  __int128 v121; // [rsp+130h] [rbp-388h]
  PVOID P; // [rsp+140h] [rbp-378h]
  _BYTE v123[320]; // [rsp+148h] [rbp-370h] BYREF
  int v124; // [rsp+288h] [rbp-230h]
  char v125[8]; // [rsp+290h] [rbp-228h] BYREF
  _BYTE v126[16]; // [rsp+298h] [rbp-220h] BYREF
  DXGADAPTER *v127; // [rsp+2A8h] [rbp-210h]
  char v128; // [rsp+2B0h] [rbp-208h]
  char *v129; // [rsp+2B8h] [rbp-200h]
  char v130[24]; // [rsp+2C0h] [rbp-1F8h] BYREF
  _BYTE v131[16]; // [rsp+2D8h] [rbp-1E0h] BYREF
  __int64 v132; // [rsp+2E8h] [rbp-1D0h]
  __int64 v133; // [rsp+318h] [rbp-1A0h]
  char v134; // [rsp+320h] [rbp-198h]
  DXGALLOCATIONREFERENCE *v135; // [rsp+330h] [rbp-188h] BYREF
  _BYTE v136[320]; // [rsp+338h] [rbp-180h] BYREF
  unsigned int v137; // [rsp+478h] [rbp-40h]

  v4 = a2;
  v107 = a1;
  v117 = a1;
  v98 = -1;
  v6 = 0;
  v99 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v100 = 1;
    v98 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2115);
  }
  else
  {
    v100 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v98, 2115);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    v106 = v11;
    if ( v11 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  v106 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v4 = a2;
LABEL_5:
    v11 = v10;
    v106 = v10;
    goto LABEL_6;
  }
  v4 = a2;
LABEL_6:
  if ( !v11 )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
    if ( !v100 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_183;
  }
LABEL_7:
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v103 = 0LL;
  if ( v4 )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v119 = *(_OWORD *)&v12->hPagingQueue;
    v120 = *(_OWORD *)&v12->PriorityList;
    v121 = *(_OWORD *)&v12->PagingFenceValue;
    v13 = (struct D3DDDI_MAKERESIDENT *)&v119;
    v103 = (struct D3DDDI_MAKERESIDENT *)&v119;
    v11 = v106;
  }
  else
  {
    v13 = a1;
    v103 = a1;
  }
  if ( !v13->NumAllocations )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
    if ( !v100 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_183;
  }
  if ( !v13->AllocationList )
  {
    WdLogSingleEntry1(3LL, 500LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
    if ( !v100 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_183;
  }
  if ( v13->Flags.Value >= 4 )
  {
    WdLogSingleEntry1(3LL, 507LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
    if ( !v100 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_183;
  }
  v105 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v102, v13->hPagingQueue, v11, &v105, 1);
  v14 = v105;
  if ( !v105 )
  {
    WdLogSingleEntry2(3LL, v13->hPagingQueue, -1073741811LL);
    v72 = v102;
    if ( v102 )
      goto LABEL_120;
    goto LABEL_121;
  }
  v135 = 0LL;
  v137 = 0;
  P = 0LL;
  v124 = 0;
  NumAllocations = v13->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v135 = (DXGALLOCATIONREFERENCE *)v136;
    if ( (_DWORD)NumAllocations )
    {
      v16 = 0LL;
      v17 = (unsigned int)NumAllocations;
      do
      {
        *(_QWORD *)((char *)v135 + v16) = 0LL;
        v16 += 8LL;
        --v17;
      }
      while ( v17 );
    }
LABEL_19:
    v137 = NumAllocations;
    v18 = v135;
    goto LABEL_20;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 8 )
  {
    v73 = 8 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 8uLL) )
      v73 = -1LL;
    v74 = __CFADD__(v73, 8LL);
    v75 = v73 + 8;
    if ( v74 )
      v75 = -1LL;
    v76 = operator new[](v75, 0x4B677844u, 256LL);
    if ( v76 )
    {
      *(_QWORD *)v76 = NumAllocations;
      v77 = (DXGALLOCATIONREFERENCE *)(v76 + 8);
      `vector constructor iterator'(
        (char *)(v76 + 8),
        8LL,
        NumAllocations,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v135 = v77;
    }
    goto LABEL_19;
  }
  v18 = 0LL;
LABEL_20:
  v114 = v18;
  v19 = v13->NumAllocations;
  if ( (unsigned int)v19 > 0x28 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
    {
      Pool2 = 0LL;
      v104 = 0LL;
      goto LABEL_25;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v19, 1265072196LL);
    P = Pool2;
    goto LABEL_23;
  }
  Pool2 = v123;
  v104 = v123;
  P = v123;
  if ( (_DWORD)v19 )
  {
    memset(v123, 0, 8LL * (unsigned int)v19);
    Pool2 = P;
LABEL_23:
    v104 = Pool2;
  }
  v124 = v19;
LABEL_25:
  if ( !v18 || !Pool2 )
  {
    WdLogSingleEntry1(6LL, 542LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate storage to validate input",
      542LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v123 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v124 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v135);
    if ( v102 )
      DXGPAGINGQUEUE::ReleaseReference(v102);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
    if ( v100 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v93, &EventProfilerExit, v94, v98);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v13->AllocationList;
  v116 = &AllocationList[v13->NumAllocations];
  v111 = (struct _EX_RUNDOWN_REF **)v18;
  v113 = (ULONG_PTR *)Pool2;
  v22 = *((_QWORD *)v14 + 2);
  v115 = v22;
  v108 = v22;
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( *(int *)(v23 + 2552) >= 0x2000 || *(_BYTE *)(v23 + 2852) )
    v24 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  else
    v24 = 0;
  v109 = v24;
  v25 = *(struct _KEVENT **)(v22 + 16);
  if ( *(_DWORD *)(v22 + 464) == 2 )
  {
    if ( KeReadStateEvent(v25 + 5) )
      goto LABEL_31;
    v78 = v25 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v25 + 4) )
      goto LABEL_31;
    v78 = v25 + 4;
  }
  KeWaitForSingleObject(v78, Executive, 0, 0, 0LL);
LABEL_31:
  KeEnterCriticalRegion();
  if ( v24 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v22 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 160));
      v27 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v27 = 0;
    }
    if ( !v27 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v79, (const EVENT_DESCRIPTOR *)"g", v80, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v125, v22, 0, v26, 0);
  if ( v134 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v131, 0LL);
    if ( *(_DWORD *)(v132 + 200) != 1 )
      goto LABEL_155;
  }
  if ( v128 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v126, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v127 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v127 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (const EVENT_DESCRIPTOR *)"g", v29, 72);
      KeWaitForSingleObject((char *)v127 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v127, a3);
  }
  v129 = 0LL;
  if ( a3 )
  {
    v81 = RtlStringCbCopyA(v130, 17LL, a3);
    v82 = v130;
    if ( v81 < 0 )
      v82 = v129;
    v129 = v82;
  }
  v128 = 1;
  if ( *(_DWORD *)(v133 + 608) == 1 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
    v31 = *(_BYTE *)(v30 + 209);
    v97 = v31;
    v32 = PsGetCurrentProcess(v30);
    v33 = PsGetProcessDxgProcess(v32);
    v34 = (struct DXGPROCESS *)v33;
    if ( !v33 || (*(_DWORD *)(v33 + 424) & 0x80) != 0 )
    {
      v85 = DXGTHREAD::GetCurrent();
      if ( v85 )
      {
        v35 = (struct DXGPROCESS *)*((_QWORD *)v85 + 3);
        if ( v35 )
          goto LABEL_47;
      }
      else
      {
        v86 = KeGetCurrentThread();
        v87 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v35 = DXGGLOBAL::SearchDxgThreadList(v87, v86);
        if ( v35 )
        {
          v31 = v97;
          goto LABEL_47;
        }
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
        v31 = v97;
      }
    }
    v35 = v34;
LABEL_47:
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v118, v35);
    v36 = v116;
    while ( AllocationList != v36 )
    {
      if ( a2 )
      {
        v37 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v37 = (unsigned int *)MmUserProbeAddress;
        v38 = *v37;
        v110 = *v37;
      }
      else
      {
        v38 = *AllocationList;
        v110 = *AllocationList;
      }
      DXGPROCESS::GetAllocationUnsafe((__int64)v35, (DXGALLOCATIONREFERENCE *)&v101, v38);
      v39 = v101;
      if ( !v101 )
      {
        WdLogSingleEntry1(2LL, 0LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hAllocation specified: 0x%I64x, returning 0x%I64x",
          (__int64)v101,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
        if ( P != v123 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v124 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v135);
        v72 = v102;
        if ( !v102 )
          goto LABEL_121;
LABEL_120:
        DXGPAGINGQUEUE::ReleaseReference(v72);
LABEL_121:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
        if ( !v100 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225485LL;
LABEL_183:
        McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v98);
        return 3221225485LL;
      }
      Count = v101[1].Count;
      if ( Count != v22 )
      {
        WdLogSingleEntry2(2LL, v22, Count);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between paging queue device and allocation device. Paging Queue Device: 0x%I64x, Allocation Device: 0x%I64x",
          v22,
          v101[1].Count,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v101);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
        if ( P != v123 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v124 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v135);
        if ( v102 )
          DXGPAGINGQUEUE::ReleaseReference(v102);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
        if ( !v100 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225485LL;
        goto LABEL_183;
      }
      if ( !v31 )
      {
        v41 = v101[3].Count;
        if ( !v41 )
        {
          WdLogSingleEntry1(3LL, v101);
          v39 = v101;
        }
        v42 = v113;
        *v113 = v41;
        v113 = v42 + 1;
        v31 = v97;
      }
      if ( *v111 )
      {
        ExReleaseRundownProtection(*v111 + 11);
        v39 = v101;
      }
      v43 = v111;
      *v111 = v39;
      v101 = 0LL;
      v111 = v43 + 1;
      ++AllocationList;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
      {
        v112 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v112) >= 0 )
        {
          DxgThread = v112;
          if ( v112 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v112 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
    if ( v31 )
    {
      v88 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
      v89 = v13->NumAllocations;
      v90.0 = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v13->Flags.Value;
      v91 = *((_DWORD *)v105 + 7);
      HostProcess = DXGPROCESS::GetHostProcess(v106);
      v51 = v103;
      Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v88 + 4472),
                   HostProcess,
                   0,
                   v91,
                   v90,
                   v89,
                   v114,
                   &v103->PagingFenceValue,
                   &v103->NumBytesToTrim);
    }
    else
    {
      v45 = v105;
      v46 = *((_QWORD *)v105 + 2);
      if ( !*(_BYTE *)(v46 + 1903)
        && (*(_DWORD *)(v46 + 464) != 2 || *(int *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL) + 2820LL) < 2000) )
      {
        WdLogSingleEntry1(2LL, v105);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Calling MakeResident on a device that was not created with the UMD residency flag. Device=0x%p",
          (__int64)v45,
          0LL,
          0LL,
          0LL,
          0LL);
        Resident = -1073741637;
        v51 = v103;
        v58 = a2;
        goto LABEL_98;
      }
      Value = v13->Flags.Value;
      v48 = v13->Flags.Value & 1 | 2;
      if ( (Value & 2) == 0 )
        v48 = v13->Flags.Value & 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        LODWORD(v96) = v13->Flags.0;
        v95[0] = v13->NumAllocations;
        McTemplateK0pxqt_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)v105 + 5) + 32LL),
          &EventMakeResidentBegin,
          Value,
          v105,
          *(_QWORD *)(*((_QWORD *)v105 + 5) + 32LL),
          *(_QWORD *)v95,
          v96);
      }
      v49 = *(_QWORD *)(v46 + 16);
      v50 = *((_QWORD *)v45 + 4);
      v51 = v103;
      p_NumBytesToTrim = &v103->NumBytesToTrim;
      p_PagingFenceValue = &v103->PagingFenceValue;
      Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(v49 + 760) + 8LL) + 768LL))(
                   *(_QWORD *)(v49 + 768),
                   v50,
                   v104,
                   v13->NumAllocations,
                   v48,
                   &v103->PagingFenceValue,
                   &v103->NumBytesToTrim);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
        McTemplateK0qxx_EtwWriteTransfer(v55, v54, v57, Resident, *p_NumBytesToTrim, *p_PagingFenceValue);
    }
    v58 = a2;
    if ( Resident >= 0 && a2 )
    {
      v59 = v107;
      v60 = &v107->PagingFenceValue;
      if ( (unsigned __int64)&v107->PagingFenceValue >= MmUserProbeAddress )
        v60 = (_QWORD *)MmUserProbeAddress;
      *v60 = v51->PagingFenceValue;
      goto LABEL_79;
    }
LABEL_98:
    v59 = v107;
LABEL_79:
    if ( v58 )
    {
      v61 = &v59->NumBytesToTrim;
      if ( (unsigned __int64)&v59->NumBytesToTrim >= MmUserProbeAddress )
        v61 = (_QWORD *)MmUserProbeAddress;
      *v61 = v51->NumBytesToTrim;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
    if ( v109 )
    {
      v62 = v108 + 144;
      _InterlockedDecrement((volatile signed __int32 *)(v108 + 160));
      ExReleasePushLockSharedEx(v62, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v108 + 136));
    }
    KeLeaveCriticalRegion();
    if ( P != v123 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v124 = 0;
    v63 = v135;
    if ( v135 == (DXGALLOCATIONREFERENCE *)v136 )
    {
      if ( v137 )
      {
        while ( 1 )
        {
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v63 + v6++);
          if ( v6 >= v137 )
            break;
          v63 = v135;
        }
      }
    }
    else if ( v135 )
    {
      DXGALLOCATIONREFERENCE::`vector deleting destructor'(v135);
    }
    if ( v102 )
      DXGPAGINGQUEUE::ReleaseReference(v102);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
    if ( v100 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v98);
    return (unsigned int)Resident;
  }
  COREACCESS::Release((COREACCESS *)v126);
  if ( v134 )
LABEL_155:
    COREACCESS::Release((COREACCESS *)v131);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v125);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
  if ( P != v123 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v124 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v135);
  if ( v102 )
    DXGPAGINGQUEUE::ReleaseReference(v102);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v98);
  if ( v100 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v83, &EventProfilerExit, v84, v98);
  return 3221226166LL;
}

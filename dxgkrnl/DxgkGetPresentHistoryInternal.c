__int64 __fastcall DxgkGetPresentHistoryInternal(ULONG64 a1, int a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // r14
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  struct DXGADAPTER *v15; // r14
  int PairingAdapters; // eax
  __int64 v17; // rsi
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  signed __int64 v21; // rax
  struct DXGADAPTER *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  DXGSESSIONMGR *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // r14d
  unsigned int v42; // r12d
  int v43; // edi
  unsigned int v44; // eax
  unsigned int v45; // r15d
  __int64 v46; // rcx
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v47; // rsi
  D3DKMT_PRESENT_MODEL v48; // eax
  int v49; // r15d
  char *v50; // r14
  __int64 v51; // rdi
  ULONG64 v52; // r14
  LONG v53; // r15d
  unsigned int i; // r14d
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v55; // rsi
  char v56; // di
  D3DKMT_PRESENT_MODEL Model; // edx
  __int64 hLogicalSurface; // rcx
  __int64 Value; // r8
  UINT CustomDuration; // r9d
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned int v64; // r15d
  struct DXGADAPTER *v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v71; // r8
  int v72; // r9d
  _OWORD *v73; // rax
  _DWORD *v74; // rdx
  _DWORD *v75; // rdx
  unsigned int v76; // eax
  int v77; // r9d
  int v78; // r9d
  unsigned int NumRects; // r15d
  unsigned int VidPnSourceId; // r15d
  UINT64 v81; // r14
  CPushLock *v82; // rdi
  __int64 v83; // r14
  char *v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rdx
  UINT64 CompositionBindingId; // r14
  union _LARGE_INTEGER *v89; // rsi
  unsigned int v90; // edi
  __int64 v91; // rax
  void *v92; // r9
  char *v93; // rcx
  ULONG64 v94; // r14
  _DWORD *v95; // rdx
  _DWORD *v96; // rdx
  _DWORD *v97; // rdx
  UINT64 FenceValue; // rdi
  char v99; // al
  void (__fastcall *v100)(_QWORD *, _QWORD); // rdi
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 *v105; // [rsp+28h] [rbp-1E0h]
  unsigned __int8 v106[8]; // [rsp+30h] [rbp-1D8h]
  __int64 v107; // [rsp+40h] [rbp-1C8h]
  __int64 v108; // [rsp+48h] [rbp-1C0h]
  int v109; // [rsp+64h] [rbp-1A4h]
  int v110; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v111; // [rsp+70h] [rbp-198h]
  char v112; // [rsp+78h] [rbp-190h]
  int v113; // [rsp+80h] [rbp-188h]
  _QWORD v114[2]; // [rsp+88h] [rbp-180h] BYREF
  struct DXGADAPTER *v115; // [rsp+98h] [rbp-170h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v116; // [rsp+A0h] [rbp-168h]
  __int64 v117; // [rsp+A8h] [rbp-160h] BYREF
  char v118; // [rsp+B0h] [rbp-158h]
  unsigned int v119; // [rsp+B8h] [rbp-150h] BYREF
  unsigned int v120; // [rsp+BCh] [rbp-14Ch]
  int v121; // [rsp+C0h] [rbp-148h]
  int v122; // [rsp+C4h] [rbp-144h]
  unsigned int v123; // [rsp+C8h] [rbp-140h]
  int v124; // [rsp+CCh] [rbp-13Ch]
  struct DXGPROCESS *v125; // [rsp+D0h] [rbp-138h]
  char *v126; // [rsp+D8h] [rbp-130h]
  void *v127; // [rsp+E0h] [rbp-128h]
  struct DXGADAPTER *v128; // [rsp+E8h] [rbp-120h] BYREF
  _QWORD v129[2]; // [rsp+F8h] [rbp-110h] BYREF
  unsigned int v130; // [rsp+108h] [rbp-100h]
  unsigned int v131; // [rsp+10Ch] [rbp-FCh]
  ULONG64 v132; // [rsp+110h] [rbp-F8h]
  __int64 v133; // [rsp+118h] [rbp-F0h] BYREF
  char v134; // [rsp+120h] [rbp-E8h]
  struct DXGADAPTER *v135; // [rsp+128h] [rbp-E0h] BYREF
  char *v136; // [rsp+130h] [rbp-D8h]
  char v137[8]; // [rsp+138h] [rbp-D0h] BYREF
  __int64 v138; // [rsp+140h] [rbp-C8h]
  int v139; // [rsp+148h] [rbp-C0h]
  int v140; // [rsp+150h] [rbp-B8h]
  unsigned __int64 v141; // [rsp+158h] [rbp-B0h] BYREF
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v142; // [rsp+160h] [rbp-A8h]
  unsigned int v143[4]; // [rsp+168h] [rbp-A0h]
  __int128 v144; // [rsp+178h] [rbp-90h]
  _BYTE v145[16]; // [rsp+190h] [rbp-78h] BYREF
  DXGADAPTER *v146; // [rsp+1A0h] [rbp-68h]
  char v147; // [rsp+1A8h] [rbp-60h]
  __int64 v148; // [rsp+1B0h] [rbp-58h]

  v124 = a2;
  v132 = a1;
  v110 = -1;
  v5 = 0;
  v111 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v112 = 1;
    v110 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v112 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v110, 2060);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v10 )
      goto LABEL_6;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v10 = v9;
    goto LABEL_6;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
    goto LABEL_5;
LABEL_6:
  v125 = v10;
  if ( !v10 )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
    if ( !v112 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_247;
  }
  if ( (*((_DWORD *)v10 + 106) & 4) != 0 )
  {
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v117, v10);
    if ( v118 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v117, 0LL, 0LL);
    v11 = v117;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v11 + 24) == KeGetCurrentThread() )
    {
      if ( *(int *)(v11 + 32) <= 0 )
      {
        WdLogSingleEntry1(1LL, 491LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
      }
      ++*(_DWORD *)(v11 + 32);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 8, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v72 = *(_DWORD *)(v11 + 36);
          if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, v72);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16));
        ExAcquirePushLockExclusiveEx(v11 + 8, 0LL);
      }
      if ( *(_QWORD *)(v11 + 24) )
      {
        WdLogSingleEntry1(1LL, 515LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(v11 + 32) )
      {
        WdLogSingleEntry1(1LL, 516LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_QWORD *)(v11 + 24) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 32) = 1;
    }
    v118 = 1;
    if ( a2 )
    {
      v140 = 0;
      v73 = (_OWORD *)a1;
      if ( a1 >= MmUserProbeAddress )
        v73 = (_OWORD *)MmUserProbeAddress;
      *(_OWORD *)v143 = *v73;
      v144 = v73[1];
      v74 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v74 = (_DWORD *)MmUserProbeAddress;
      *v74 = 0;
      v75 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v75 = (_DWORD *)MmUserProbeAddress;
      *v75 = 0;
    }
    else
    {
      *(_OWORD *)v143 = *(_OWORD *)a1;
      v144 = *(_OWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    if ( !(_QWORD)v144 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NULL present history pointer, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_141;
    }
    v135 = 0LL;
    v14 = v143[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v128, v143[0], (struct _KTHREAD **)v10, &v135, 1);
    v15 = v135;
    if ( !v135 )
    {
      WdLogSingleEntry2(2LL, v14, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
        v14,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_146:
      if ( v128 )
        DXGADAPTER::ReleaseReference(v128);
LABEL_141:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v117);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
      if ( !v112 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_247;
    }
    v115 = 0LL;
    v141 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v135, 0, &v115, &v141, 0LL, 0LL, 0);
    v17 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry2(2LL, v15, PairingAdapters);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistory (Status = 0x%I64x)!",
        (__int64)v15,
        v17,
        0LL,
        0LL,
        0LL);
      if ( v128 )
        DXGADAPTER::ReleaseReference(v128);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v117);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
      if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
LABEL_239:
        McTemplateK0q_EtwWriteTransfer(v61, &EventProfilerExit, v62, v110);
      return (unsigned int)v17;
    }
    else
    {
      v18 = v115;
      if ( !v115 )
      {
        WdLogSingleEntry1(1LL, 287LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 287LL, 0LL, 0LL, 0LL, 0LL);
      }
      COREACCESS::COREACCESS((COREACCESS *)v145, v18);
      if ( v147 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, v145, 0LL, 0LL);
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v146 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v146 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v20, 72);
          KeWaitForSingleObject((char *)v146 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v146, 0LL);
      }
      v148 = 0LL;
      v147 = 1;
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v115 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v22 = v115;
      if ( v21 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v115 + 2), v115);
      if ( !*((_QWORD *)v22 + 366) )
      {
        WdLogSingleEntry1(1LL, 299LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pRenderAdapter->IsRenderAdapter()",
          299LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v131 = 0;
      v122 = 0;
      v120 = 0;
      v23 = *((_QWORD *)v22 + 366);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137, (struct _KTHREAD **)(v23 + 976), 0);
      v24 = v138;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v24, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v77 = *(_DWORD *)(v24 + 24);
          if ( v77 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, v77);
        }
        ExAcquirePushLockSharedEx(v24, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 16));
      v139 = 1;
      v27 = PsGetCurrentProcess(v25);
      ProcessSessionId = PsGetProcessSessionId(v27);
      if ( ProcessSessionId < *(_DWORD *)(v23 + 1008) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v23 + 1016) + 8LL * ProcessSessionId) )
        {
          _mm_lfence();
          v29 = *(_QWORD *)(*(_QWORD *)(v23 + 1016) + 8LL * ProcessSessionId);
          v116 = (DXGPRESENTHISTORYTOKENQUEUE *)v29;
          if ( v29 )
          {
            v32 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
            if ( v32 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v31, v30, v33, v34);
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v32,
                                                 CurrentProcessSessionId);
              v37 = SessionDataForSpecifiedSession;
              if ( SessionDataForSpecifiedSession )
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX(
                  (DXGAUTOMUTEX *)&v133,
                  (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
                  0);
                if ( v134 )
                  WdLogSingleEntry5(0LL, 275LL, 4LL, &v133, 0LL, 0LL);
                v38 = v133;
                KeEnterCriticalRegion();
                if ( *(struct _KTHREAD **)(v38 + 24) == KeGetCurrentThread() )
                {
                  if ( *(int *)(v38 + 32) <= 0 )
                  {
                    WdLogSingleEntry1(1LL, 491LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"m_OwnerAcquireCount > 0",
                      491LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  ++*(_DWORD *)(v38 + 32);
                }
                else
                {
                  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v38 + 8, 0LL) )
                  {
                    if ( bTracingEnabled )
                    {
                      v78 = *(_DWORD *)(v38 + 36);
                      if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v39, (const EVENT_DESCRIPTOR *)"g", v40, v78);
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)(v38 + 16));
                    ExAcquirePushLockExclusiveEx(v38 + 8, 0LL);
                  }
                  if ( *(_QWORD *)(v38 + 24) )
                  {
                    WdLogSingleEntry1(1LL, 515LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"NULL == m_OwningThread",
                      515LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_DWORD *)(v38 + 32) )
                  {
                    WdLogSingleEntry1(1LL, 516LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"0 == m_OwnerAcquireCount",
                      516LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  *(_QWORD *)(v38 + 24) = KeGetCurrentThread();
                  *(_DWORD *)(v38 + 32) = 1;
                }
                v134 = 1;
                v136 = (char *)v37 + 64;
                v126 = (char *)v37 + 16448;
                v127 = (void *)v144;
                v41 = v143[1];
                v123 = v143[1];
                v119 = 2048;
                if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
                            (KSPIN_LOCK *)v29,
                            (__int64)v37 + 16448,
                            &v119,
                            (struct DXGSESSIONDATA *)((char *)v37 + 64),
                            (struct DXGSESSIONDATA *)((char *)v37 + 16448)) < 0 )
                {
                  WdLogSingleEntry1(1LL, 367LL);
                  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 367LL, 0LL, 0LL, 0LL, 0LL);
                }
                v113 = 0;
                v109 = 0;
                v42 = 0;
                v43 = v122;
                v44 = v119;
                v130 = v119;
                v45 = v120;
                while ( 1 )
                {
                  v121 = v43;
                  if ( v42 >= v44 )
                  {
LABEL_66:
                    v131 = v42;
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v29, 0);
                    if ( v124 )
                    {
                      v94 = v132;
                      v95 = (_DWORD *)(v132 + 24);
                      if ( v132 + 24 >= MmUserProbeAddress )
                        v95 = (_DWORD *)MmUserProbeAddress;
                      *v95 = v42;
                      if ( v42 || !v45 )
                      {
                        v97 = (_DWORD *)(v94 + 8);
                        if ( v94 + 8 >= MmUserProbeAddress )
                          v97 = (_DWORD *)MmUserProbeAddress;
                        *v97 = v43;
                      }
                      else
                      {
                        v96 = (_DWORD *)(v94 + 8);
                        if ( v94 + 8 >= MmUserProbeAddress )
                          v96 = (_DWORD *)MmUserProbeAddress;
                        *v96 = v45;
                        v113 = -1073741789;
                        v109 = -1073741789;
                      }
                    }
                    else
                    {
                      v52 = v132;
                      *(_DWORD *)(v132 + 24) = v42;
                      if ( v42 || !v45 )
                      {
                        *(_DWORD *)(v52 + 8) = v43;
                      }
                      else
                      {
                        *(_DWORD *)(v52 + 8) = v45;
                        v113 = -1073741789;
                        v109 = -1073741789;
                      }
                    }
                    v53 = v42;
                    for ( i = 0; i < v42; ++i )
                    {
                      v55 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)&v136[8 * i];
                      if ( (v55->Model == D3DKMT_PM_REDIRECTED_FLIP
                         || v55->Model == D3DKMT_PM_FLIPMANAGER
                         && (FenceValue = v55->Token.Flip.FenceValue) != 0
                         && (KeEnterCriticalRegion(),
                             ExAcquirePushLockSharedEx(FenceValue + 72, 0LL),
                             v116 = *(DXGPRESENTHISTORYTOKENQUEUE **)(FenceValue + 96),
                             CPushLock::ReleaseLock((CPushLock *)(FenceValue + 72)),
                             v116)
                         && (!*((_DWORD *)v116 + 7) && !*((_DWORD *)v116 + 8) || !*((_QWORD *)v116 + 5)
                           ? (v99 = 0)
                           : (v99 = 1),
                             v99))
                        && (v126[i] & 1) != 0 )
                      {
                        CIFlipPresentHistoryToken::CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v129, v55);
                        v100 = *(void (__fastcall **)(_QWORD *, _QWORD))(v129[0] + 304LL);
                        v101 = (*(__int64 (__fastcall **)(_QWORD *))(v129[0] + 296LL))(v129);
                        v100(v129, (unsigned int)(v101 + 1));
                        if ( (*(unsigned int (__fastcall **)(_QWORD *))(v129[0] + 296LL))(v129) >= 2 )
                        {
                          v56 = 1;
                        }
                        else
                        {
                          v56 = 0;
                          (*(void (__fastcall **)(_QWORD *))(v129[0] + 360LL))(v129);
                        }
                        CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v129);
                      }
                      else
                      {
                        v56 = 1;
                      }
                      if ( v56 )
                      {
                        if ( bTracingEnabled )
                        {
                          Model = v55->Model;
                          switch ( v55->Model )
                          {
                            case D3DKMT_PM_REDIRECTED_GDI:
                            case D3DKMT_PM_REDIRECTED_BLT:
                            case D3DKMT_PM_REDIRECTED_VISTABLT:
                            case D3DKMT_PM_SCREENCAPTUREFENCE:
                            case D3DKMT_PM_REDIRECTED_GDI_SYSMEM:
                            case D3DKMT_PM_REDIRECTED_COMPOSITION:
                            case D3DKMT_PM_SURFACECOMPLETE:
                              hLogicalSurface = v55->Token.Flip.FenceValue;
                              break;
                            case D3DKMT_PM_REDIRECTED_FLIP:
                              hLogicalSurface = v55->Token.Flip.hLogicalSurface;
                              break;
                            default:
                              hLogicalSurface = 0LL;
                              break;
                          }
                          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
                          {
                            Value = v55->Token.Flip.Flags.Value;
                          }
                          else if ( Model == D3DKMT_PM_REDIRECTED_GDI_SYSMEM )
                          {
                            Value = v55->Token.GdiSysMem.dwDirtyFlags;
                          }
                          else if ( Model == D3DKMT_PM_FLIPMANAGER )
                          {
                            Value = v55->Token.FlipManager.Flags.Value;
                          }
                          else
                          {
                            Value = 0LL;
                          }
                          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
                            CustomDuration = v55->Token.Flip.CustomDuration;
                          else
                            CustomDuration = 0;
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                          {
                            LODWORD(v108) = CustomDuration;
                            LODWORD(v107) = Value;
                            *(_DWORD *)v106 = v55->TokenSize;
                            LODWORD(v105) = v55->Model;
                            McTemplateK0ppqqxdqp_EtwWriteTransfer(
                              hLogicalSurface,
                              &EventRetirePresentHistory,
                              Value,
                              v115,
                              v55,
                              v105,
                              *(_QWORD *)v106,
                              hLogicalSurface,
                              v107,
                              v108,
                              0LL);
                          }
                        }
                        ExpInterlockedPushEntrySList(
                          (PSLIST_HEADER)(v29 + 48),
                          (PSLIST_ENTRY)(&v55[-1].Token.SurfaceComplete + 131));
                      }
                      else
                      {
                        --v53;
                      }
                    }
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v29, v42);
                    if ( v53 )
                      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v29 + 64), 0, v53, 0);
                    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v133);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
                    COREACCESS::~COREACCESS((COREACCESS *)v145);
                    if ( v128 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v128 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v128 + 2), v128);
                      LODWORD(v17) = v109;
                    }
                    else
                    {
                      LODWORD(v17) = v113;
                    }
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v117);
                    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
                    if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                      goto LABEL_239;
                    return (unsigned int)v17;
                  }
                  v46 = v42;
                  v47 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)&v136[8 * v42];
                  v142 = v47;
                  v48 = v47->Model;
                  if ( v47->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
                    break;
                  if ( v48 != D3DKMT_PM_REDIRECTED_GDI )
                  {
                    switch ( v48 )
                    {
                      case D3DKMT_PM_REDIRECTED_FLIP:
                        NumRects = v47->Token.Flip.DirtyRegions.NumRects;
                        if ( NumRects > 0x10 )
                        {
                          WdLogSingleEntry1(1LL, 63LL);
                          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 63LL, 0LL, 0LL, 0LL, 0LL);
                          goto LABEL_179;
                        }
                        v49 = 16 * NumRects + 831;
                        v46 = v42;
                        goto LABEL_54;
                      case D3DKMT_PM_REDIRECTED_BLT:
                        VidPnSourceId = v47->Token.Flip.VidPnSourceId;
                        if ( VidPnSourceId > 0x10 )
                        {
                          WdLogSingleEntry1(1LL, 73LL);
                          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 73LL, 0LL, 0LL, 0LL, 0LL);
                          goto LABEL_179;
                        }
                        v49 = 16 * VidPnSourceId + 51;
                        v46 = v42;
                        break;
                      case D3DKMT_PM_REDIRECTED_VISTABLT:
                      case D3DKMT_PM_SCREENCAPTUREFENCE:
                      case D3DKMT_PM_SURFACECOMPLETE:
                        v46 = v42;
                        goto LABEL_53;
                      case D3DKMT_PM_FLIPMANAGER:
                        v49 = 47;
                        v46 = v42;
                        goto LABEL_54;
                      default:
                        WdLogSingleEntry1(1LL, 96LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"Unknown type for present history token is found in queue.",
                          96LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v49 = 7;
                        v46 = v42;
                        goto LABEL_54;
                    }
                    goto LABEL_54;
                  }
                  v64 = v47->Token.Gdi.DirtyRegions.NumRects;
                  if ( v64 <= 0x10 )
                  {
                    v49 = 16 * v64 + 67;
                    goto LABEL_54;
                  }
                  WdLogSingleEntry1(1LL, 53LL);
                  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 53LL, 0LL, 0LL, 0LL, 0LL);
LABEL_179:
                  v45 = 0;
                  v46 = v42;
LABEL_55:
                  v120 = v45;
                  if ( !v45 )
                  {
                    WdLogSingleEntry1(1LL, 377LL);
                    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TokenSize > 0", 377LL, 0LL, 0LL, 0LL, 0LL);
                    v46 = v42;
                  }
                  if ( v45 > v41 )
                  {
                    v113 = 261;
                    v109 = 261;
                    goto LABEL_66;
                  }
                  v47->TokenSize = v45;
                  if ( v47->Model == D3DKMT_PM_REDIRECTED_FLIP )
                    goto LABEL_189;
                  if ( v47->Model == D3DKMT_PM_FLIPMANAGER )
                  {
                    v81 = v47->Token.Flip.FenceValue;
                    if ( v81 )
                    {
                      KeEnterCriticalRegion();
                      v82 = (CPushLock *)(v81 + 72);
                      ExAcquirePushLockSharedEx(v81 + 72, 0LL);
                      v83 = *(_QWORD *)(v81 + 96);
                      CPushLock::ReleaseLock(v82);
                      if ( v83 )
                      {
                        if ( (*(_DWORD *)(v83 + 28) || *(_DWORD *)(v83 + 32)) && *(_QWORD *)(v83 + 40) )
                        {
LABEL_189:
                          CIFlipPresentHistoryToken::CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v114, v47);
                          v85 = &v126[v42];
                          v86 = (unsigned __int8)*v85;
                          if ( (v86 & 1) != 0 )
                          {
                            LOBYTE(v86) = 1;
                            (*(void (__fastcall **)(_QWORD *, __int64))(v114[0] + 272LL))(v114, v86);
                            (*(void (__fastcall **)(_QWORD *, bool))(v114[0] + 280LL))(v114, (*v85 & 2) != 0);
                          }
                          else
                          {
                            LOBYTE(v86) = (v86 & 4) != 0;
                            (*(void (__fastcall **)(_QWORD *, __int64))(v114[0] + 288LL))(v114, v86);
                            if ( (*v85 & 8) != 0 )
                            {
                              LOBYTE(v87) = 1;
                              (*(void (__fastcall **)(_QWORD *, __int64))(v114[0] + 232LL))(v114, v87);
                            }
                          }
                          if ( (*v85 & 0x20) != 0 || (*v85 & 0x40) == 0 )
                            v87 = 0LL;
                          else
                            LOBYTE(v87) = 1;
                          (*(void (__fastcall **)(_QWORD *, __int64))(v114[0] + 312LL))(v114, v87);
                          CompositionBindingId = v47->CompositionBindingId;
                          v89 = *(union _LARGE_INTEGER **)(*(__int64 (__fastcall **)(_QWORD *))(v114[0] + 16LL))(v114);
                          v90 = (*(__int64 (__fastcall **)(_QWORD *))(v114[0] + 328LL))(v114);
                          v91 = (*(__int64 (__fastcall **)(_QWORD *))(v114[0] + 104LL))(v114);
                          Timeout = v89;
                          v47 = v142;
                          WdLogSingleEntry5(8LL, v142, v91, v90, Timeout, CompositionBindingId);
                          CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v114);
                        }
                      }
                      v46 = v42;
                    }
                  }
                  v50 = &v126[v46];
                  if ( v47->Model == D3DKMT_PM_FLIPMANAGER )
                    v47->Token.Gdi.ScrollRect.left ^= (v47->Token.Gdi.ScrollRect.left ^ ((unsigned __int8)*v50 >> 4)) & 1;
                  if ( v124 )
                  {
                    v51 = v45;
                    v92 = v127;
                    v93 = (char *)v127 + v45;
                    if ( (unsigned __int64)v93 > MmUserProbeAddress || v93 <= v127 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v92, v47, v45);
                    v50 = &v126[v42];
                  }
                  else
                  {
                    v51 = v45;
                    memmove(v127, v47, v45);
                  }
                  if ( (*v50 & 1) != 0 && v47->Model == D3DKMT_PM_REDIRECTED_FLIP )
                  {
                    if ( (v47->Token.Flip.Flags.Value & 0x2000) == 0 )
                    {
                      WdLogSingleEntry1(1LL, 451LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pToken->Token.Flip.Flags.IndependentFlip",
                        451LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( (unsigned int)((int)(v47->Token.Flip.Flags.Value << 16) >> 30) > 1 )
                    {
                      WdLogSingleEntry1(1LL, 452LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAG"
                                  "E_FLIP_SUBMITTED || pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_"
                                  "INDEPENDENT_FLIP_STAGE_FLIP_COMPLETE",
                        452LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v47->Token.Flip.Flags.Value ^= (v47->Token.Flip.Flags.Value ^ ((*((__int16 *)&v47->Token.SurfaceComplete
                                                                                    + 22) & 0xFFFFC000)
                                                                                 + 0x4000)) & 0xC000;
                  }
                  v127 = (char *)v127 + v51;
                  v43 = v45 + v121;
                  v122 = v45 + v121;
                  v41 = v123 - v45;
                  v123 -= v45;
                  ++v42;
                  v44 = v130;
                }
LABEL_53:
                v49 = 31;
LABEL_54:
                v45 = v49 & 0xFFFFFFF8;
                goto LABEL_55;
              }
            }
            v76 = PsGetCurrentProcessSessionId(v31, v30, v33, v34);
            WdLogSingleEntry1(4LL, v76);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
            COREACCESS::~COREACCESS((COREACCESS *)v145);
            goto LABEL_146;
          }
        }
      }
      v65 = v115;
      WdLogSingleEntry1(4LL, v115);
      LOBYTE(v5) = *((_DWORD *)v65 + 50) == 1;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v137);
      COREACCESS::~COREACCESS((COREACCESS *)v145);
      if ( v5 )
      {
        if ( v128 )
          DXGADAPTER::ReleaseReference(v128);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v117);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
        if ( !v112 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225485LL;
LABEL_247:
        McTemplateK0q_EtwWriteTransfer(v66, &EventProfilerExit, v67, v110);
        return 3221225485LL;
      }
      if ( v128 )
        DXGADAPTER::ReleaseReference(v128);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v117);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
      if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v102, &EventProfilerExit, v103, v110);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, v10, -1073741790LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v110);
    if ( v112 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v71, v110);
    return 3221225506LL;
  }
}

/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1C01EB820
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0018430 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkCleanupPresentHistoryInternal @ 0x1C01EB770 (DxgkCleanupPresentHistoryInternal.c)
 *     DxgkGetPresentHistory @ 0x1C0341470 (DxgkGetPresentHistory.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00073B4 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C0018A8C (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C0018B0C (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025738 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C002AC48 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0320BD0 (--0CIFlipPresentHistoryToken@@QEAA@PEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1C0320C34 (--1CIFlipPresentHistoryToken@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetPresentHistoryInternal(ULONG64 a1, int a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v11; // rdi
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // r8
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  _OWORD *v23; // rax
  _DWORD *v24; // rdx
  _DWORD *v25; // rdx
  struct _KTHREAD **v26; // r8
  __int64 v27; // rdi
  struct DXGADAPTER *v28; // rsi
  int PairingAdapters; // eax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // edi
  struct DXGADAPTER *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r8
  signed __int64 v37; // rax
  struct DXGADAPTER *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v46; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v47; // r15
  __int64 v48; // rcx
  DXGSESSIONMGR *v49; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // r9d
  const struct _D3DKMT_PRESENTHISTORYTOKEN **v58; // r12
  _BYTE *v59; // r14
  unsigned int v60; // esi
  int v61; // edi
  unsigned int v62; // eax
  unsigned int v63; // r15d
  __int64 v64; // r13
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v65; // r12
  D3DKMT_PRESENT_MODEL v66; // eax
  unsigned int NumRects; // r15d
  int v68; // r15d
  unsigned int VidPnSourceId; // r15d
  unsigned int v70; // r15d
  ULONG64 v71; // r13
  _DWORD *v72; // rdx
  _DWORD *v73; // rdx
  UINT64 v74; // rsi
  CPushLock *v75; // rdi
  __int64 v76; // rsi
  char v77; // al
  __int64 v78; // rdx
  __int64 v79; // rdx
  char v80; // al
  UINT64 CompositionBindingId; // r14
  __int64 v82; // rsi
  unsigned int v83; // edi
  __int64 v84; // rax
  _BYTE *v85; // rdi
  __int64 v86; // rsi
  void *v87; // r9
  char *v88; // rcx
  char *v89; // r13
  _DWORD *v90; // rdx
  ULONG64 v91; // r13
  LONG v92; // r12d
  __int64 v93; // r13
  const struct _D3DKMT_PRESENTHISTORYTOKEN **v94; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v95; // rsi
  char v96; // r15
  D3DKMT_PRESENT_MODEL Model; // eax
  UINT64 FenceValue; // r14
  CPushLock *v99; // rdi
  __int64 v100; // r14
  bool v101; // al
  void (__fastcall *v102)(_QWORD *, _QWORD); // rdi
  int v103; // eax
  D3DKMT_PRESENT_MODEL v104; // edx
  __int64 hLogicalSurface; // r8
  __int64 Value; // rcx
  UINT CustomDuration; // r9d
  DXGPRESENTHISTORYTOKENQUEUE *v108; // rbx
  __int64 v109; // rcx
  __int64 v110; // r8
  unsigned int v111; // eax
  struct DXGADAPTER *v112; // rdi
  __int64 v113; // rcx
  __int64 v114; // r8
  unsigned __int64 *v115; // [rsp+28h] [rbp-1E0h]
  unsigned __int8 v116[8]; // [rsp+30h] [rbp-1D8h]
  __int64 v117; // [rsp+40h] [rbp-1C8h]
  __int64 v118; // [rsp+48h] [rbp-1C0h]
  unsigned int v119; // [rsp+60h] [rbp-1A8h]
  int v120; // [rsp+60h] [rbp-1A8h]
  int v121; // [rsp+64h] [rbp-1A4h]
  int v122; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v123; // [rsp+70h] [rbp-198h]
  char v124; // [rsp+78h] [rbp-190h]
  _QWORD v125[2]; // [rsp+80h] [rbp-188h] BYREF
  int v126; // [rsp+90h] [rbp-178h]
  unsigned int v127; // [rsp+94h] [rbp-174h]
  unsigned int v128; // [rsp+98h] [rbp-170h]
  _BYTE *v129; // [rsp+A0h] [rbp-168h]
  struct DXGADAPTER *v130; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v131; // [rsp+B0h] [rbp-158h] BYREF
  char v132; // [rsp+B8h] [rbp-150h]
  unsigned int v133; // [rsp+C0h] [rbp-148h] BYREF
  unsigned int v134; // [rsp+C4h] [rbp-144h]
  int v135; // [rsp+C8h] [rbp-140h]
  int v136; // [rsp+CCh] [rbp-13Ch]
  struct DXGPROCESS *v137; // [rsp+D0h] [rbp-138h]
  void *v138; // [rsp+D8h] [rbp-130h]
  const struct _D3DKMT_PRESENTHISTORYTOKEN **v139; // [rsp+E0h] [rbp-128h]
  struct DXGADAPTER *v140; // [rsp+E8h] [rbp-120h] BYREF
  _QWORD v141[2]; // [rsp+F8h] [rbp-110h] BYREF
  unsigned int v142; // [rsp+108h] [rbp-100h]
  unsigned int v143; // [rsp+10Ch] [rbp-FCh]
  DXGPRESENTHISTORYTOKENQUEUE *v144; // [rsp+110h] [rbp-F8h]
  DXGPRESENTHISTORYTOKENQUEUE *v145; // [rsp+118h] [rbp-F0h]
  __int64 v146; // [rsp+120h] [rbp-E8h] BYREF
  char v147; // [rsp+128h] [rbp-E0h]
  struct DXGADAPTER *v148; // [rsp+130h] [rbp-D8h] BYREF
  ULONG64 v149; // [rsp+138h] [rbp-D0h]
  char v150[8]; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v151; // [rsp+148h] [rbp-C0h]
  int v152; // [rsp+150h] [rbp-B8h]
  int v153; // [rsp+158h] [rbp-B0h]
  unsigned __int64 v154; // [rsp+160h] [rbp-A8h] BYREF
  unsigned int v155[4]; // [rsp+168h] [rbp-A0h]
  __int128 v156; // [rsp+178h] [rbp-90h]
  _BYTE v157[16]; // [rsp+190h] [rbp-78h] BYREF
  DXGADAPTER *v158; // [rsp+1A0h] [rbp-68h]
  char v159; // [rsp+1A8h] [rbp-60h]
  __int64 v160; // [rsp+1B0h] [rbp-58h]

  v136 = a2;
  v149 = a1;
  v122 = -1;
  v5 = 0;
  v123 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v124 = 1;
    v122 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v124 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v122, 2060);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_12;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v11 )
      goto LABEL_13;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_12;
  }
  v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v11 )
LABEL_12:
    v11 = v9;
LABEL_13:
  v137 = v11;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
    v16 = v124 == 0;
LABEL_232:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v122);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v11 + 106) & 4) == 0 )
  {
    WdLogSingleEntry2(3LL, v11, -1073741790LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
    if ( v124 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v17, v122);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v131, v11);
  if ( v132 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v131, 0LL, 0LL);
  v19 = v131;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v19 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v19 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v19 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v22 = *(_DWORD *)(v19 + 36);
        if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, &EventBlockThread, v21, v22);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v19 + 16));
      ExAcquirePushLockExclusiveEx(v19 + 8, 0LL);
    }
    if ( *(_QWORD *)(v19 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v19 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v19 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v19 + 32) = 1;
  }
  v132 = 1;
  if ( a2 )
  {
    v153 = 0;
    v23 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v23 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v155 = *v23;
    v156 = v23[1];
    v24 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = 0;
    v25 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = 0;
  }
  else
  {
    *(_OWORD *)v155 = *(_OWORD *)a1;
    v156 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !(_QWORD)v156 )
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
LABEL_231:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v131);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
    v16 = v124 == 0;
    goto LABEL_232;
  }
  v148 = 0LL;
  v26 = (struct _KTHREAD **)v11;
  v27 = v155[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v140, v155[0], v26, &v148, 1);
  v28 = v148;
  if ( !v148 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v27, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v27,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_229;
  }
  v130 = 0LL;
  v154 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v148, 0, &v130, &v154, 0LL, 0LL, 0);
  v119 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v30 = PairingAdapters;
    WdLogSingleEntry2(2LL, v28, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistory (Status = 0x%I64x)!",
      (__int64)v28,
      v30,
      0LL,
      0LL,
      0LL);
    if ( v140 )
      DXGADAPTER::ReleaseReference(v140);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v131);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
    if ( v124 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v122);
    return v119;
  }
  v34 = v130;
  if ( !v130 )
  {
    WdLogSingleEntry1(1LL, 287LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 287LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREACCESS::COREACCESS((COREACCESS *)v157, v34);
  if ( v159 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v157, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v158 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v158 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, &EventBlockThread, v36, 72);
      KeWaitForSingleObject((char *)v158 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v158, 0LL);
  }
  v160 = 0LL;
  v159 = 1;
  v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v38 = v130;
  if ( v37 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v130 + 2), v130);
  if ( !*((_QWORD *)v38 + 366) )
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
  v143 = 0;
  v135 = 0;
  v134 = 0;
  v39 = *((_QWORD *)v38 + 366);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150, (struct _KTHREAD **)(v39 + 976), 0);
  v40 = v151;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v40, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v43 = *(_DWORD *)(v40 + 24);
      if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, v43);
    }
    ExAcquirePushLockSharedEx(v40, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v40 + 16));
  v152 = 1;
  v44 = PsGetCurrentProcess(v41);
  ProcessSessionId = PsGetProcessSessionId(v44);
  if ( ProcessSessionId < *(_DWORD *)(v39 + 1008) )
  {
    v46 = 8LL * ProcessSessionId;
    if ( *(_QWORD *)(v46 + *(_QWORD *)(v39 + 1016)) )
    {
      _mm_lfence();
      v47 = *(DXGPRESENTHISTORYTOKENQUEUE **)(v46 + *(_QWORD *)(v39 + 1016));
      v144 = v47;
      v145 = v47;
      if ( v47 )
      {
        v49 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v49 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v48);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v49,
                                             CurrentProcessSessionId);
          v52 = SessionDataForSpecifiedSession;
          if ( SessionDataForSpecifiedSession )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)&v146,
              (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
              0);
            if ( v147 )
              WdLogSingleEntry5(0LL, 275LL, 4LL, &v146, 0LL, 0LL);
            v53 = v146;
            KeEnterCriticalRegion();
            if ( *(struct _KTHREAD **)(v53 + 24) == KeGetCurrentThread() )
            {
              if ( *(int *)(v53 + 32) <= 0 )
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
              ++*(_DWORD *)(v53 + 32);
            }
            else
            {
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v53 + 8, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v57 = *(_DWORD *)(v53 + 36);
                  if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0q_EtwWriteTransfer(v55, &EventBlockThread, v56, v57);
                }
                _InterlockedIncrement64((volatile signed __int64 *)(v53 + 16));
                ExAcquirePushLockExclusiveEx(v53 + 8, 0LL);
              }
              if ( *(_QWORD *)(v53 + 24) )
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
              if ( *(_DWORD *)(v53 + 32) )
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
              *(_QWORD *)(v53 + 24) = KeGetCurrentThread();
              *(_DWORD *)(v53 + 32) = 1;
            }
            v147 = 1;
            v58 = (const struct _D3DKMT_PRESENTHISTORYTOKEN **)((char *)v52 + 64);
            v139 = (const struct _D3DKMT_PRESENTHISTORYTOKEN **)((char *)v52 + 64);
            v59 = (char *)v52 + 16448;
            v129 = (char *)v52 + 16448;
            v138 = (void *)v156;
            v127 = v155[1];
            v133 = 2048;
            if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
                        (KSPIN_LOCK *)v47,
                        v54,
                        &v133,
                        (struct DXGSESSIONDATA *)((char *)v52 + 64),
                        (struct DXGSESSIONDATA *)((char *)v52 + 16448)) < 0 )
            {
              WdLogSingleEntry1(1LL, 367LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 367LL, 0LL, 0LL, 0LL, 0LL);
            }
            v120 = 0;
            v121 = 0;
            v60 = 0;
            v128 = 0;
            v61 = v135;
            v62 = v133;
            v142 = v133;
            v63 = v134;
            while ( 1 )
            {
              v126 = v61;
              if ( v60 >= v62 )
              {
LABEL_126:
                v143 = v60;
                DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory(v144, 0);
                if ( v136 )
                {
                  v71 = v149;
                  v72 = (_DWORD *)(v149 + 24);
                  if ( v149 + 24 >= MmUserProbeAddress )
                    v72 = (_DWORD *)MmUserProbeAddress;
                  *v72 = v60;
                  if ( v60 || !v63 )
                  {
                    v90 = (_DWORD *)(v71 + 8);
                    if ( v71 + 8 >= MmUserProbeAddress )
                      v90 = (_DWORD *)MmUserProbeAddress;
                    *v90 = v61;
                  }
                  else
                  {
                    v73 = (_DWORD *)(v71 + 8);
                    if ( v71 + 8 >= MmUserProbeAddress )
                      v73 = (_DWORD *)MmUserProbeAddress;
                    *v73 = v63;
                    v120 = -1073741789;
                    v121 = -1073741789;
                  }
                }
                else
                {
                  v91 = v149;
                  *(_DWORD *)(v149 + 24) = v60;
                  if ( v60 || !v63 )
                  {
                    *(_DWORD *)(v91 + 8) = v61;
                  }
                  else
                  {
                    *(_DWORD *)(v91 + 8) = v63;
                    v120 = -1073741789;
                    v121 = -1073741789;
                  }
                }
                v92 = v60;
                if ( !v60 )
                {
LABEL_217:
                  v108 = v144;
                  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory(v144, v60);
                  if ( v92 )
                    KeReleaseSemaphore(*((PRKSEMAPHORE *)v108 + 8), 0, v92, 0);
                  DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v146);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
                  COREACCESS::~COREACCESS((COREACCESS *)v157);
                  if ( v140 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v140 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v140 + 2), v140);
                    v33 = v121;
                  }
                  else
                  {
                    v33 = v120;
                  }
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v131);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
                  if ( v124 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                  {
                    McTemplateK0q_EtwWriteTransfer(v109, &EventProfilerExit, v110, v122);
                    return v33;
                  }
                  return v33;
                }
                v93 = v60;
                v94 = v139;
                while ( 2 )
                {
                  v95 = *v94;
                  v96 = 1;
                  Model = (*v94)->Model;
                  if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
                  {
LABEL_190:
                    if ( (*v59 & 1) != 0 )
                    {
                      CIFlipPresentHistoryToken::CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v141, v95);
                      v102 = *(void (__fastcall **)(_QWORD *, _QWORD))(v141[0] + 304LL);
                      v103 = (*(__int64 (__fastcall **)(_QWORD *))(v141[0] + 296LL))(v141);
                      v102(v141, (unsigned int)(v103 + 1));
                      if ( (*(unsigned int (__fastcall **)(_QWORD *))(v141[0] + 296LL))(v141) < 2 )
                      {
                        v96 = 0;
                        (*(void (__fastcall **)(_QWORD *))(v141[0] + 360LL))(v141);
                      }
                      CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v141);
                    }
                  }
                  else if ( Model == D3DKMT_PM_FLIPMANAGER )
                  {
                    FenceValue = v95->Token.Flip.FenceValue;
                    if ( FenceValue
                      && (v95->Token.Gdi.ScrollRect.left & 4) != 0
                      && (KeEnterCriticalRegion(),
                          v99 = (CPushLock *)(FenceValue + 72),
                          ExAcquirePushLockSharedEx(FenceValue + 72, 0LL),
                          v100 = *(_QWORD *)(FenceValue + 96),
                          CPushLock::ReleaseLock(v99),
                          v100) )
                    {
                      v101 = (*(_DWORD *)(v100 + 28) || *(_DWORD *)(v100 + 32)) && *(_QWORD *)(v100 + 40);
                      v59 = v129;
                      if ( v101 )
                        goto LABEL_190;
                    }
                    else
                    {
                      v59 = v129;
                    }
                  }
                  if ( v96 )
                  {
                    if ( bTracingEnabled )
                    {
                      v104 = v95->Model;
                      switch ( v95->Model )
                      {
                        case D3DKMT_PM_REDIRECTED_GDI:
                        case D3DKMT_PM_REDIRECTED_BLT:
                        case D3DKMT_PM_REDIRECTED_VISTABLT:
                        case D3DKMT_PM_SCREENCAPTUREFENCE:
                        case D3DKMT_PM_REDIRECTED_GDI_SYSMEM:
                        case D3DKMT_PM_REDIRECTED_COMPOSITION:
                        case D3DKMT_PM_SURFACECOMPLETE:
                          hLogicalSurface = v95->Token.Flip.FenceValue;
                          break;
                        case D3DKMT_PM_REDIRECTED_FLIP:
                          hLogicalSurface = v95->Token.Flip.hLogicalSurface;
                          break;
                        default:
                          hLogicalSurface = 0LL;
                          break;
                      }
                      if ( v104 == D3DKMT_PM_REDIRECTED_FLIP )
                      {
                        Value = v95->Token.Flip.Flags.Value;
                      }
                      else if ( v104 == D3DKMT_PM_REDIRECTED_GDI_SYSMEM )
                      {
                        Value = v95->Token.GdiSysMem.dwDirtyFlags;
                      }
                      else if ( v104 == D3DKMT_PM_FLIPMANAGER )
                      {
                        Value = v95->Token.FlipManager.Flags.Value;
                      }
                      else
                      {
                        Value = 0LL;
                      }
                      if ( v104 == D3DKMT_PM_REDIRECTED_FLIP )
                        CustomDuration = v95->Token.Flip.CustomDuration;
                      else
                        CustomDuration = 0;
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                      {
                        LODWORD(v118) = CustomDuration;
                        LODWORD(v117) = Value;
                        *(_DWORD *)v116 = v95->TokenSize;
                        LODWORD(v115) = v95->Model;
                        McTemplateK0ppqqxdqp_EtwWriteTransfer(
                          Value,
                          &EventRetirePresentHistory,
                          hLogicalSurface,
                          v130,
                          v95,
                          v115,
                          *(_QWORD *)v116,
                          hLogicalSurface,
                          v117,
                          v118,
                          0LL);
                      }
                    }
                    ExpInterlockedPushEntrySList(
                      (PSLIST_HEADER)v144 + 3,
                      (PSLIST_ENTRY)(&v95[-1].Token.SurfaceComplete + 131));
                  }
                  else
                  {
                    --v92;
                  }
                  v94 = ++v139;
                  v129 = ++v59;
                  if ( !--v93 )
                  {
                    v60 = v128;
                    goto LABEL_217;
                  }
                  continue;
                }
              }
              v64 = v60;
              v65 = v58[v60];
              v66 = v65->Model;
              if ( v65->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
                break;
              if ( v66 != D3DKMT_PM_REDIRECTED_GDI )
              {
                switch ( v66 )
                {
                  case D3DKMT_PM_REDIRECTED_FLIP:
                    NumRects = v65->Token.Flip.DirtyRegions.NumRects;
                    if ( NumRects > 0x10 )
                    {
                      WdLogSingleEntry1(1LL, 63LL);
                      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 63LL, 0LL, 0LL, 0LL, 0LL);
                      goto LABEL_118;
                    }
                    v68 = 16 * NumRects + 831;
                    goto LABEL_121;
                  case D3DKMT_PM_REDIRECTED_BLT:
                    VidPnSourceId = v65->Token.Flip.VidPnSourceId;
                    if ( VidPnSourceId > 0x10 )
                    {
                      WdLogSingleEntry1(1LL, 73LL);
                      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 73LL, 0LL, 0LL, 0LL, 0LL);
                      goto LABEL_118;
                    }
                    v68 = 16 * VidPnSourceId + 51;
                    break;
                  case D3DKMT_PM_REDIRECTED_VISTABLT:
                  case D3DKMT_PM_SCREENCAPTUREFENCE:
                  case D3DKMT_PM_SURFACECOMPLETE:
                    goto LABEL_120;
                  case D3DKMT_PM_FLIPMANAGER:
                    v68 = 47;
                    goto LABEL_121;
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
                    v68 = 7;
                    goto LABEL_121;
                }
                goto LABEL_121;
              }
              v70 = v65->Token.Gdi.DirtyRegions.NumRects;
              if ( v70 <= 0x10 )
              {
                v68 = 16 * v70 + 67;
LABEL_121:
                v63 = v68 & 0xFFFFFFF8;
                goto LABEL_122;
              }
              WdLogSingleEntry1(1LL, 53LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 53LL, 0LL, 0LL, 0LL, 0LL);
LABEL_118:
              v63 = 0;
LABEL_122:
              v134 = v63;
              if ( !v63 )
              {
                WdLogSingleEntry1(1LL, 377LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TokenSize > 0", 377LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( v63 > v127 )
              {
                v120 = 261;
                v121 = 261;
                v61 = v126;
                goto LABEL_126;
              }
              v65->TokenSize = v63;
              if ( v65->Model == D3DKMT_PM_REDIRECTED_FLIP
                || v65->Model == D3DKMT_PM_FLIPMANAGER
                && (v74 = v65->Token.Flip.FenceValue) != 0
                && (v65->Token.Gdi.ScrollRect.left & 4) != 0
                && (KeEnterCriticalRegion(),
                    v75 = (CPushLock *)(v74 + 72),
                    ExAcquirePushLockSharedEx(v74 + 72, 0LL),
                    v76 = *(_QWORD *)(v74 + 96),
                    CPushLock::ReleaseLock(v75),
                    v76)
                && (!*(_DWORD *)(v76 + 28) && !*(_DWORD *)(v76 + 32) || !*(_QWORD *)(v76 + 40) ? (v77 = 0) : (v77 = 1),
                    v77) )
              {
                CIFlipPresentHistoryToken::CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v125, v65);
                v78 = (unsigned __int8)v59[v64];
                if ( (v78 & 1) != 0 )
                {
                  LOBYTE(v78) = 1;
                  (*(void (__fastcall **)(_QWORD *, __int64))(v125[0] + 272LL))(v125, v78);
                  (*(void (__fastcall **)(_QWORD *, bool))(v125[0] + 280LL))(v125, (v59[v64] & 2) != 0);
                }
                else
                {
                  LOBYTE(v78) = (v78 & 4) != 0;
                  (*(void (__fastcall **)(_QWORD *, __int64))(v125[0] + 288LL))(v125, v78);
                  if ( (v59[v64] & 8) != 0 )
                  {
                    LOBYTE(v79) = 1;
                    (*(void (__fastcall **)(_QWORD *, __int64))(v125[0] + 232LL))(v125, v79);
                  }
                }
                v80 = v59[v64];
                if ( (v80 & 0x20) != 0 || (v80 & 0x40) == 0 )
                  v79 = 0LL;
                else
                  LOBYTE(v79) = 1;
                (*(void (__fastcall **)(_QWORD *, __int64))(v125[0] + 312LL))(v125, v79);
                CompositionBindingId = v65->CompositionBindingId;
                v82 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v125[0] + 16LL))(v125);
                v83 = (*(__int64 (__fastcall **)(_QWORD *))(v125[0] + 328LL))(v125);
                v84 = (*(__int64 (__fastcall **)(_QWORD *))(v125[0] + 104LL))(v125);
                WdLogSingleEntry5(8LL, v65, v84, v83, v82, CompositionBindingId);
                CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)v125);
                v59 = v129;
              }
              v85 = &v59[v64];
              if ( v65->Model == D3DKMT_PM_FLIPMANAGER )
                v65->Token.Gdi.ScrollRect.left ^= (v65->Token.Gdi.ScrollRect.left ^ ((unsigned __int8)*v85 >> 4)) & 1;
              if ( v136 )
              {
                v86 = v63;
                v87 = v138;
                v88 = (char *)v138 + v63;
                if ( (unsigned __int64)v88 > MmUserProbeAddress || v88 <= v138 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v87, v65, v63);
                v85 = &v59[v64];
                v89 = (char *)v138;
              }
              else
              {
                v86 = v63;
                v89 = (char *)v138;
                memmove(v138, v65, v63);
              }
              if ( (*v85 & 1) != 0 && v65->Model == D3DKMT_PM_REDIRECTED_FLIP )
              {
                if ( (v65->Token.Flip.Flags.Value & 0x2000) == 0 )
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
                if ( (unsigned int)((int)(v65->Token.Flip.Flags.Value << 16) >> 30) > 1 )
                {
                  WdLogSingleEntry1(1LL, 452LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FL"
                              "IP_SUBMITTED || pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPEND"
                              "ENT_FLIP_STAGE_FLIP_COMPLETE",
                    452LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v65->Token.Flip.Flags.Value ^= (v65->Token.Flip.Flags.Value ^ ((*((__int16 *)&v65->Token.SurfaceComplete
                                                                                + 22) & 0xFFFFC000)
                                                                             + 0x4000)) & 0xC000;
              }
              v138 = &v89[v86];
              v61 = v63 + v126;
              v135 = v63 + v126;
              v127 -= v63;
              v60 = ++v128;
              v58 = v139;
              v62 = v142;
            }
LABEL_120:
            v68 = 31;
            goto LABEL_121;
          }
        }
        v111 = PsGetCurrentProcessSessionId(v48);
        WdLogSingleEntry1(4LL, v111);
LABEL_228:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
        COREACCESS::~COREACCESS((COREACCESS *)v157);
LABEL_229:
        if ( v140 )
          DXGADAPTER::ReleaseReference(v140);
        goto LABEL_231;
      }
    }
  }
  v112 = v130;
  WdLogSingleEntry1(4LL, v130);
  LOBYTE(v5) = *((_DWORD *)v112 + 50) == 1;
  if ( v5 )
    goto LABEL_228;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
  COREACCESS::~COREACCESS((COREACCESS *)v157);
  if ( v140 )
    DXGADAPTER::ReleaseReference(v140);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v131);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
  if ( v124 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v113, &EventProfilerExit, v114, v122);
  return 0LL;
}

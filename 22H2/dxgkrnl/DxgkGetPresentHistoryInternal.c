/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1C0100460
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0003CB0 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkGetPresentHistory @ 0x1C0283370 (DxgkGetPresentHistory.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C0004910 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C0004A8C (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0008E28 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00266C4 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C0041FFC (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistoryInternal(ULONG64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  _DWORD *v19; // rdx
  ULONG64 v20; // rcx
  __int64 v21; // r8
  int v22; // r12d
  int v23; // eax
  struct _KTHREAD **v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DXGADAPTER *v28; // rbx
  int PairingAdapters; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r13
  struct DXGADAPTER *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  signed __int64 v38; // rcx
  struct DXGADAPTER *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r15
  __int64 v51; // r15
  DXGSESSIONMGR *v52; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  char *v65; // rcx
  __int64 v66; // rdi
  int v67; // r12d
  unsigned int v68; // eax
  __int64 v69; // rbx
  unsigned __int64 v70; // rdx
  __int64 v71; // r8
  unsigned int *v72; // r12
  unsigned int v73; // eax
  unsigned int v74; // ebx
  int v75; // ebx
  LONG v76; // r12d
  __int64 v77; // rsi
  char *v78; // r14
  char *v79; // r13
  int *v80; // rbx
  int v81; // edx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v87; // ebx
  unsigned int v88; // eax
  __int64 v89; // rdx
  unsigned int v90; // ebx
  char *v91; // r9
  int v92; // eax
  unsigned int v93; // edx
  int v94; // ecx
  int v95; // eax
  _QWORD *v96; // rax
  __int16 v97; // dx
  unsigned int v98; // ecx
  int v99; // edx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  bool v107; // zf
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  _QWORD *v114; // rax
  int v115; // eax
  __int64 v116; // rax
  int v117; // r9d
  __int64 v118; // rax
  __int64 v119; // rax
  _OWORD *v120; // rax
  _DWORD *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rax
  int v129; // r9d
  _QWORD *v130; // rax
  int v131; // r12d
  __int64 v132; // rax
  int v133; // r9d
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  void *v142; // r9
  __int64 v143; // rax
  __int64 v144; // rax
  _DWORD *v145; // rdx
  _DWORD *v146; // rdx
  _DWORD *v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  unsigned __int64 *v151; // [rsp+28h] [rbp-190h]
  __int64 v152; // [rsp+30h] [rbp-188h]
  int v153; // [rsp+40h] [rbp-178h]
  int v154; // [rsp+48h] [rbp-170h] BYREF
  __int64 v155; // [rsp+50h] [rbp-168h]
  char v156; // [rsp+58h] [rbp-160h]
  int v157; // [rsp+60h] [rbp-158h]
  int v158; // [rsp+64h] [rbp-154h]
  unsigned int v159; // [rsp+68h] [rbp-150h]
  struct DXGADAPTER *v160; // [rsp+70h] [rbp-148h] BYREF
  __int64 v161; // [rsp+78h] [rbp-140h] BYREF
  char v162; // [rsp+80h] [rbp-138h]
  unsigned int v163; // [rsp+88h] [rbp-130h] BYREF
  int v164; // [rsp+8Ch] [rbp-12Ch]
  int v165; // [rsp+90h] [rbp-128h]
  int v166; // [rsp+94h] [rbp-124h]
  void *v167; // [rsp+98h] [rbp-120h]
  __int64 v168; // [rsp+A0h] [rbp-118h]
  char *v169; // [rsp+A8h] [rbp-110h]
  struct DXGADAPTER *v170; // [rsp+B0h] [rbp-108h] BYREF
  unsigned int v171; // [rsp+C0h] [rbp-F8h]
  int v172; // [rsp+C4h] [rbp-F4h]
  DXGPRESENTHISTORYTOKENQUEUE *v173; // [rsp+C8h] [rbp-F0h]
  __int64 v174; // [rsp+D0h] [rbp-E8h] BYREF
  char v175; // [rsp+D8h] [rbp-E0h]
  struct DXGADAPTER *v176; // [rsp+E0h] [rbp-D8h] BYREF
  char *v177; // [rsp+E8h] [rbp-D0h]
  char v178[8]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v179; // [rsp+F8h] [rbp-C0h]
  int v180; // [rsp+100h] [rbp-B8h]
  int v181; // [rsp+108h] [rbp-B0h]
  unsigned __int64 v182; // [rsp+110h] [rbp-A8h] BYREF
  unsigned int v183[4]; // [rsp+118h] [rbp-A0h]
  __int128 v184; // [rsp+128h] [rbp-90h]
  _BYTE v185[16]; // [rsp+140h] [rbp-78h] BYREF
  DXGADAPTER *v186; // [rsp+150h] [rbp-68h]
  char v187; // [rsp+158h] [rbp-60h]
  __int64 v188; // [rsp+160h] [rbp-58h]

  v166 = a2;
  v154 = -1;
  v155 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v156 = 1;
    v154 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v156 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v154, 2060LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v15 = *((_QWORD *)Current + 1)) == 0 )
  {
    v15 = v14;
  }
  v168 = v15;
  if ( !v15 )
  {
    v105 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v105 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v106);
    v107 = v156 == 0;
LABEL_124:
    if ( v107 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_207;
  }
  if ( *(_BYTE *)(v15 + 346) )
  {
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v161, (struct DXGFASTMUTEX *const *)v15);
    if ( v162 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
      v114[3] = 275LL;
      v114[4] = 4LL;
      v114[5] = &v161;
      v114[6] = 0LL;
      v114[7] = 0LL;
      WdLogEvent5_WdCriticalError(v114);
    }
    v18 = v161;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v18 + 16) == KeGetCurrentThread() )
    {
      v115 = *(_DWORD *)(v18 + 24);
      if ( v115 <= 0 )
      {
        v116 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v116 + 24) = 661LL;
        WdLogEvent5_WdAssertion(v116);
        v115 = *(_DWORD *)(v18 + 24);
      }
      v23 = v115 + 1;
      v22 = 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v117 = *(_DWORD *)(v18 + 28);
          if ( v117 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, &EventBlockThread, v21, v117);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v18 + 8));
        ExAcquirePushLockExclusiveEx(v18, 0LL);
      }
      if ( *(_QWORD *)(v18 + 16) )
      {
        v118 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v118 + 24) = 685LL;
        WdLogEvent5_WdAssertion(v118);
      }
      if ( *(_DWORD *)(v18 + 24) )
      {
        v119 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v119 + 24) = 686LL;
        WdLogEvent5_WdAssertion(v119);
      }
      *(_QWORD *)(v18 + 16) = KeGetCurrentThread();
      v22 = 1;
      v23 = 1;
    }
    *(_DWORD *)(v18 + 24) = v23;
    v162 = 1;
    if ( a2 )
    {
      v181 = 0;
      v120 = (_OWORD *)a1;
      if ( a1 >= MmUserProbeAddress )
        v120 = (_OWORD *)MmUserProbeAddress;
      *(_OWORD *)v183 = *v120;
      v184 = v120[1];
      v121 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v121 = (_DWORD *)MmUserProbeAddress;
      *v121 = 0;
      v19 = (_DWORD *)(a1 + 8);
      v20 = MmUserProbeAddress;
      if ( a1 + 8 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = 0;
    }
    else
    {
      *(_OWORD *)v183 = *(_OWORD *)a1;
      v184 = *(_OWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    if ( !(_QWORD)v184 )
    {
      v108 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v108 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v108);
LABEL_123:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v109);
      v107 = v156 == 0;
      goto LABEL_124;
    }
    v176 = 0LL;
    v24 = (struct _KTHREAD **)v15;
    v25 = v183[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v170, v183[0], v24, &v176, 1);
    v28 = v176;
    if ( !v176 )
    {
      v122 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v122 + 24) = v25;
      *(_QWORD *)(v122 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v122);
LABEL_148:
      if ( v170 )
        DXGADAPTER::ReleaseReference(v170);
      goto LABEL_123;
    }
    v160 = 0LL;
    v182 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v176, 0, &v160, &v182, 0LL, 0LL, 0);
    v32 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v124 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v124 + 24) = v28;
      *(_QWORD *)(v124 + 32) = v32;
      WdLogEvent5_WdError(v124);
      if ( v170 )
        DXGADAPTER::ReleaseReference(v170);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v125);
      if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_198:
        McTemplateK0q_EtwWriteTransfer(v84, &EventProfilerExit, v85, v154);
      return (unsigned int)v32;
    }
    else
    {
      v33 = v160;
      if ( !v160 )
      {
        v126 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v126 + 24) = 294LL;
        WdLogEvent5_WdAssertion(v126);
      }
      COREACCESS::COREACCESS((COREACCESS *)v185, v33);
      if ( v187 )
      {
        v127 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
        v127[3] = 275LL;
        v127[4] = 4LL;
        v127[5] = v185;
        v127[6] = 0LL;
        v127[7] = 0LL;
        WdLogEvent5_WdCriticalError(v127);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v186 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v186 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v36, &EventBlockThread, v37, 72);
          KeWaitForSingleObject((char *)v186 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v186, 0LL);
      }
      v188 = 0LL;
      v187 = 1;
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v160 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v39 = v160;
      if ( v38 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v160 + 2), v160);
      v40 = *((_QWORD *)v39 + 338);
      if ( !v40 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v38, v34);
        *(_QWORD *)(v128 + 24) = 306LL;
        WdLogEvent5_WdAssertion(v128);
        v40 = *((_QWORD *)v39 + 338);
      }
      v172 = 0;
      v165 = 0;
      v164 = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178, (struct _KTHREAD **)(v40 + 840), 0);
      v41 = v179;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v41, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v129 = *(_DWORD *)(v41 + 24);
          if ( v129 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v43, &EventBlockThread, v44, v129);
        }
        ExAcquirePushLockSharedEx(v41, 0LL);
      }
      v180 = 1;
      v46 = PsGetCurrentProcess(v43, v42, v44, v45);
      ProcessSessionId = PsGetProcessSessionId(v46);
      if ( ProcessSessionId < *(_DWORD *)(v40 + 872) )
      {
        v50 = 8LL * ProcessSessionId;
        if ( *(_QWORD *)(v50 + *(_QWORD *)(v40 + 880)) )
        {
          _mm_lfence();
          v51 = *(_QWORD *)(v50 + *(_QWORD *)(v40 + 880));
          v173 = (DXGPRESENTHISTORYTOKENQUEUE *)v51;
          if ( v51 )
          {
            v52 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v49, v48) + 102);
            if ( v52 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId();
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v52,
                                                 CurrentProcessSessionId);
              v55 = SessionDataForSpecifiedSession;
              if ( SessionDataForSpecifiedSession )
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX(
                  (DXGAUTOMUTEX *)&v174,
                  (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
                  0);
                if ( v175 )
                {
                  v130 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57, v56);
                  v130[3] = 275LL;
                  v130[4] = 4LL;
                  v130[5] = &v174;
                  v130[6] = 0LL;
                  v130[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v130);
                }
                v58 = v174;
                KeEnterCriticalRegion();
                if ( *(struct _KTHREAD **)(v58 + 16) == KeGetCurrentThread() )
                {
                  v131 = *(_DWORD *)(v58 + 24);
                  if ( v131 <= 0 )
                  {
                    v132 = WdLogNewEntry5_WdAssertion(v60, v59);
                    *(_QWORD *)(v132 + 24) = 661LL;
                    WdLogEvent5_WdAssertion(v132);
                    v131 = *(_DWORD *)(v58 + 24);
                  }
                  v22 = v131 + 1;
                }
                else
                {
                  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v58, 0LL) )
                  {
                    if ( bTracingEnabled )
                    {
                      v133 = *(_DWORD *)(v58 + 28);
                      if ( v133 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v62, &EventBlockThread, v63, v133);
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)(v58 + 8));
                    ExAcquirePushLockExclusiveEx(v58, 0LL);
                  }
                  if ( *(_QWORD *)(v58 + 16) )
                  {
                    v134 = WdLogNewEntry5_WdAssertion(v62, v61);
                    *(_QWORD *)(v134 + 24) = 685LL;
                    WdLogEvent5_WdAssertion(v134);
                  }
                  if ( *(_DWORD *)(v58 + 24) )
                  {
                    v135 = WdLogNewEntry5_WdAssertion(v62, v61);
                    *(_QWORD *)(v135 + 24) = 686LL;
                    WdLogEvent5_WdAssertion(v135);
                  }
                  *(_QWORD *)(v58 + 16) = KeGetCurrentThread();
                }
                *(_DWORD *)(v58 + 24) = v22;
                v175 = 1;
                v177 = (char *)v55 + 56;
                v169 = (char *)v55 + 16440;
                v167 = (void *)v184;
                v159 = v183[1];
                v163 = 2048;
                if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
                            (KSPIN_LOCK *)v51,
                            (__int64)v55 + 16440,
                            &v163,
                            (struct DXGSESSIONDATA *)((char *)v55 + 56),
                            (struct DXGSESSIONDATA *)((char *)v55 + 16440)) < 0 )
                {
                  v136 = WdLogNewEntry5_WdAssertion(v65, v64);
                  *(_QWORD *)(v136 + 24) = 374LL;
                  WdLogEvent5_WdAssertion(v136);
                }
                v157 = 0;
                v153 = 0;
                v66 = 0LL;
                v67 = v165;
                v68 = v163;
                v171 = v163;
                LODWORD(v69) = v164;
                while ( 1 )
                {
                  v158 = v67;
                  v70 = 0x1C0000000uLL;
                  if ( (unsigned int)v66 >= v68 )
                  {
LABEL_56:
                    v172 = v66;
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v51, 0);
                    if ( v166 )
                    {
                      v145 = (_DWORD *)(a1 + 24);
                      if ( a1 + 24 >= MmUserProbeAddress )
                        v145 = (_DWORD *)MmUserProbeAddress;
                      *v145 = v66;
                      if ( (_DWORD)v66 || !(_DWORD)v69 )
                      {
                        v147 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v147 = (_DWORD *)MmUserProbeAddress;
                        *v147 = v67;
                      }
                      else
                      {
                        v146 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v146 = (_DWORD *)MmUserProbeAddress;
                        *v146 = v69;
                        v157 = -1073741789;
                        v153 = -1073741789;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 24) = v66;
                      if ( (_DWORD)v66 || !(_DWORD)v69 )
                      {
                        *(_DWORD *)(a1 + 8) = v67;
                      }
                      else
                      {
                        *(_DWORD *)(a1 + 8) = v69;
                        v157 = -1073741789;
                        v153 = -1073741789;
                      }
                    }
                    v76 = v66;
                    v77 = 0LL;
                    v78 = v177;
                    v79 = v169;
                    while ( (unsigned int)v77 < (unsigned int)v66 )
                    {
                      v80 = *(int **)&v78[8 * v77];
                      v81 = *v80;
                      if ( *v80 == 2
                        && (v79[v77] & 1) != 0
                        && (v98 = v80[15] ^ (v80[15] ^ ((v80[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
                            v80[15] = v98,
                            (v98 & 0x30000) < 0x20000) )
                      {
                        --v76;
                        v77 = (unsigned int)(v77 + 1);
                      }
                      else
                      {
                        if ( bTracingEnabled )
                        {
                          switch ( v81 )
                          {
                            case 1:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                              v82 = *((_QWORD *)v80 + 2);
                              break;
                            case 2:
                              v82 = *((_QWORD *)v80 + 3);
                              break;
                            default:
                              v82 = 0LL;
                              break;
                          }
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            LODWORD(v152) = v80[1];
                            LODWORD(v151) = v81;
                            McTemplateK0ppqqx_EtwWriteTransfer(
                              v82,
                              &EventRetirePresentHistory,
                              (unsigned int)v152,
                              v160,
                              v80,
                              v151,
                              v152,
                              v82);
                          }
                        }
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v51 + 48), (PSLIST_ENTRY)v80 - 1);
                        v77 = (unsigned int)(v77 + 1);
                      }
                    }
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v51, v66);
                    LODWORD(v32) = v157;
                    if ( v76 )
                      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v51 + 64), 0, v76, 0);
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v174);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
                    COREACCESS::~COREACCESS((COREACCESS *)v185);
                    if ( v170 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v170 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v170 + 2), v170);
                      LODWORD(v32) = v153;
                    }
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161);
                    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v83);
                    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                      goto LABEL_198;
                    return (unsigned int)v32;
                  }
                  v71 = (unsigned int)v66;
                  v72 = *(unsigned int **)&v177[8 * v66];
                  v73 = *v72;
                  if ( *v72 == 1 )
                  {
                    v87 = v72[14];
                    if ( v87 <= 0x10 )
                    {
                      v75 = 16 * v87 + 67;
                      goto LABEL_78;
                    }
                    v140 = WdLogNewEntry5_WdAssertion(v65, 0x1C0000000uLL);
                    *(_QWORD *)(v140 + 24) = 53LL;
                    WdLogEvent5_WdAssertion(v140);
                    v69 = 0LL;
                    v71 = (unsigned int)v66;
                  }
                  else if ( v73 == 3 )
                  {
                    v74 = v72[10];
                    if ( v74 <= 0x10 )
                    {
                      v75 = 16 * v74 + 51;
LABEL_78:
                      v69 = v75 & 0xFFFFFFF8;
                      goto LABEL_79;
                    }
                    v139 = WdLogNewEntry5_WdAssertion(v65, 0x1C0000000uLL);
                    *(_QWORD *)(v139 + 24) = 73LL;
                    WdLogEvent5_WdAssertion(v139);
                    v69 = 0LL;
                    v71 = (unsigned int)v66;
                  }
                  else
                  {
                    switch ( v73 )
                    {
                      case 2u:
                        v90 = v72[205];
                        if ( v90 <= 0x10 )
                        {
                          v75 = 16 * v90 + 831;
                          goto LABEL_78;
                        }
                        v137 = WdLogNewEntry5_WdAssertion(v65, 0x1C0000000uLL);
                        *(_QWORD *)(v137 + 24) = 63LL;
                        WdLogEvent5_WdAssertion(v137);
                        v69 = 0LL;
                        v71 = (unsigned int)v66;
                        break;
                      case 4u:
                      case 5u:
                      case 7u:
                      case 8u:
                        v75 = 31;
                        goto LABEL_78;
                      case 9u:
                        v75 = 47;
                        goto LABEL_78;
                      default:
                        v138 = WdLogNewEntry5_WdAssertion(v65, 0x1C0000000uLL);
                        *(_QWORD *)(v138 + 24) = 96LL;
                        WdLogEvent5_WdAssertion(v138);
                        v75 = 7;
                        v71 = (unsigned int)v66;
                        goto LABEL_78;
                    }
                  }
LABEL_79:
                  v164 = v69;
                  if ( !(_DWORD)v69 )
                  {
                    v141 = WdLogNewEntry5_WdAssertion(v65, v70);
                    *(_QWORD *)(v141 + 24) = 384LL;
                    WdLogEvent5_WdAssertion(v141);
                    v71 = (unsigned int)v66;
                  }
                  if ( (unsigned int)v69 > v159 )
                  {
                    v157 = 261;
                    v153 = 261;
                    v67 = v158;
                    goto LABEL_56;
                  }
                  v72[1] = v69;
                  v88 = *v72;
                  if ( *v72 == 2 )
                  {
                    v91 = v169;
                    v92 = (unsigned __int8)v169[v71];
                    v93 = v72[15];
                    if ( (v92 & 1) != 0 )
                    {
                      v99 = v93 | 0x2000;
                      v72[15] = v99;
                      v94 = v99 ^ (v99 ^ ((unsigned __int8)v91[v71] << 17)) & 0x40000;
                    }
                    else
                    {
                      v94 = v93 ^ (v93 ^ (v92 << 18)) & 0x100000;
                      v72[15] = v94;
                      if ( (v91[v71] & 8) == 0 )
                      {
LABEL_94:
                        if ( (v91[v71] & 0x20) != 0 )
                          v95 = 0;
                        else
                          v95 = 0x8000000;
                        v72[15] = v95 | v94 & 0xF7FFFFFF;
                        v96 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
                        v96[3] = v72;
                        v96[4] = *((_QWORD *)v72 + 2);
                        v96[5] = (v72[15] >> 13) & 1;
                        v96[6] = *((_QWORD *)v72 + 9);
                        v96[7] = *((_QWORD *)v72 + 1);
                        WdLogEvent5_WdPresentTokenEvent(v96);
                        v88 = *v72;
                        v71 = (unsigned int)v66;
                        goto LABEL_83;
                      }
                      v94 |= 0x1000000u;
                    }
                    v72[15] = v94;
                    goto LABEL_94;
                  }
LABEL_83:
                  if ( v88 == 9 )
                    v72[8] ^= (v72[8] ^ ((unsigned __int8)v169[v71] >> 4)) & 1;
                  if ( v166 )
                  {
                    v142 = v167;
                    if ( (unsigned __int64)v167 + v69 > MmUserProbeAddress || (char *)v167 + v69 <= v167 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v142, v72, (unsigned int)v69);
                  }
                  else
                  {
                    memmove(v167, v72, (unsigned int)v69);
                  }
                  if ( *v72 == 2 )
                  {
                    v65 = v169;
                    if ( (v169[v66] & 1) != 0 )
                    {
                      v65 = (char *)v72[15];
                      if ( ((unsigned __int16)v65 & 0x2000) == 0 )
                      {
                        v143 = WdLogNewEntry5_WdAssertion(v65, v89);
                        *(_QWORD *)(v143 + 24) = 458LL;
                        WdLogEvent5_WdAssertion(v143);
                        v65 = (char *)v72[15];
                      }
                      v97 = (__int16)v65;
                      if ( (unsigned int)((__int16)v65 >> 14) > 1 )
                      {
                        v144 = WdLogNewEntry5_WdAssertion(v65, (unsigned __int16)v65);
                        *(_QWORD *)(v144 + 24) = 459LL;
                        WdLogEvent5_WdAssertion(v144);
                        v97 = *((_WORD *)v72 + 30);
                        v65 = (char *)v72[15];
                      }
                      v72[15] = (unsigned int)v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)((v97 & 0xC000) + 0x4000)) & 0xC000;
                    }
                  }
                  v167 = (char *)v167 + (unsigned int)v69;
                  v67 = v69 + v158;
                  v165 = v69 + v158;
                  v159 -= v69;
                  v66 = (unsigned int)(v66 + 1);
                  v68 = v171;
                }
              }
            }
            v123 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v123 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
            WdLogEvent5_WdEvent(v123);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
            COREACCESS::~COREACCESS((COREACCESS *)v185);
            goto LABEL_148;
          }
          v39 = v160;
        }
      }
      v100 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v100 + 24) = v39;
      WdLogEvent5_WdEvent(v100);
      if ( *((_DWORD *)v39 + 50) == 1 )
      {
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
        COREACCESS::~COREACCESS((COREACCESS *)v185);
        if ( v170 )
          DXGADAPTER::ReleaseReference(v170);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v101);
        if ( !v156 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 3221225485LL;
LABEL_207:
        McTemplateK0q_EtwWriteTransfer(v102, &EventProfilerExit, v103, v154);
        return 3221225485LL;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
      COREACCESS::~COREACCESS((COREACCESS *)v185);
      if ( v170 )
        DXGADAPTER::ReleaseReference(v170);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v161);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v148);
      if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v149, &EventProfilerExit, v150, v154);
      return 0LL;
    }
  }
  else
  {
    v110 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v110 + 24) = v15;
    *(_QWORD *)(v110 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v111);
    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v112, &EventProfilerExit, v113, v154);
    return 3221225506LL;
  }
}

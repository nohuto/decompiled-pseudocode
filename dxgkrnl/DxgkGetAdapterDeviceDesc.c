__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v9; // rbx
  _QWORD **v10; // rbx
  _QWORD *v11; // rdx
  _QWORD *v12; // r13
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGSESSIONMGR *v20; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v23; // eax
  __int64 v24; // r13
  int v25; // r14d
  __int64 v26; // rbx
  int v27; // r8d
  _BOOL8 v28; // rbx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v31; // rcx
  _BOOL8 v32; // rbx
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned __int64 *v36; // rcx
  struct DXGADAPTER **v37; // rax
  volatile signed __int64 *v38; // r14
  struct DXGADAPTER *v39; // r9
  bool v40; // zf
  signed __int64 v41; // rax
  struct DXGADAPTER *v42; // r14
  struct DXGADAPTER *v43; // r14
  struct DXGADAPTER *v44; // r10
  _WORD *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int16 v49; // ax
  _WORD *v50; // rax
  unsigned __int16 *v51; // rax
  _WORD *v52; // rdx
  __int64 v53; // r8
  unsigned __int64 v54; // rcx
  __int64 v55; // r9
  __int16 v56; // ax
  _WORD *v57; // rax
  struct DXGADAPTER *v58; // rbx
  struct DXGADAPTER *v59; // r14
  __int64 v60; // rcx
  struct DXGADAPTER *v61; // r13
  __int64 v62; // rdx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rbx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // eax
  int v70; // eax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rbx
  __int64 v77; // rax
  MONITOR_MGR *v78; // rbx
  int MonitorInstance; // eax
  __int64 v80; // rdx
  MONITOR_MGR *v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rdx
  unsigned int v84; // eax
  DXGMONITOR *v85; // rbx
  int CurrentWireFormatAndColorSpace; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v87; // ecx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v88; // ebx
  int v89; // eax
  DXGMONITOR *v90; // rbx
  int v91; // edx
  DXGMONITOR *v92; // rbx
  __int64 v93; // r9
  unsigned int v94; // edx
  __int64 v95; // rsi
  _WORD *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // r8
  __int16 v100; // ax
  _WORD *v101; // rax
  unsigned __int16 *v102; // rax
  _WORD *v103; // rdx
  __int64 v104; // r9
  unsigned __int64 v105; // rcx
  __int64 v106; // r8
  __int16 v107; // ax
  _WORD *v108; // rax
  __int64 v109; // rax
  char *v110; // rcx
  struct DXGADAPTER *v111; // rcx
  struct DXGADAPTER *v112; // rcx
  int v113; // eax
  __int64 v114; // r8
  unsigned __int8 v117[8]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGADAPTER *SessionViewOwner; // [rsp+68h] [rbp-A0h]
  unsigned __int8 v119[8]; // [rsp+70h] [rbp-98h] BYREF
  struct _LUID v120; // [rsp+78h] [rbp-90h] BYREF
  struct DXGADAPTER *v121; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v122; // [rsp+88h] [rbp-80h] BYREF
  struct DXGADAPTER *v123; // [rsp+90h] [rbp-78h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v124; // [rsp+98h] [rbp-70h] BYREF
  DXGMONITOR *v125; // [rsp+A0h] [rbp-68h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v126; // [rsp+A8h] [rbp-60h] BYREF
  const struct _DXGK_DISPLAYMODE_INFO *v127; // [rsp+B0h] [rbp-58h]
  DXGFASTMUTEX *v128; // [rsp+B8h] [rbp-50h] BYREF
  char v129; // [rsp+C0h] [rbp-48h]
  DXGMONITOR *v130; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v131; // [rsp+D0h] [rbp-38h] BYREF
  struct DXGADAPTER *v132; // [rsp+D8h] [rbp-30h]
  char v133; // [rsp+E0h] [rbp-28h]
  int v134; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v135; // [rsp+F0h] [rbp-18h]
  char v136; // [rsp+F8h] [rbp-10h]
  __int128 v137; // [rsp+100h] [rbp-8h] BYREF
  __int128 v138; // [rsp+110h] [rbp+8h]
  __int128 v139; // [rsp+120h] [rbp+18h]
  unsigned __int64 v140; // [rsp+130h] [rbp+28h] BYREF
  DXGADAPTER *v141[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v142[2]; // [rsp+148h] [rbp+40h] BYREF
  char v143; // [rsp+158h] [rbp+50h]
  char v144; // [rsp+160h] [rbp+58h] BYREF
  char v145; // [rsp+168h] [rbp+60h] BYREF
  char v146; // [rsp+169h] [rbp+61h]
  _BYTE v147[8]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v148; // [rsp+178h] [rbp+70h]
  struct DXGADAPTER *v149; // [rsp+180h] [rbp+78h]
  char v150; // [rsp+188h] [rbp+80h]
  __int64 v151; // [rsp+190h] [rbp+88h]
  _BYTE v152[8]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v153; // [rsp+1B8h] [rbp+B0h]
  struct DXGADAPTER *v154; // [rsp+1C0h] [rbp+B8h]
  char v155; // [rsp+1C8h] [rbp+C0h]
  __int64 v156; // [rsp+1D0h] [rbp+C8h]

  v4 = 0;
  v120 = a1;
  v134 = -1;
  v135 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v136 = 1;
    v134 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  }
  else
  {
    v136 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v134, 2185);
  v123 = 0LL;
  v7 = 0LL;
  v121 = 0LL;
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 6667LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pDisplayInfo", 6667LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  v9 = Global;
  if ( !a1.LowPart && !v120.HighPart )
  {
    WdLogSingleEntry1(3LL, 3072LL);
LABEL_204:
    LODWORD(v24) = -1073741811;
    v25 = 1144079361;
    WdLogSingleEntry3(2LL, v120.HighPart, a1.LowPart, 1144079361LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetAdapterDeviceDesc function.",
      v120.HighPart,
      a1.LowPart,
      1144079361LL,
      0LL,
      0LL);
    goto LABEL_205;
  }
  v129 = 0;
  v128 = (struct DXGGLOBAL *)((char *)Global + 720);
  if ( Global == (struct DXGGLOBAL *)-720LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v128 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v128);
  v10 = (_QWORD **)((char *)v9 + 768);
  v129 = 1;
  v11 = *v10;
  while ( 1 )
  {
LABEL_15:
    if ( v11 == v10 || !v11 )
    {
      if ( v129 )
      {
        v129 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v128);
      }
      goto LABEL_204;
    }
    v12 = v11;
    v11 = (_QWORD *)*v11;
    if ( *(_QWORD *)((char *)v12 + 404) == __PAIR64__(v120.HighPart, a1.LowPart) )
    {
      _m_prefetchw(v12 + 3);
      v13 = v12[3];
      if ( v13 )
        break;
    }
  }
  while ( 1 )
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange64(v12 + 3, v13 + 1, v13);
    if ( v14 == v13 )
      break;
    if ( !v13 )
      goto LABEL_15;
  }
  if ( v129 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v128);
  v15 = DxgkAcquireSessionModeChangeLock(0LL);
  if ( v15 < 0 )
  {
    v25 = 1144079362;
    v24 = v15;
    WdLogSingleEntry2(2LL, v15, 1144079362LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v24,
      1144079362LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_205;
  }
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v27 = a2;
  }
  else
  {
    v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v20
      || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16, v18, v19),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                              v20,
                                              CurrentProcessSessionId)) == 0LL) )
    {
      LODWORD(v24) = -1073741811;
      v25 = 1144079369;
      v28 = PsGetCurrentProcess(v17) != (_QWORD)PsInitialSystemProcess;
      CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry3(2LL, ProcessSessionId, v28, 1144079369LL);
      v32 = PsGetCurrentProcess(v31) != (_QWORD)PsInitialSystemProcess;
      v33 = PsGetCurrentProcess(PsInitialSystemProcess);
      v34 = PsGetProcessSessionId(v33);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Remote session: No session data for session 0x%I64x!!! System Process %I64d (0x%I64x)",
        v34,
        v32,
        1144079369LL,
        0LL,
        0LL);
      goto LABEL_35;
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4627) == *((_DWORD *)v12 + 101)
      && *((_DWORD *)SessionDataForSpecifiedSession + 4628) == *((_DWORD *)v12 + 102) )
    {
      v23 = *((_DWORD *)SessionDataForSpecifiedSession + 4629);
    }
    else
    {
      v23 = 0;
    }
    if ( a2 != -1 && a2 >= v23 )
    {
      LODWORD(v24) = -1073741811;
      v25 = 1144079363;
      v26 = v23;
      WdLogSingleEntry3(2LL, a2, v23, 1144079363LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Remote session: VidPnSourceId 0x%I64x is not less than the number of VidPnSources 0x%I64x.  (0x%I64x)",
        a2,
        v26,
        1144079363LL,
        0LL,
        0LL);
LABEL_35:
      DxgkReleaseSessionModeChangeLock();
      goto LABEL_205;
    }
    v27 = -1;
    a2 = -1;
  }
  v35 = 0;
  v36 = (unsigned __int64 *)&v144;
  if ( v27 == -1 )
    v36 = 0LL;
  v37 = &v123;
  if ( v27 == -1 )
    v37 = 0LL;
  else
    v35 = v27;
  if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v12, v35, &v121, &v140, v37, v36, 0) < 0 )
  {
    LODWORD(v24) = -1073741811;
    v25 = 1144079364;
    WdLogSingleEntry4(2LL, v120.HighPart, a1.LowPart, a2, 1144079364LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter (0x%I64x%08I64x) VidPn source 0x%I64x! (0x%I64x)",
      v120.HighPart,
      a1.LowPart,
      a2,
      1144079364LL,
      0LL);
    goto LABEL_35;
  }
  v38 = (volatile signed __int64 *)v121;
  if ( !v121 )
  {
    WdLogSingleEntry1(1LL, 6784LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 6784LL, 0LL, 0LL, 0LL, 0LL);
  }
  v39 = v123;
  SessionViewOwner = v123;
  if ( (a2 == -1) != (v123 == 0LL) )
  {
    WdLogSingleEntry1(1LL, 6785LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(VidPnSourceId == D3DDDI_ID_UNINITIALIZED) == (pDisplayAdapter == NULL)",
      6785LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v39 = SessionViewOwner;
  }
  v40 = v39 == 0LL;
  if ( v39 )
  {
    if ( (*((_DWORD *)v39 + 109) & 0x100) != 0 )
    {
      v141[0] = 0LL;
      if ( (int)DxgkpGetIndirectDisplayPairedAdapter(v39, 0, (struct DXGADAPTER_REFERENCE *)v141) >= 0 )
        v7 = *(_QWORD *)((char *)v141[0] + 404);
      DXGADAPTER_REFERENCE::Assign(v141, 0LL);
      v39 = SessionViewOwner;
    }
    v40 = v39 == 0LL;
  }
  if ( v40 )
    v39 = (struct DXGADAPTER *)v38;
  v146 = 0;
  v149 = (struct DXGADAPTER *)v38;
  v150 = 0;
  v151 = 0LL;
  if ( v38 )
  {
    _InterlockedIncrement64(v38 + 3);
    v38 = (volatile signed __int64 *)v121;
    v148 = -1LL;
  }
  v155 = 0;
  v156 = 0LL;
  if ( v39 )
  {
    v38 = (volatile signed __int64 *)v39;
    v154 = v39;
    goto LABEL_64;
  }
  v154 = (struct DXGADAPTER *)v38;
  if ( v38 )
  {
LABEL_64:
    _InterlockedIncrement64(v38 + 3);
    v153 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v12[2], (struct DXGADAPTER *)v12);
  SessionViewOwner = v121;
  v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v42 = v121;
  if ( v41 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v121 + 2), v121);
  if ( v123 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v123 + 2), v123);
    v42 = v121;
  }
  else
  {
    v123 = v42;
  }
  v142[1] = v42;
  _InterlockedIncrement64((volatile signed __int64 *)SessionViewOwner + 3);
  v43 = v121;
  v142[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v43 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v43 + 38);
  v143 = 1;
  if ( *((_DWORD *)v121 + 50) != 1 )
  {
    LODWORD(v24) = -1073741130;
    v25 = 1144079365;
    WdLogSingleEntry4(3LL, v120.HighPart, a1.LowPart, a2, 1144079365LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v142);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v145);
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_205;
  }
  v44 = v121;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v121 + 108);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v44 + 103);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v44 + 104);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v44 + 105);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v44 + 106);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v44 + 107);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v44 + 109) >> 7) & 1;
  v45 = (_WORD *)(a4 + 860);
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v44 + 72) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v44 + 705);
  v46 = *((_QWORD *)v44 + 217);
  if ( v46 )
  {
    v47 = 128LL;
    v48 = v46 - (_QWORD)v45;
    do
    {
      if ( v47 == -2147483518 )
        break;
      v49 = *(_WORD *)((char *)v45 + v48);
      if ( !v49 )
        break;
      *v45++ = v49;
      --v47;
    }
    while ( v47 );
    v50 = v45 - 1;
    if ( v47 )
      v50 = v45;
    *v50 = 0;
  }
  else if ( a4 != -860 )
  {
    *v45 = 0;
  }
  v51 = (unsigned __int16 *)*((_QWORD *)v44 + 218);
  v52 = (_WORD *)(a4 + 1116);
  v53 = 260LL;
  v54 = ((unsigned __int64)*v51 >> 1) - 260;
  v55 = *((_QWORD *)v51 + 1) - (a4 + 1116);
  do
  {
    if ( !(v53 + v54) )
      break;
    v56 = *(_WORD *)((char *)v52 + v55);
    if ( !v56 )
      break;
    *v52++ = v56;
    --v53;
  }
  while ( v53 );
  v57 = v52 - 1;
  if ( v53 )
    v57 = v52;
  *v57 = 0;
  _InterlockedDecrement((volatile signed __int32 *)v44 + 38);
  ExReleasePushLockSharedEx((char *)v44 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v121 + 2), v121);
  if ( !v123 )
    goto LABEL_184;
  v132 = v123;
  _InterlockedIncrement64((volatile signed __int64 *)v123 + 3);
  v58 = v123;
  v131 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v58 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v58 + 38);
  v133 = 1;
  if ( *((_DWORD *)v123 + 50) != 1 )
  {
    LODWORD(v24) = -1073741130;
    v25 = 1144079366;
    WdLogSingleEntry4(3LL, v120.HighPart, a1.LowPart, a2, 1144079366LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v131);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v145);
    DxgkReleaseSessionModeChangeLock();
LABEL_205:
    if ( *(_DWORD *)a4 == -21 )
      *(_DWORD *)(a4 + 2024) = v25;
    v4 = v24;
    goto LABEL_208;
  }
  if ( a2 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v59 = v123;
    goto LABEL_162;
  }
  v59 = v123;
  v60 = *((_QWORD *)v123 + 365);
  if ( !v60 )
  {
    v94 = -1;
    goto LABEL_160;
  }
  if ( a2 >= *(_DWORD *)(v60 + 96) )
  {
    v94 = *(_DWORD *)(v60 + 96);
LABEL_160:
    LODWORD(v24) = -1073741811;
    v125 = (DXGMONITOR *)1144079367;
    v95 = v94;
    WdLogSingleEntry5(2LL, a2, v94, v120.HighPart, a1.LowPart, 1144079367LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified VidPnSourceId 0x%I64x is bigger than the total number of VidPnSources 0x%I64x on adapter"
                " (0x%I64x%08I64x). (0x%I64x)",
      a2,
      v95,
      v120.HighPart,
      a1.LowPart,
      1144079367LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v131);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v145);
    DxgkReleaseSessionModeChangeLock();
    v25 = (int)v125;
    goto LABEL_205;
  }
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner((ADAPTER_DISPLAY *)v12[365], a2);
  v61 = SessionViewOwner;
  if ( SessionViewOwner )
  {
    v122 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v59, a2, &v122);
    v62 = v122;
    *(_DWORD *)(a4 + 2052) ^= (*(_DWORD *)(a4 + 2052) ^ (*((_DWORD *)v59 + 109) >> 3)) & 0x8000;
    if ( (_DWORD)v62 == -1 )
      TargetUsage = 0;
    else
      TargetUsage = DmmGetTargetUsage(v59, v62, 0LL);
    *(_DWORD *)(a4 + 2028) = TargetUsage;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v59 + 365), a2);
    v127 = DisplayModeInfo;
    if ( *(_DWORD *)(a4 + 2028) )
    {
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
    }
    else
    {
      *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)v61 + 24);
      *(_OWORD *)(a4 + 1952) = *(_OWORD *)(4000LL * a2 + *(_QWORD *)(*((_QWORD *)v59 + 365) + 128LL) + 688);
    }
    *(_DWORD *)(a4 + 1916) = v122;
    *(_DWORD *)(a4 + 1920) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v59 + 365), a2);
    *(_DWORD *)(a4 + 1924) = *(_DWORD *)DisplayModeInfo;
    *(_DWORD *)(a4 + 1928) = *((_DWORD *)DisplayModeInfo + 1);
    v65 = *((_DWORD *)DisplayModeInfo + 2);
    if ( v65 == 21 )
      goto LABEL_115;
    v66 = v65 - 20;
    if ( !v66 )
    {
      v69 = 3;
      goto LABEL_116;
    }
    v67 = v66 - 2;
    if ( !v67 )
    {
LABEL_115:
      v69 = 4;
      goto LABEL_116;
    }
    v68 = v67 - 1;
    if ( v68 )
    {
      if ( v68 == 18 )
        v69 = 1;
      else
        v69 = 5;
    }
    else
    {
      v69 = 2;
    }
LABEL_116:
    *(_DWORD *)(a4 + 1932) = v69;
    v70 = *((_DWORD *)DisplayModeInfo + 4);
    if ( v70 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
    {
      *(_DWORD *)(a4 + 1936) = 64;
      v71 = 1;
    }
    else
    {
      *(_DWORD *)(a4 + 1936) = v70;
      v71 = *((_DWORD *)DisplayModeInfo + 5);
    }
    *(_DWORD *)(a4 + 1940) = v71;
    *(_DWORD *)(a4 + 1944) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v59 + 365), a2, 2LL);
    *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
    DxgkpCopyMonitorLinkInfoToFlags(v59, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    *(_QWORD *)(a4 + 1968) = *((_QWORD *)v61 + 8);
    SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    if ( *((_DWORD *)SessionViewOwner + 10) == 1 )
    {
      v76 = v122;
      LODWORD(SessionViewOwner) = v122;
      v77 = WdLogNewEntry5_WdTrace(v73, v72, v74, v75);
      *(_QWORD *)(v77 + 24) = v76;
      *(_QWORD *)(v77 + 32) = v59;
      if ( (_DWORD)v76 != -1 )
      {
        if ( !*((_QWORD *)v59 + 365) )
          WdLogSingleEntry0(1LL);
        v78 = *(MONITOR_MGR **)(*((_QWORD *)v59 + 365) + 112LL);
        if ( !v78 )
        {
          WdLogSingleEntry1(2LL, v59);
          goto LABEL_129;
        }
        v125 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v78, (unsigned int)SessionViewOwner, 0, &v125);
        if ( MonitorInstance == -1073741275 )
        {
          v80 = (unsigned int)SessionViewOwner;
          v81 = v78;
          v82 = 7LL;
LABEL_128:
          WdLogSingleEntry2(v82, v80, v81);
          goto LABEL_129;
        }
        if ( MonitorInstance < 0 )
        {
          v80 = (unsigned int)SessionViewOwner;
          v81 = v78;
          v82 = 2LL;
          goto LABEL_128;
        }
        v85 = v125;
        if ( !v125 )
          WdLogSingleEntry0(1LL);
        DXGMONITOR::_AddReference(v85, DxgkGetAdapterDeviceDesc);
        if ( !v85 )
          WdLogSingleEntry0(1LL);
        v124.Value = 0;
        v126 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
        CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(v59, a2, v122, &v124, &v126);
        v87.0 = v124.0;
        if ( CurrentWireFormatAndColorSpace >= 0 )
        {
          v88 = v126;
        }
        else
        {
          v88 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          v87.Value = v124.Value & 0xFFFFFF03 | 8;
          v126 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          v124.0 = v87.0;
        }
        *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v87);
        *(_DWORD *)(a4 + 1980) = v88;
        Feature_StaticDWMHdrPixelFormat__private_ReportDeviceUsage();
        v137 = 0LL;
        v138 = 0LL;
        *(_DWORD *)(a4 + 2040) = *((_DWORD *)v127 + 19);
        v120.LowPart = 0;
        LOWORD(v120.HighPart) = 0;
        v139 = 0LL;
        if ( (v88 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
           || (v119[0] = 0, v88 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL))
          && (v119[0] = 1, v88 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
        {
          v89 = *((_DWORD *)v59 + 109);
          v119[1] = 1;
          if ( (v89 & 0x200) == 0 && (v89 & 8) == 0 )
          {
            WdLogSingleEntry1(1LL, 7023LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"(PickedColorSpace != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) || pDisplayAdapter->GetAdap"
                        "ter()->IsXBoxOneDevice() || pDisplayAdapter->GetAdapter()->IsSoftGPU()",
              7023LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          v119[1] = 0;
        }
        v90 = v125;
        if ( (int)MonitorGetAdvancedColorParams((__int64)v125, v119, (__int64)&v137, (__int64)&v120) >= 0 )
        {
          *(_OWORD *)(a4 + 1984) = v137;
          *(_OWORD *)(a4 + 2000) = v138;
          v91 = *(_DWORD *)(a4 + 2052);
          *(_QWORD *)(a4 + 2016) = v139;
          *(_DWORD *)(a4 + 2024) = DWORD2(v139);
          *(_DWORD *)(a4 + 2052) = (BYTE1(v120.LowPart) != 0 ? 0x1000 : 0) | (LOBYTE(v120.LowPart) != 0 ? 0x200 : 0) | v91 & 0xFFFFEDFF;
        }
        v117[0] = 0;
        v119[5] = 0;
        v119[4] = 0;
        MONITOR_MGR::AcquireMonitorShared(&v130, (__int64)v90);
        v92 = v130;
        if ( !v130 )
        {
          WdLogSingleEntry1(2LL, -1073741275LL);
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v130);
          goto LABEL_152;
        }
        LODWORD(SessionViewOwner) = DXGMONITOR::_GetMonitorNativeFlags(v130, v117, &v119[5], &v119[4]);
        ExReleaseResourceLite((PERESOURCE)((char *)v92 + 24));
        KeLeaveCriticalRegion();
        if ( (int)SessionViewOwner < 0 )
LABEL_152:
          *(_DWORD *)(a4 + 2052) &= ~0x2000u;
        else
          *(_DWORD *)(a4 + 2052) = (v117[0] != 0 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
        MonitorReleaseMonitorHandle((__int64)v59, (__int64)v125, DxgkGetAdapterDeviceDesc, v93);
      }
    }
LABEL_129:
    *(_DWORD *)(a4 + 2052) &= ~0x400u;
    v83 = 4000LL * a2;
    v84 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v59 + 365) + 128LL) + v83 + 3780);
    *(_QWORD *)(a4 + 2032) = v84;
    if ( v84 )
    {
      _mm_lfence();
      v59 = v123;
      if ( *(_DWORD *)(*((_QWORD *)v123 + 365)
                     + 80LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v123 + 365) + 128LL) + v83 + 3780)
                     + 872) == 1 )
      {
        *(_DWORD *)(a4 + 2036) = 1;
      }
      else
      {
        WdLogSingleEntry1(1LL, 7085LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid DXGK_SYNC_LOCK_STYLE, fallback to disable the output SyncLock.",
          7085LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)(a4 + 2032) = 0;
      }
    }
  }
  else
  {
    *(_DWORD *)(a4 + 1916) = -1;
    SessionViewOwner = 0LL;
    *(_OWORD *)(a4 + 1644) = 0LL;
    *(_OWORD *)(a4 + 1952) = 0LL;
    *(_QWORD *)(a4 + 1924) = 0LL;
    *(_QWORD *)(a4 + 1932) = 5LL;
    *(_DWORD *)(a4 + 1940) = 1;
    *(_QWORD *)(a4 + 1944) = 1LL;
    *(_QWORD *)(a4 + 1968) = 0LL;
    SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
  }
LABEL_162:
  v96 = (_WORD *)(a4 + 48);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)v59 + 108);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)v59 + 103);
  *(_DWORD *)(a4 + 28) = *((_DWORD *)v59 + 104);
  *(_DWORD *)(a4 + 32) = *((_DWORD *)v59 + 105);
  *(_DWORD *)(a4 + 36) = *((_DWORD *)v59 + 106);
  *(_DWORD *)(a4 + 40) = *((_DWORD *)v59 + 107);
  *(_DWORD *)(a4 + 824) = (*((_DWORD *)v59 + 109) >> 7) & 1;
  *(_DWORD *)(a4 + 828) = *((_DWORD *)v59 + 72) > 1u;
  *(_DWORD *)(a4 + 44) = *((_DWORD *)v59 + 705);
  v97 = *((_QWORD *)v59 + 217);
  if ( v97 )
  {
    v98 = v97 - (_QWORD)v96;
    v99 = 128LL;
    do
    {
      if ( v99 == -2147483518 )
        break;
      v100 = *(_WORD *)((char *)v96 + v98);
      if ( !v100 )
        break;
      *v96++ = v100;
      --v99;
    }
    while ( v99 );
    v101 = v96 - 1;
    if ( v99 )
      v101 = v96;
    *v101 = 0;
  }
  else if ( a4 != -48 )
  {
    *v96 = 0;
  }
  v102 = (unsigned __int16 *)*((_QWORD *)v59 + 218);
  v103 = (_WORD *)(a4 + 304);
  v104 = 260LL;
  v105 = ((unsigned __int64)*v102 >> 1) - 260;
  v106 = *((_QWORD *)v102 + 1) - (a4 + 304);
  do
  {
    if ( !(v105 + v104) )
      break;
    v107 = *(_WORD *)((char *)v103 + v106);
    if ( !v107 )
      break;
    *v103++ = v107;
    --v104;
  }
  while ( v104 );
  v108 = v103 - 1;
  if ( v104 )
    v108 = v103;
  *v108 = 0;
  v109 = 0LL;
  if ( (*((_DWORD *)v59 + 109) & 0x100) != 0 )
    v109 = v7;
  *(_QWORD *)(a4 + 2044) = v109;
  if ( v133 )
  {
    v110 = (char *)v132 + 136;
    _InterlockedDecrement((volatile signed __int32 *)v132 + 38);
    ExReleasePushLockSharedEx(v110, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v132 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v132 + 2), v132);
  }
LABEL_184:
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  if ( v146 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v145);
  v111 = v154;
  if ( v154 )
  {
    if ( v155 )
    {
      COREACCESS::Release((COREACCESS *)v152);
      v111 = v154;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v111 + 2), v111);
  }
  v112 = v149;
  if ( v149 )
  {
    if ( v150 )
    {
      COREACCESS::Release((COREACCESS *)v147);
      v112 = v149;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v112 + 2), v112);
  }
  DxgkReleaseSessionModeChangeLock();
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v117[2] = 0;
    v117[1] = 0;
    v113 = DxgkpAdapterCheckStereoMode(a1, a2, &v117[1], &v117[2]);
    if ( v113 < 0 )
      WdLogSingleEntry1(3LL, v113);
    else
      *(_DWORD *)(a4 + 2052) = (v117[2] != 0 ? 8 : 0) | (v117[1] != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
  }
LABEL_208:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v134);
  if ( v136 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v114, v134);
  return v4;
}

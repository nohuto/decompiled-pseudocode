void __fastcall DxgkIddHandleSetDisplayConfig2(__int64 a1, __int64 a2, unsigned int *a3, int *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  unsigned int CurrentProcessSessionId; // eax
  int v9; // r15d
  __int64 v10; // r12
  const wchar_t *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LUID *v15; // rdx
  struct DXGADAPTER *v16; // rdx
  struct _LUID v17; // rcx
  const wchar_t *v18; // r9
  int v19; // r9d
  void *v20; // rbx
  int v21; // eax
  __int64 v22; // rbx
  unsigned int *v23; // r8
  unsigned int v24; // ebx
  int v25; // eax
  struct DXGGLOBAL *Global; // rax
  unsigned int v27; // ecx
  unsigned int *v28; // r12
  __int64 v29; // r13
  __int64 v30; // r15
  unsigned int *v31; // rbx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  int MonitorHandle; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  struct _LUID *v43; // rcx
  __int64 v44; // r9
  struct DXGGLOBAL *v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  unsigned __int64 v50; // rbx
  struct DXGGLOBAL *v51; // rax
  int v52; // eax
  const wchar_t *v53; // r9
  const wchar_t *v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  DXGSESSIONMGR *v59; // r15
  unsigned int v60; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rax
  struct _PORT_MESSAGE *v65; // r15
  int v66; // eax
  int v67; // ebx
  int v68; // eax
  ULONG MessageId; // eax
  char v70; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID *v71[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v72; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v73; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v75; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h]
  DXGSESSIONDATA *v77; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+90h] [rbp-70h] BYREF
  __int64 v79; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  ReferenceCounted *v81; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v82; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v83; // [rsp+B8h] [rbp-48h] BYREF
  char v84[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct _LUID *v85; // [rsp+C8h] [rbp-38h]
  char v86; // [rsp+D0h] [rbp-30h]
  union _LARGE_INTEGER v87; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v88; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v89; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v92; // [rsp+100h] [rbp+0h]
  int v93; // [rsp+104h] [rbp+4h]
  _QWORD v94[4]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v95; // [rsp+128h] [rbp+28h]
  unsigned int v96; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v97; // [rsp+130h] [rbp+30h]
  unsigned int v98; // [rsp+134h] [rbp+34h]
  int v99; // [rsp+138h] [rbp+38h]
  _QWORD v100[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v101[4]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v102; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 *v103; // [rsp+180h] [rbp+80h]
  DXGSESSIONDATA **v104; // [rsp+188h] [rbp+88h]
  int *v105[4]; // [rsp+190h] [rbp+90h] BYREF
  char v106; // [rsp+1B0h] [rbp+B0h]
  struct _KAPC_STATE ApcState; // [rsp+1B8h] [rbp+B8h] BYREF
  char v108; // [rsp+1E8h] [rbp+E8h]
  struct _PORT_MESSAGE v109[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v110[144]; // [rsp+240h] [rbp+140h] BYREF

  v4 = (unsigned int)a2;
  v78 = 0LL;
  v7 = (unsigned int)a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  v108 = 0;
  v83 = CurrentProcessSessionId;
  *((_QWORD *)&v102 + 1) = &v78;
  v103 = &v83;
  v104 = &v77;
  v77 = 0LL;
  *(_QWORD *)&v102 = a4;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v105, &v102);
  *a4 = -1073741823;
  if ( (unsigned int)v4 < 4 )
  {
    v9 = -1073741789;
    v10 = (unsigned int)v4;
    WdLogSingleEntry2(2LL, (unsigned int)v4, -1073741789LL);
    v11 = L"Input buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION2, returning 0x%I64x.";
    v12 = -1073741789LL;
LABEL_5:
    v14 = 0LL;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, v12, v14, 0LL, 0LL);
    *a4 = v9;
    goto LABEL_112;
  }
  v73 = a3;
  v13 = *a3;
  if ( (unsigned int)v13 >= 0x10 )
  {
    v12 = -1073741811LL;
    WdLogSingleEntry2(2LL, (unsigned int)v13, -1073741811LL);
    v11 = L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.";
    v9 = -1073741811;
    v10 = *v73;
    goto LABEL_5;
  }
  v10 = v4;
  if ( v4 < 132 * v13 + 4 )
  {
    v9 = -1073741789;
    WdLogSingleEntry3(2LL, v4, *a3, -1073741789LL);
    v11 = L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.";
    v12 = *v73;
    v14 = -1073741789LL;
    goto LABEL_8;
  }
  v71[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v71, v7);
  if ( v71[0] )
  {
    v78 = *(_QWORD *)&v71[0][50].HighPart;
    v82 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v71[0], v15, 0LL, &v82);
    v83 = v82;
    v85 = v71[0];
    v86 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
    v16 = (struct DXGADAPTER *)v71[0];
    if ( v71[0][25].LowPart != 1 || BYTE1(v71[0][354].LowPart) )
      goto LABEL_106;
    v17 = v71[0][365];
    if ( !*(_QWORD *)&v17 || (v71[0][54].HighPart & 0x100) == 0 )
    {
      WdLogSingleEntry2(2LL, v71[0], -1073741811LL);
      v18 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
      goto LABEL_105;
    }
    if ( *v73 > *(_DWORD *)(*(_QWORD *)&v17 + 96LL) )
    {
      WdLogSingleEntry2(2LL, v71[0], -1073741811LL);
      v18 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
LABEL_105:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, (__int64)v71[0], -1073741811LL, 0LL, 0LL, 0LL);
      *a4 = -1073741811;
      goto LABEL_108;
    }
    v75 = 0;
    if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v71[0], v71[0], &v75, 0LL) )
    {
      WdLogSingleEntry2((unsigned int)(v19 + 2), v71[0], -1073741811LL);
      v18 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
      goto LABEL_105;
    }
    v20 = (void *)v71[0][27];
    ObfReferenceObject(v20);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
    v21 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v75, 2LL);
    *a4 = v21;
    if ( v21 < 0 )
    {
      ObfDereferenceObject(v20);
      v22 = v75;
      WdLogSingleEntry2(2LL, v75, *a4);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).",
        v22,
        *a4,
        0LL,
        0LL,
        0LL);
      goto LABEL_108;
    }
    *a4 = DpiFdoWaitConnectionChangeComplete(v20);
    ObfDereferenceObject(v20);
    if ( *a4 < 0 )
    {
      WdLogSingleEntry3(2LL, v71[0], *a4, -1071775725LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x%I"
                  "64x, returning 0x%I64x.",
        (__int64)v71[0],
        *a4,
        -1071775725LL,
        0LL,
        0LL);
LABEL_107:
      *a4 = -1071775725;
LABEL_108:
      if ( v86 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
      goto LABEL_111;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
    v16 = (struct DXGADAPTER *)v71[0];
    if ( v71[0][25].LowPart != 1 || BYTE1(v71[0][354].LowPart) )
    {
LABEL_106:
      WdLogSingleEntry2(3LL, v16, -1071775725LL);
      goto LABEL_107;
    }
    v23 = v73;
    v101[0] = (__int64 *)v71;
    v24 = 0;
    v74 = 0;
    v101[1] = (__int64 *)&v74;
    v70 = 0;
    v101[2] = (__int64 *)&v70;
    if ( *v73 )
    {
      while ( 1 )
      {
        v25 = lambda_961dd2ddbdb089c6faa321d2112de61f_::operator()(v101, v24, (int *)&v23[33 * v24 + 1]);
        *a4 = v25;
        if ( v25 < 0 )
          goto LABEL_108;
        v23 = v73;
        if ( ++v24 >= *v73 )
        {
          if ( v74 )
          {
            if ( v74 != *v73 )
            {
              *a4 = -1073741811;
              WdLogSingleEntry2(2LL, v71[0], -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Some but not all paths contained a mode in DXGK_IDD_SET_DISPLAY_CONFIGURATION2 on adapter 0x%I6"
                          "4x, returning 0x%I64x.",
                (__int64)v71[0],
                *a4,
                0LL,
                0LL,
                0LL);
              goto LABEL_108;
            }
            if ( !v70 )
            {
              *a4 = -1073741811;
              WdLogSingleEntry2(2LL, v71[0], -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Did not find primary path from DXGK_IDD_SET_DISPLAY_CONFIGURATION2 on adapter 0x%I64x, returning 0x%I64x.",
                (__int64)v71[0],
                *a4,
                0LL,
                0LL,
                0LL);
              goto LABEL_108;
            }
            Global = DXGGLOBAL::GetGlobal();
            REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)Global + 304832), 0LL);
          }
          v16 = (struct DXGADAPTER *)v71[0];
          break;
        }
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v110, v16, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v110, 0LL) < 0 )
    {
      WdLogSingleEntry2(3LL, SHIDWORD(v78), (unsigned int)v78);
      goto LABEL_103;
    }
    v27 = 0;
    LODWORD(v76) = 0;
    if ( *v73 )
    {
      while ( 1 )
      {
        v28 = v73;
        v29 = v27;
        v30 = 33LL * v27;
        v31 = &v73[v30];
        if ( (v73[v30 + 1] & 2) != 0 )
        {
          v32 = MonitorSetScaleFactorOverride(v71[0], v31[4], v73[v30 + 14]);
          *a4 = v32;
          if ( v32 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v32);
            v54 = L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( (v28[v30 + 1] & 4) != 0 )
        {
          v33 = MonitorSetPhysicalSizeOverride(v71[0], v31[4], v28[v30 + 15], v28[v30 + 16]);
          *a4 = v33;
          if ( v33 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v33);
            v54 = L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( (v28[v30 + 1] & 8) != 0 )
        {
          v34 = v28[v30 + 29];
          v94[0] = *(_QWORD *)&v28[v30 + 17];
          v94[1] = *(_QWORD *)&v28[v30 + 19];
          v94[2] = *(_QWORD *)&v28[v30 + 21];
          v94[3] = *(_QWORD *)&v28[v30 + 23];
          v95 = v28[v30 + 25];
          v96 = v28[v30 + 26];
          v97 = v28[v30 + 27];
          v98 = v28[v30 + 28];
          v35 = (v34 & 1) != 0;
          v99 = v35;
          if ( (v34 & 2) != 0 )
          {
            v35 |= 2u;
            v99 = v35;
          }
          if ( (v34 & 4) != 0 )
            v99 = v35 | 4;
          v36 = MonitorSetDriverColorimetryOverride(v71[0], v31[4], v94);
          *a4 = v36;
          if ( v36 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v36);
            v54 = L"Failed to set monitor colorimetry override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
          *a4 = MonitorSetLastWireformat(v71[0], v31[4], v28[v30 + 28]);
        }
        if ( (v28[v30 + 1] & 0x10) != 0 )
        {
          v37 = MonitorSetSDRWhiteLevelOverride(v71[0], v31[4], v28[v30 + 30]);
          *a4 = v37;
          if ( v37 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, v37);
            v54 = L"Failed to set monitor SDR white level override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( (v28[v30 + 1] & 1) != 0 )
        {
          v38 = v31[4];
          v79 = 0LL;
          MonitorHandle = MonitorGetMonitorHandle((__int64)v71[0], v38, 0LL, DxgkIddHandleSetDisplayConfig2, &v79);
          *a4 = MonitorHandle;
          if ( MonitorHandle >= 0 )
          {
            LOBYTE(v40) = v28[v30 + 13] - 2 <= 1;
            v41 = MonitorEnableDisableAdvancedColor(v79, v40);
            v42 = v79;
            v43 = v71[0];
            *a4 = v41;
            if ( (int)MonitorReleaseMonitorHandle((__int64)v43, v42, DxgkIddHandleSetDisplayConfig2, v44) < 0 )
            {
              WdLogSingleEntry1(1LL, 1874LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"NT_SUCCESS(TempStatus)",
                1874LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          if ( *a4 < 0 )
          {
            WdLogSingleEntry3(2LL, v31[4], v29, *a4);
            v54 = L"Failed to set monitor color mode on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
            goto LABEL_70;
          }
        }
        if ( v74 == *v73 )
        {
          Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage();
          if ( v28[v30 + 31] || v28[v30 + 32] || v28[v30 + 33] )
          {
            v91 = *(_QWORD *)&v28[v30 + 2];
            v92 = v31[4];
            v93 = v76;
            v89 = *(_QWORD *)&v28[v30 + 31];
            v90 = v28[v30 + 33];
            v45 = DXGGLOBAL::GetGlobal();
            v46 = REMOTEMONITORMAPPING::AddMapping(
                    (struct DXGGLOBAL *)((char *)v45 + 304832),
                    (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v89,
                    (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v91);
            *a4 = v46;
            if ( v46 < 0 )
              break;
          }
        }
        v27 = v76 + 1;
        LODWORD(v76) = v27;
        if ( v27 >= *v73 )
          goto LABEL_61;
      }
      WdLogSingleEntry3(2LL, v31[4], v29, v46);
      v54 = L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
LABEL_70:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, v31[4], v29, *a4, 0LL, 0LL);
      goto LABEL_103;
    }
LABEL_61:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v110);
    if ( !v74 )
    {
LABEL_103:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
      goto LABEL_108;
    }
    CurrentProcess = PsGetCurrentProcess(v47);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v50 = v75;
    if ( ProcessSessionId != v75 )
    {
      Object = 0LL;
      v51 = DXGGLOBAL::GetGlobal();
      v52 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)v51 + 118),
              v50,
              (struct _KPROCESS **)&Object);
      *a4 = v52;
      if ( v52 < 0 )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v50, v52);
        v53 = L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).";
LABEL_102:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v53, v50, *a4, 0LL, 0LL, 0LL);
        goto LABEL_103;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
    v59 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v59 )
    {
      v60 = PsGetCurrentProcessSessionId(v56, v55, v57, v58);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v59, v60);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    v77 = SessionDataForSpecifiedSession;
    if ( *((_BYTE *)SessionDataForSpecifiedSession + 18976) && *((_BYTE *)SessionDataForSpecifiedSession + 18496) )
    {
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v71[0][365] + 656LL)) )
      {
        LOBYTE(v62) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v62) )
        {
          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
          __debugbreak();
        }
        v76 = 0LL;
        DxgkLogCodePointPacketForSession(0x72u, v50, 0, 0, 0, 0LL);
      }
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v71[0][365] + 656LL)) )
      {
        v76 = 0LL;
        DxgkLogCodePointPacketForSession(0x72u, v50, 0, 0, 0, 0LL);
      }
      memset(v109, 0, 0x48uLL);
      v63 = 216LL * *v73;
      v64 = operator new[](v63 + 96, 0x4B677844u, 256LL);
      if ( v64 )
      {
        v81 = (ReferenceCounted *)v64;
        *(_QWORD *)v64 = &ReferenceCounted::`vftable';
        v65 = (struct _PORT_MESSAGE *)(v64 + 16);
        *(_DWORD *)(v64 + 8) = 1;
        *(_QWORD *)v64 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
        v72 = 0;
        v100[0] = &v73;
        v100[1] = &v72;
        v66 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286___DxgkSampleDisplayState_(
                (_WORD *)(v64 + 16),
                (__int64)v100,
                v63);
        *a4 = v66;
        if ( v66 >= 0 )
        {
          v67 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v77, &v81);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
          v88 = 72LL;
          v87.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
          *a4 = DxgkSendDisplayBrokerMessage(0x120000u, v65, 0LL, v109, &v88, 0LL, &v87);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v84);
          if ( v71[0][25].LowPart != 1 || BYTE1(v71[0][354].LowPart) )
          {
            WdLogSingleEntry2(3LL, v71[0], -1071775725LL);
            *a4 = -1071775725;
          }
          else
          {
            v68 = *a4;
            if ( *a4 == -1073741772 )
            {
              WdLogSingleEntry1(3LL, *(unsigned int *)v77);
              *a4 = 0;
            }
            else if ( v68 == 192 )
            {
              *a4 = -1073741749;
              WdLogSingleEntry2(3LL, *(unsigned int *)v77, -1073741749LL);
            }
            else if ( v68 >= 0 )
            {
              MessageId = v109[1].MessageId;
              if ( (v109[1].MessageId & 0x80000000) == 0 )
              {
                DXGSESSIONDATA::SetDisplayConfigDone(v77, v67);
                MessageId = v109[1].MessageId;
              }
              *a4 = MessageId;
            }
            else
            {
              WdLogSingleEntry2(2LL, *(unsigned int *)v77, *a4);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                *(unsigned int *)v77,
                *a4,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v66);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to initialize display broker message, (Status = 0x%I64x).",
            *a4,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v81, 0LL);
      }
      else
      {
        WdLogSingleEntry1(6LL, 2049LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Cannot allocate buffer to hold the SetDisplayConfig ALPC message",
          2049LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *a4 = -1073741801;
      }
      goto LABEL_103;
    }
    *a4 = -1071775725;
    WdLogSingleEntry2(2LL, v50, -1071775725LL);
    v53 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
    goto LABEL_102;
  }
  WdLogSingleEntry2(3LL, v7, -1073741811LL);
  *a4 = -1073741811;
LABEL_111:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v71, 0LL);
LABEL_112:
  if ( v106 )
    lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator()(v105);
  if ( v108 )
    KeUnstackDetachProcess(&ApcState);
}

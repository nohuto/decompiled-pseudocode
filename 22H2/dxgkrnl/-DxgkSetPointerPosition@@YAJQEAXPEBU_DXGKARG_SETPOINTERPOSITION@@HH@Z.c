/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C014ECAC
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C014EC50 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C027EAD0 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A4B4 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C000DA50 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C003A510 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01218F8 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0121AA0 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C012E038 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C012E928 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01303F0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0133DF8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C014F364 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C014F57C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C014F70C (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0163550 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C02136D4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C027D800 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4)
{
  struct DXGADAPTER *v4; // r13
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 VidPnSourceId; // rdx
  int PairingAdapters; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  SESSION_VIEW *v14; // rdi
  struct _LUID v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  SESSION_VIEW *v30; // r15
  __int64 v31; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r15
  __int64 v43; // r13
  struct _FAST_MUTEX *v44; // rcx
  int MonitorInstance; // eax
  int v46; // ebx
  struct _LUID v47; // r15
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v51; // r15
  UINT Width; // r11d
  int v53; // edx
  int v54; // r9d
  int v55; // r10d
  __int128 v56; // xmm0
  int v57; // r13d
  int v58; // ecx
  bool v59; // zf
  int v60; // r8d
  signed int v61; // ebx
  signed int v62; // r13d
  int v63; // r8d
  INT X; // eax
  int v65; // r9d
  int v66; // eax
  __int64 v67; // rdx
  int v68; // r10d
  INT v69; // r8d
  int v70; // r9d
  INT v71; // edx
  int v72; // r10d
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v80; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rcx
  _QWORD *v98; // rcx
  const void *pPixels; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  INT v106; // eax
  __int64 v107; // rax
  int v108; // r8d
  int v109; // edx
  __int64 v110; // rdx
  __int64 v111; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rbx
  __int64 v113; // r8
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rbx
  _QWORD *v118; // rax
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rbx
  _QWORD *v123; // rax
  __int64 v124; // rax
  __int64 v125; // rdx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v127; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v128; // [rsp+28h] [rbp-D8h]
  __int64 v129; // [rsp+30h] [rbp-D0h]
  __int64 v130; // [rsp+38h] [rbp-C8h]
  bool v131; // [rsp+40h] [rbp-C0h]
  bool v132; // [rsp+41h] [rbp-BFh]
  char v133; // [rsp+42h] [rbp-BEh] BYREF
  char IsVirtualModeSuportDisabled; // [rsp+43h] [rbp-BDh]
  int v135; // [rsp+44h] [rbp-BCh]
  int v136; // [rsp+48h] [rbp-B8h]
  int CurrentOrientation; // [rsp+4Ch] [rbp-B4h]
  struct _LUID v138; // [rsp+50h] [rbp-B0h] BYREF
  SESSION_VIEW *v139; // [rsp+58h] [rbp-A8h] BYREF
  int v140; // [rsp+60h] [rbp-A0h]
  __int64 v141; // [rsp+64h] [rbp-9Ch]
  char v142[8]; // [rsp+70h] [rbp-90h] BYREF
  char v143; // [rsp+78h] [rbp-88h]
  int v144; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v145; // [rsp+88h] [rbp-78h]
  int v146; // [rsp+90h] [rbp-70h] BYREF
  __int64 v147; // [rsp+98h] [rbp-68h]
  char v148; // [rsp+A0h] [rbp-60h]
  __int128 v149; // [rsp+A8h] [rbp-58h]
  __int128 v150; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v151; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_SETPOINTERPOSITION v152; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v153[144]; // [rsp+E0h] [rbp-20h] BYREF

  v146 = -1;
  v4 = a1;
  v145 = a1;
  v144 = a4;
  v5 = a3;
  v147 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v148 = 1;
    v146 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(2LL, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v148 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v146, 3011LL);
  v151 = 0LL;
  v152 = 0LL;
  v150 = 0LL;
  if ( !a2 )
  {
    LODWORD(v26) = -1073741811;
    goto LABEL_76;
  }
  if ( v5 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v8, v7);
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
    goto LABEL_75;
  }
  VidPnSourceId = a2->VidPnSourceId;
  v139 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v4, VidPnSourceId, 0LL, 0LL, &v139, (unsigned __int64 *)&v138, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v83[3] = v4;
    v83[4] = a2->VidPnSourceId;
    v83[5] = v13;
    WdLogEvent5_WdEvent(v83);
    LODWORD(v26) = v13;
    goto LABEL_76;
  }
  v14 = v139;
  if ( !v139 )
  {
    v84 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v84 + 24) = 1790LL;
    WdLogEvent5_WdAssertion(v84);
  }
  if ( !*((_QWORD *)v14 + 337) )
  {
    v85 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v85 + 24) = 1791LL;
    WdLogEvent5_WdAssertion(v85);
  }
  v15 = *(struct _LUID *)((char *)v14 + 316);
  v138 = v15;
  DXGADAPTER::ReleaseReference(v14);
  v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 102);
  if ( v20 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v86 = WdLogNewEntry5_WdError(v19, v18);
    LODWORD(v26) = -1073741811;
    *(_QWORD *)(v86 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v88, v87);
    *(_QWORD *)(v86 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v86);
    goto LABEL_76;
  }
  v133 = 0;
  v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v133, 0);
  v26 = v23;
  if ( v23 < 0 )
  {
    v89 = WdLogNewEntry5_WdEvent(v25, v24);
    *(_QWORD *)(v89 + 24) = v26;
    WdLogEvent5_WdEvent(v89);
    goto LABEL_132;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v138,
                            a2->VidPnSourceId);
  v139 = (SESSION_VIEW *)SessionViewFromSource;
  v30 = (SESSION_VIEW *)SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v91[3] = a2->VidPnSourceId;
    v91[4] = v138.HighPart;
    v91[5] = v15.LowPart;
    LODWORD(v26) = -1073741811;
    v91[6] = (unsigned int)PsGetCurrentProcessSessionId(v93, v92);
    v91[7] = -1073741811LL;
    WdLogEvent5_WdError(v91);
    goto LABEL_132;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
LABEL_73:
    if ( v133 )
      DxgkReleaseSessionModeChangeLock(v31, v7);
LABEL_75:
    LODWORD(v26) = 0;
    goto LABEL_76;
  }
  LODWORD(v26) = -1073741811;
  while ( 1 )
  {
    v33 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( !v33 )
    {
      v94 = WdLogNewEntry5_WdAssertion(v31, v7);
      *(_QWORD *)(v94 + 24) = 1839LL;
      WdLogEvent5_WdAssertion(v94);
    }
    if ( !*(_QWORD *)(v33 + 2696) )
    {
      v95 = WdLogNewEntry5_WdAssertion(v31, v7);
      *(_QWORD *)(v95 + 24) = 1840LL;
      WdLogEvent5_WdAssertion(v95);
    }
    v152 = *a2;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v153, (struct DXGADAPTER *const)v33, 0LL);
    v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v153, 0LL);
    v37 = v34;
    if ( v34 >= 0 )
      break;
    v96 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v96[3] = *(int *)(v33 + 320);
    v96[4] = *(unsigned int *)(v33 + 316);
    v96[5] = v37;
    WdLogEvent5_WdError(v96);
LABEL_72:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v153, v38);
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v30, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
      goto LABEL_73;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v142, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v33 + 2696) + 400LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
  if ( v144 )
  {
    v97 = *((unsigned int *)PrimaryDisplaySource + 937);
    if ( *(_QWORD *)((char *)PrimaryDisplaySource + 3748) == -1LL
      || (v97 = (unsigned int)(a2->X + v97), (int)v97 < *((_DWORD *)v30 + 6))
      || (int)v97 >= *((_DWORD *)v30 + 8)
      || (v38 = (unsigned int)(a2->Y + *((_DWORD *)PrimaryDisplaySource + 938)), (int)v38 < *((_DWORD *)v30 + 7))
      || (int)v38 >= *((_DWORD *)v30 + 9) )
    {
      v98 = (_QWORD *)WdLogNewEntry5_WdError(v97, v38);
      v98[3] = *(int *)(v33 + 320);
      v98[4] = *(unsigned int *)(v33 + 316);
      pPixels = (const void *)*((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_129;
    }
  }
  if ( (*(_DWORD *)(v33 + 348) & 0x100) == 0 && (**(_DWORD **)(v33 + 2600) & 8) != 0 )
  {
LABEL_70:
    if ( v143 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142, v38);
    goto LABEL_72;
  }
  v152.VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(
          *(ADAPTER_DISPLAY **)(v33 + 2696),
          *((unsigned int *)PrimaryDisplaySource + 4)) )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39);
    v81[3] = -1073741823LL;
    v81[4] = v152.VidPnSourceId;
    v82 = *(_BYTE *)&v152.Flags.0 & 1;
    v81[6] = v4;
    v81[5] = v82;
LABEL_68:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v33 + 2696),
      v152.VidPnSourceId,
      *(_BYTE *)&v152.Flags.0 & 1,
      v152.X,
      v152.Y,
      a2->X,
      a2->Y);
    if ( PrimaryDisplaySource == SESSION_VIEW::GetPrimaryDisplaySource(v30) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142, v38);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v153);
      v128 = (unsigned __int64 *)_lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_;
      HIDWORD(v127) = HIDWORD(a2);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        v33,
        v76,
        a2->VidPnSourceId);
    }
    goto LABEL_70;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v130) = v152.Flags.0;
    LODWORD(v129) = v152.Y;
    LODWORD(v128) = v152.X;
    LODWORD(v127) = v152.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v40, &EventSetPointerPosition, v41, v4, v127, v128, v129, v130);
  }
  v42 = *((unsigned int *)PrimaryDisplaySource + 267);
  v131 = 1;
  v132 = 1;
  if ( (_DWORD)v42 == -1 )
  {
    v46 = -1073741811;
    goto LABEL_41;
  }
  v43 = *(_QWORD *)(v33 + 2696);
  if ( v43 )
  {
    v44 = *(struct _FAST_MUTEX **)(v43 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v44 )
    {
      v102 = WdLogNewEntry5_WdError(0LL, v39);
      *(_QWORD *)(v102 + 24) = v33;
      WdLogEvent5_WdError(v102);
      v46 = -1073741811;
      goto LABEL_103;
    }
    v138 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v44, (unsigned int)v42, 1, (struct DXGMONITOR **)&v138);
    v46 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v80 = WdLogNewEntry5_WdDmmEvent(v40);
      *(_QWORD *)(v80 + 24) = v42;
      *(_QWORD *)(v80 + 32) = v33;
      WdLogEvent5_WdDmmEvent(v80);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v47 = v138;
        if ( !*(_QWORD *)&v138 || *(_DWORD *)(*(_QWORD *)&v138 + 432LL) != 1 )
        {
          v104 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v104);
        }
        if ( !*(_QWORD *)&v47 )
        {
          v105 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v105);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v47 + 296LL), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(*(DXGMONITOR **)&v47);
        ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)&v47 + 296LL));
        KeLeaveCriticalRegion();
        v46 = 0;
        goto LABEL_39;
      }
      if ( MonitorInstance != -1073741632 )
        goto LABEL_82;
    }
    v46 = 0;
LABEL_82:
    if ( v46 >= 0 )
    {
LABEL_39:
      if ( IsVirtualModeSuportDisabled )
      {
        v132 = 1;
        v131 = 1;
      }
      else
      {
        v132 = *(_BYTE *)(v43 + 250) == 0;
        v131 = *(_BYTE *)(v43 + 249) == 0;
      }
LABEL_41:
      if ( v46 >= 0 )
        goto LABEL_42;
      goto LABEL_101;
    }
LABEL_103:
    v103 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v103 + 24) = v46;
    WdLogEvent5_WdAssertion(v103);
    goto LABEL_41;
  }
  v100 = WdLogNewEntry5_WdError(v40, v39);
  *(_QWORD *)(v100 + 24) = 9262LL;
  WdLogEvent5_WdError(v100);
  v46 = -1073741811;
LABEL_101:
  v101 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
  v101[3] = *((unsigned int *)PrimaryDisplaySource + 4);
  v101[4] = *(int *)(v33 + 320);
  v101[5] = *(unsigned int *)(v33 + 316);
  v101[6] = v46;
  WdLogEvent5_WdError(v101);
LABEL_42:
  if ( v131 && v132 || (*(_BYTE *)&v152.Flags.0 & 1) == 0 )
  {
LABEL_65:
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v33 + 2696), &v152) < 0 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v75, v74);
      *(_QWORD *)(v124 + 24) = 2018LL;
      WdLogEvent5_WdAssertion(v124);
    }
    v4 = v145;
    v30 = v139;
    goto LABEL_68;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                         *((_QWORD *)PrimaryDisplaySource + 1),
                         *((unsigned int *)PrimaryDisplaySource + 4),
                         v131);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(PrimaryDisplaySource, 0);
  v51 = SavedCursor;
  if ( SavedCursor->pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v33 + 2016) && SavedCursor->Height <= *(_DWORD *)(v33 + 2020) )
    {
      v53 = *((_DWORD *)PrimaryDisplaySource + 165) - *((_DWORD *)PrimaryDisplaySource + 163);
      v54 = *((_DWORD *)v139 + 8) - *((_DWORD *)v139 + 6);
      v55 = *((_DWORD *)PrimaryDisplaySource + 166) - *((_DWORD *)PrimaryDisplaySource + 164);
      v56 = *(_OWORD *)((char *)PrimaryDisplaySource + 652);
      v57 = *((_DWORD *)PrimaryDisplaySource + 169);
      v58 = *((_DWORD *)v139 + 9) - *((_DWORD *)v139 + 7);
      v59 = *((_BYTE *)PrimaryDisplaySource + 668) == 0;
      v60 = *((_QWORD *)PrimaryDisplaySource + 84);
      v141 = *((_QWORD *)PrimaryDisplaySource + 84);
      v138.LowPart = v131;
      v149 = v56;
      v135 = v53;
      v136 = v55;
      if ( v59 )
      {
        v61 = DWORD1(v149);
        v62 = v149;
        v141 = *((_QWORD *)&v149 + 1);
      }
      else
      {
        v55 = v57;
        v136 = v57;
        v62 = 0;
        v53 = v60;
        v61 = 0;
        v135 = v60;
      }
      v63 = CurrentOrientation;
      X = a2->X;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v65 = v55 * X / v54;
        v66 = v135 * a2->Y;
      }
      else
      {
        v65 = v53 * X / v54;
        v66 = v55 * a2->Y;
      }
      v67 = (unsigned int)(v66 >> 31);
      v140 = v65;
      v68 = v66 / v58;
      CurrentOrientation = v66 / v58;
      if ( v138.LowPart )
      {
        v152.X = v65 + v62;
        v106 = v68 + v61;
        goto LABEL_117;
      }
      switch ( v63 )
      {
        case 2:
          v69 = v68 + v62;
          v109 = v61 - v65;
          break;
        case 3:
          v69 = v135 + v62 - v65 - Width;
          v109 = v61 - v68;
          break;
        case 4:
          v71 = v65 + v61;
          v70 = v136;
          v108 = v62 - v68;
          v72 = v135;
          v69 = v135 + v108 - Width;
          v152.X = v69;
LABEL_59:
          v152.Y = v71;
          if ( (signed int)(v69 + v51->Width) >= v62
            && v69 <= (int)v141
            && (signed int)(v71 + v51->Height) >= v61
            && v71 <= SHIDWORD(v141) )
          {
LABEL_63:
            FillClipParams(v51, PrimaryDisplaySource, &v152, (struct CURSOR_CLIP_PARAMS *)&v150);
            if ( HIDWORD(v151) )
            {
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(PrimaryDisplaySource, 0);
              if ( !ClippedCursor->pPixels
                || ClippedCursor->Width > *(_DWORD *)(v33 + 2016)
                || ClippedCursor->Height > *(_DWORD *)(v33 + 2020) )
              {
                v98 = (_QWORD *)WdLogNewEntry5_WdError(v111, v110);
                v98[3] = ClippedCursor->Width;
                v98[4] = ClippedCursor->Height;
                pPixels = ClippedCursor->pPixels;
                goto LABEL_129;
              }
              ClipCurrentCursor(v51, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v150);
              ClippedCursor->VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
              v114 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v33 + 2696), ClippedCursor, v113);
              v117 = v114;
              if ( v114 < 0 )
              {
                v118 = (_QWORD *)WdLogNewEntry5_WdError(v116, v115);
                v118[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v118[4] = *(int *)(v33 + 320);
                v118[5] = *(unsigned int *)(v33 + 316);
                v118[6] = v117;
                WdLogEvent5_WdError(v118);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 1;
            }
            else if ( *((_BYTE *)PrimaryDisplaySource + 726) )
            {
              v119 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v33 + 2696), v51, v73);
              v122 = v119;
              if ( v119 < 0 )
              {
                v123 = (_QWORD *)WdLogNewEntry5_WdError(v121, v120);
                v123[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v123[4] = *(int *)(v33 + 320);
                v123[5] = *(unsigned int *)(v33 + 316);
                v123[6] = v122;
                WdLogEvent5_WdError(v123);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 0;
            }
            goto LABEL_65;
          }
          v152.X = v62 + v72 / 2;
          v106 = v61 + v70 / 2;
LABEL_117:
          v152.Y = v106;
          goto LABEL_63;
        default:
          if ( v63 != 1 )
          {
            LODWORD(v67) = v66 % v58;
            v107 = WdLogNewEntry5_WdAssertion((unsigned int)(v63 - 3), v67);
            *(_QWORD *)(v107 + 24) = 686LL;
            WdLogEvent5_WdAssertion(v107);
          }
          v69 = v62 + v140;
          v70 = v136;
          v71 = v61 + CurrentOrientation;
          v152.X = v62 + v140;
LABEL_58:
          v72 = v135;
          goto LABEL_59;
      }
      v70 = v136;
      v152.X = v69;
      v71 = v136 + v109 - v51->Height;
      goto LABEL_58;
    }
  }
  v98 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
  v98[3] = v51->Width;
  v98[4] = v51->Height;
  pPixels = v51->pPixels;
LABEL_129:
  v98[5] = pPixels;
  WdLogEvent5_WdError(v98);
  if ( v143 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142, v125);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v153, v125);
LABEL_132:
  if ( v133 )
    DxgkReleaseSessionModeChangeLock(v90, v7);
LABEL_76:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146, v7);
  if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v146);
  return (unsigned int)v26;
}

/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01E3D30
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C01E3CB0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C03364B0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0173D44 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01C167C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01C36FC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C032C5B0 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  int v12; // r15d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  _QWORD *v15; // rdi
  struct _LUID v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v24; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  SESSION_VIEW *v30; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  int v32; // r10d
  struct DISPLAY_SOURCE *NextDisplaySource; // rdi
  struct _DXGKARG_SETPOINTERPOSITION *v34; // r13
  bool v35; // al
  struct DISPLAY_SOURCE *i; // rax
  struct DISPLAY_SOURCE *v37; // r13
  __int64 v38; // rcx
  __int64 v39; // r8
  ADAPTER_DISPLAY **v41; // rdi
  int v42; // eax
  __int64 v43; // r8
  unsigned int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v51; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v52; // eax
  __int64 HighPart; // r14
  __int64 v54; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // eax
  char v61; // [rsp+50h] [rbp-B0h] BYREF
  bool v62; // [rsp+51h] [rbp-AFh]
  struct _LUID v63; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_SETPOINTERPOSITION *v65; // [rsp+68h] [rbp-98h]
  int v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h]
  char v68; // [rsp+80h] [rbp-80h]
  unsigned __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  char v70; // [rsp+90h] [rbp-70h]
  struct _DXGKARG_SETPOINTERPOSITION v71; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v72[144]; // [rsp+B0h] [rbp-50h] BYREF

  v66 = -1;
  v64 = a4;
  v65 = a2;
  v67 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v68 = 1;
    v66 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v66, 3012);
  v12 = 0;
  v71 = 0LL;
  if ( !a3 || !a2 )
    goto LABEL_39;
  v71 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, a4, a5);
    goto LABEL_24;
  }
  if ( a3->Flags.Value >= 8 )
  {
    WdLogSingleEntry2(2LL, a3->Flags.Value, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"invalid Flags specified: 0x%I64x DXGADAPTER=0x%I64x",
      a3->Flags.Value,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
LABEL_39:
    v12 = -1073741811;
    goto LABEL_24;
  }
  VidPnSourceId = a3->VidPnSourceId;
  v63 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, 0LL, 0LL, (struct DXGADAPTER **)&v63, &v69, 0);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, a1, a3->VidPnSourceId, PairingAdapters);
    goto LABEL_24;
  }
  v15 = (_QWORD *)v63;
  if ( !*(_QWORD *)&v63 )
  {
    WdLogSingleEntry1(1LL, 1460LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1460LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !v15[365] )
  {
    WdLogSingleEntry1(1LL, 1461LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = *(struct _LUID *)((char *)v15 + 404);
  v63 = v16;
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
  v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v19
    || (v22 = PsGetCurrentProcessSessionId(v18, v17, v20, v21),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, v22)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17, v20, v21);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v60 = PsGetCurrentProcessSessionId(v57, v56, v58, v59);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v60,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  v61 = 0;
  v24 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v61, 0);
  v12 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(4LL, v24);
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              &v63,
                              a3->VidPnSourceId);
    v30 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      NextDisplaySource = PrimaryDisplaySource;
      if ( a8 != v32 )
      {
        v12 = -1073741823;
        if ( PrimaryDisplaySource )
        {
          v51 = a3->VidPnSourceId;
          while ( *((_DWORD *)NextDisplaySource + 4) != v51
               || a1 != *(struct DXGADAPTER **)(*((_QWORD *)NextDisplaySource + 1) + 16LL) )
          {
            NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v30, NextDisplaySource);
            if ( !NextDisplaySource )
              goto LABEL_20;
          }
          v12 = SetPointerShapeForDisplaySource(NextDisplaySource, v65, a3, v30, a1, v64, a5, v32, a7 != v32, 1);
LABEL_51:
          if ( v12 >= 0 )
            goto LABEL_22;
        }
        goto LABEL_20;
      }
      if ( PrimaryDisplaySource )
      {
        v34 = v65;
        v35 = a7 != v32;
        v62 = a7 != v32;
        while ( 1 )
        {
          v12 = SetPointerShapeForDisplaySource(NextDisplaySource, v34, a3, v30, a1, v64, a5, v32, v35, v32);
          if ( v12 < 0 )
            break;
          NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v30, NextDisplaySource);
          v35 = v62;
          if ( !NextDisplaySource )
            goto LABEL_51;
        }
LABEL_20:
        for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v30); ; i = SESSION_VIEW::GetNextDisplaySource(v30, v37) )
        {
          v37 = i;
          if ( !i )
            break;
          v41 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)i + 1) + 16LL);
          if ( !v41 )
          {
            WdLogSingleEntry1(1LL, 1544LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1544LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( !v41[365] )
          {
            WdLogSingleEntry1(1LL, 1545LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              1545LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, (struct DXGADAPTER *const)v41, 0LL);
          v42 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v72, 0LL);
          if ( v42 < 0 )
          {
            HighPart = v63.HighPart;
            v54 = v42;
            WdLogSingleEntry3(2LL, v63.HighPart, v16.LowPart, v42);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to aquire adapter access on adapter = 0x%I64x%08I64x , Status = 0x%I64x.",
              HighPart,
              v16.LowPart,
              v54,
              0LL,
              0LL);
          }
          else
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v69, (ADAPTER_DISPLAY *)((char *)v41[365] + 464), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v69);
            if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v41[365], *((_DWORD *)v37 + 4)) )
            {
              v52 = *((_DWORD *)v37 + 4);
              *(_QWORD *)&v71.X = 0LL;
              v71.Flags.Value &= ~1u;
              v71.VidPnSourceId = v52;
              ADAPTER_DISPLAY::DdiSetPointerPosition(v41[365], &v71, v43);
            }
            *((_BYTE *)v37 + 765) = 0;
            *((_DWORD *)v37 + 943) = -1;
            *((_DWORD *)v37 + 944) = -1;
            if ( v70 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v69);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
        }
      }
    }
    else
    {
      v44 = PsGetCurrentProcessSessionId(v27, v26, v28, v29);
      v45 = v63.HighPart;
      v12 = -1071774937;
      WdLogSingleEntry5(2LL, a3->VidPnSourceId, v63.HighPart, v16.LowPart, v44, -1071774937LL);
      v50 = PsGetCurrentProcessSessionId(v47, v46, v48, v49);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
        a3->VidPnSourceId,
        v45,
        v16.LowPart,
        v50,
        -1071774937LL);
    }
  }
LABEL_22:
  if ( v61 )
    DxgkReleaseSessionModeChangeLock();
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
  if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v66);
  return (unsigned int)v12;
}

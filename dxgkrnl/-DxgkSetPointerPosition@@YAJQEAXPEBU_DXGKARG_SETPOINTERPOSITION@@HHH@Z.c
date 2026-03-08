/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C03340B0
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C0334050 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C03362C0 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01C167C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01C36FC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0223A10 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0335294 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4,
        int a5)
{
  unsigned int v5; // esi
  int v7; // r12d
  int v8; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  unsigned int v13; // ebx
  DXGADAPTER *v14; // rdi
  struct _LUID v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v23; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  SESSION_VIEW *v29; // rdi
  unsigned int v30; // eax
  __int64 HighPart; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v38; // r9d
  int v39; // eax
  bool v40; // zf
  unsigned int CurrentProcessSessionId; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // eax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  struct _LUID v51; // [rsp+50h] [rbp-20h] BYREF
  int v52; // [rsp+58h] [rbp-18h] BYREF
  __int64 v53; // [rsp+60h] [rbp-10h]
  char v54; // [rsp+68h] [rbp-8h]
  DXGADAPTER *v55; // [rsp+A8h] [rbp+38h] BYREF

  v52 = -1;
  v5 = 0;
  v7 = a5;
  v8 = a3;
  v53 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v54 = 1;
    v52 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 3011);
  if ( !a2 )
  {
    v5 = -1073741811;
    goto LABEL_38;
  }
  if ( !v8 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    v55 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(this, VidPnSourceId, 0LL, 0LL, &v55, (unsigned __int64 *)&v51, 0);
    v13 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(4LL, this, a2->VidPnSourceId, PairingAdapters);
      v5 = v13;
      goto LABEL_38;
    }
    v14 = v55;
    if ( !v55 )
    {
      WdLogSingleEntry1(1LL, 2046LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2046LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( !*((_QWORD *)v14 + 365) )
    {
      WdLogSingleEntry1(1LL, 2047LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2047LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = *(struct _LUID *)((char *)v14 + 404);
    v51 = v15;
    DXGADAPTER::ReleaseReference(v14);
    v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v18
      || (v21 = PsGetCurrentProcessSessionId(v17, v16, v19, v20),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v18, v21)) == 0LL) )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16, v19, v20);
      v5 = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v46 = PsGetCurrentProcessSessionId(v43, v42, v44, v45);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v46,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_38;
    }
    LOBYTE(v55) = 0;
    v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v55, 0);
    v5 = v23;
    if ( v23 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v51,
                                a2->VidPnSourceId);
      v5 = 0;
      v29 = SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          if ( v7 )
          {
            v38 = a2->VidPnSourceId;
            while ( *((_DWORD *)PrimaryDisplaySource + 4) != v38
                 || this != *(struct DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) )
            {
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v29, PrimaryDisplaySource);
              if ( !PrimaryDisplaySource )
                goto LABEL_32;
            }
            v39 = SetPointerPositionForDisplaySource(PrimaryDisplaySource, v29, a2, a4, v7);
            if ( v39 < 0 )
            {
              v5 = v39;
              goto LABEL_29;
            }
          }
          else
          {
            do
            {
              if ( (int)SetPointerPositionForDisplaySource(PrimaryDisplaySource, v29, a2, a4, 0) < 0 )
                break;
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v29, PrimaryDisplaySource);
            }
            while ( PrimaryDisplaySource );
          }
        }
LABEL_32:
        v40 = (_BYTE)v55 == 0;
LABEL_33:
        if ( !v40 )
          DxgkReleaseSessionModeChangeLock();
        goto LABEL_38;
      }
      v30 = PsGetCurrentProcessSessionId(v26, v25, v27, v28);
      HighPart = v51.HighPart;
      v5 = -1073741811;
      WdLogSingleEntry5(2LL, a2->VidPnSourceId, v51.HighPart, v15.LowPart, v30, -1073741811LL);
      v36 = PsGetCurrentProcessSessionId(v33, v32, v34, v35);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
        a2->VidPnSourceId,
        HighPart,
        v15.LowPart,
        v36,
        -1073741811LL);
    }
    else
    {
      WdLogSingleEntry1(4LL, v23);
    }
LABEL_29:
    v40 = (_BYTE)v55 == 0;
    goto LABEL_33;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
LABEL_38:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v52);
  return v5;
}

/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C0338AF0
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C0338A90 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C033AD00 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0183F9C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01863CC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0231FB0 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0339CD4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
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
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rdi
  unsigned int v18; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v20; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v22; // rcx
  SESSION_VIEW *v23; // rdi
  unsigned int v24; // eax
  __int64 HighPart; // rdi
  __int64 v26; // rcx
  unsigned int v27; // eax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v29; // r9d
  int v30; // eax
  bool v31; // zf
  unsigned int CurrentProcessSessionId; // eax
  __int64 v33; // rcx
  unsigned int v34; // eax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _LUID v39; // [rsp+50h] [rbp-20h] BYREF
  int v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h]
  char v42; // [rsp+68h] [rbp-8h]
  DXGADAPTER *v43; // [rsp+A8h] [rbp+38h] BYREF

  v40 = -1;
  v5 = 0;
  v7 = a5;
  v8 = a3;
  v41 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 3011);
  if ( !a2 )
  {
    v5 = -1073741811;
    goto LABEL_38;
  }
  if ( !v8 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    v43 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(this, VidPnSourceId, 0LL, 0LL, &v43, (unsigned __int64 *)&v39, 0);
    v13 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(4LL, this, a2->VidPnSourceId, PairingAdapters);
      v5 = v13;
      goto LABEL_38;
    }
    v14 = v43;
    if ( !v43 )
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
    v39 = v15;
    DXGADAPTER::ReleaseReference(v14);
    v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v17
      || (v18 = PsGetCurrentProcessSessionId(v16),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, v18)) == 0LL) )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16);
      v5 = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v34 = PsGetCurrentProcessSessionId(v33);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v34,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_38;
    }
    LOBYTE(v43) = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v43, 0);
    v5 = v20;
    if ( v20 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v39,
                                a2->VidPnSourceId);
      v5 = 0;
      v23 = SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          if ( v7 )
          {
            v29 = a2->VidPnSourceId;
            while ( *((_DWORD *)PrimaryDisplaySource + 4) != v29
                 || this != *(struct DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) )
            {
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
              if ( !PrimaryDisplaySource )
                goto LABEL_32;
            }
            v30 = SetPointerPositionForDisplaySource(PrimaryDisplaySource, v23, a2, a4, v7);
            if ( v30 < 0 )
            {
              v5 = v30;
              goto LABEL_29;
            }
          }
          else
          {
            do
            {
              if ( (int)SetPointerPositionForDisplaySource(PrimaryDisplaySource, v23, a2, a4, 0) < 0 )
                break;
              PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
            }
            while ( PrimaryDisplaySource );
          }
        }
LABEL_32:
        v31 = (_BYTE)v43 == 0;
LABEL_33:
        if ( !v31 )
          DxgkReleaseSessionModeChangeLock();
        goto LABEL_38;
      }
      v24 = PsGetCurrentProcessSessionId(v22);
      HighPart = v39.HighPart;
      v5 = -1073741811;
      WdLogSingleEntry5(2LL, a2->VidPnSourceId, v39.HighPart, v15.LowPart, v24, -1073741811LL);
      v27 = PsGetCurrentProcessSessionId(v26);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
        a2->VidPnSourceId,
        HighPart,
        v15.LowPart,
        v27,
        -1073741811LL);
    }
    else
    {
      WdLogSingleEntry1(4LL, v20);
    }
LABEL_29:
    v31 = (_BYTE)v43 == 0;
    goto LABEL_33;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
LABEL_38:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v40);
  return v5;
}

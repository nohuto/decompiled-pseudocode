/*
 * XREFs of ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00E73E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B554 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E7340 (-SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C012E038 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01303F0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

__int64 __fastcall DxgkCddSetGammaRamp(
        struct DXGADAPTER *a1,
        unsigned int a2,
        const struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // r14
  char v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGADAPTER *v17; // rsi
  SESSION_VIEW *SessionViewFromSource; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  size_t *v21; // rbx
  size_t *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  unsigned int v29; // r15d
  ADAPTER_DISPLAY **v30; // rdi
  int v31; // r8d
  int v32; // eax
  __int64 v33; // rdx
  int updated; // r14d
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // rax
  _BYTE v41[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGADAPTER *v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h]
  char v45; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v47[144]; // [rsp+70h] [rbp-90h] BYREF

  v43 = -1;
  v4 = a2;
  v6 = 1;
  v44 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 3009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3009);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 3009LL);
  v41[0] = 0;
  v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v41, 0);
  v10 = v7;
  if ( v7 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v38[3] = (unsigned int)PsGetCurrentProcessSessionId();
    v38[4] = v10;
LABEL_33:
    WdLogEvent5_WdError(v38);
    goto LABEL_23;
  }
  v42 = 0LL;
  v46 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v42, &v46, 0);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v39[3] = a1;
    v39[4] = v4;
    v39[5] = v10;
    WdLogEvent5_WdEvent(v39);
    goto LABEL_23;
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 102);
  if ( v14 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v17 = v42;
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            (const struct _LUID *)((char *)v42 + 316),
                            v4);
  DXGADAPTER::ReleaseReference(v17);
  if ( !SessionViewFromSource )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v38[3] = v4;
    v38[4] = v17;
    LODWORD(v10) = -1073741811;
    v38[5] = (unsigned int)PsGetCurrentProcessSessionId();
    v38[6] = -1073741811LL;
    goto LABEL_33;
  }
  v21 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v22 = (size_t *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v21 = v22;
  if ( v22 )
  {
    *((_WORD *)v22 + 20) = 0;
    v22[3] = 0LL;
    v22[4] = 0LL;
    *v22 = (size_t)&ReferenceCounted::`vftable';
    *v22 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v22 + 2) = 1;
    *((_DWORD *)v22 + 4) = 1;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v21 )
  {
    v40 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
    *(_QWORD *)(v40 + 24) = v17;
    WdLogEvent5_WdLowResource(v40);
    goto LABEL_23;
  }
  LODWORD(v10) = DXGK_GAMMA_RAMP::Initialize(v21, 2LL, a3);
  if ( (int)v10 >= 0 )
  {
LABEL_13:
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
    if ( PrimaryDisplaySource )
    {
      do
      {
        v29 = *((_DWORD *)PrimaryDisplaySource + 4);
        v30 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, (struct DXGADAPTER *const)v30, 0LL);
        if ( *((_BYTE *)v30[337] + 251) == (_BYTE)v31 )
          v32 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL);
        else
          v32 = COREADAPTERACCESS::AcquireExclusive((__int64)v47, (unsigned int)(v31 + 1));
        updated = v32;
        if ( v32 >= 0 )
        {
          ADAPTER_DISPLAY::SetGdiGammaRamp(v30[337], v29, (const struct DXGK_GAMMA_RAMP *)v21);
          updated = ADAPTER_DISPLAY::UpdateGammaRamp(v30[337], v29);
          if ( updated < 0 )
            ADAPTER_DISPLAY::SetGdiGammaRamp(v30[337], v29, 0LL);
          else
            v6 = 0;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47, v33);
        PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
      }
      while ( PrimaryDisplaySource );
      LODWORD(v10) = v6 != 0 ? updated : 0;
    }
  }
  if ( v21 )
    ReferenceCounted::Release((ReferenceCounted *)v21, v27);
LABEL_23:
  if ( v41[0] )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v27);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v43);
  return (unsigned int)v10;
}

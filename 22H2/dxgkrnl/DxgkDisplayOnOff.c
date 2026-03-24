/*
 * XREFs of DxgkDisplayOnOff @ 0x1C00DFF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00DFEB4 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E0278 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E0464 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1F48 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E43CC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EC320 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C012E038 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01303F0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130410 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C02A04F8 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  PRKPROCESS *SessionDataForSpecifiedSession; // rsi
  __int64 v16; // rdi
  DXGPROCESS *Current; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGPROCESS *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  SESSION_VIEW *v29; // r13
  __int64 v30; // rdx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  __int64 v32; // r15
  __int64 v33; // rsi
  unsigned int *v34; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r12
  unsigned __int8 v44; // r12
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r12
  __int64 v49; // rdx
  struct DISPLAY_SOURCE *NextDisplaySource; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rax
  char v62; // [rsp+30h] [rbp-D0h] BYREF
  char v63; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v64; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v65; // [rsp+38h] [rbp-C8h]
  DXGPROCESS *v66; // [rsp+40h] [rbp-C0h]
  _BYTE v67[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v68; // [rsp+50h] [rbp-B0h]
  int v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h]
  char v71; // [rsp+68h] [rbp-98h]
  _BYTE v72[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  char v74; // [rsp+B8h] [rbp-48h]
  _QWORD v75[10]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v76[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v77[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v78[88]; // [rsp+158h] [rbp+58h] BYREF

  v4 = a2;
  v63 = a3;
  v64 = a4;
  memset(v75, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v75[1]);
  v69 = -1;
  v75[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v75[3]) = 53;
  LOBYTE(v75[6]) = -1;
  v70 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 2183LL);
  v8 = 0LL;
  v74 = 0;
  v65 = 0LL;
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 102);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v13,
                                                     CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v16) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v54 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v54 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v55 = v54;
    *(_QWORD *)(v54 + 32) = -1073741811LL;
LABEL_43:
    WdLogEvent5_WdError(v55);
    goto LABEL_33;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2329]);
  Current = DXGPROCESS::GetCurrent();
  v66 = Current;
  v20 = Current;
  if ( !Current )
  {
    v55 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v55 + 24) = 9797LL;
    goto LABEL_43;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v56 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v56 + 24) = v20;
    WdLogEvent5_WdError(v56);
    LODWORD(v16) = -1073741790;
  }
  else
  {
    v62 = 0;
    v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v62, 1);
    v16 = v23;
    if ( v23 < 0 )
    {
      v57 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v57 + 24) = v16;
      WdLogEvent5_WdError(v57);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                                a1,
                                v4);
      v29 = SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v32 = *((unsigned int *)PrimaryDisplaySource + 4);
            v33 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            v34 = (unsigned int *)(v33 + 316);
            if ( v8 )
            {
              DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v33 + 316), v8);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
              v65 = 0LL;
            }
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)(v33 + 316),
                                                     0);
            v38 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            v59 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
            v59[3] = *(int *)(v33 + 320);
            v59[4] = *v34;
            v59[5] = v38;
            WdLogEvent5_WdError(v59);
            v8 = 0LL;
            v65 = 0LL;
            NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v29, PrimaryDisplaySource);
LABEL_28:
            PrimaryDisplaySource = NextDisplaySource;
LABEL_29:
            if ( !PrimaryDisplaySource )
              goto LABEL_30;
          }
          v8 = v65;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v72, v65);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v67, *((struct DXGFASTMUTEX *const *)v20 + 42), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v67);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, (__int64)v8, 1, v39, 0);
          v40 = COREDEVICEACCESS::AcquireExclusive((__int64)v76, 2LL);
          v43 = v40;
          if ( v40 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v78);
            COREACCESS::~COREACCESS((COREACCESS *)v77);
            if ( v68 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v67, v60);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v72);
            v20 = v66;
            goto LABEL_29;
          }
          if ( v40 < 0 )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
            v61[3] = *(int *)(v33 + 320);
            v61[4] = *v34;
            v61[5] = v43;
          }
          else
          {
            if ( !v63 )
            {
              DmmDisablePathsFromVidPnSource(v8, v32);
LABEL_21:
              COREACCESS::~COREACCESS((COREACCESS *)v78);
              COREACCESS::~COREACCESS((COREACCESS *)v77);
              if ( v68 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v67, v49);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v72);
              if ( v8 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v65 + 2), v65);
                v8 = 0LL;
                v65 = 0LL;
              }
              NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v29, PrimaryDisplaySource);
              v20 = v66;
              goto LABEL_28;
            }
            v44 = v64;
            if ( v64 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v33 + 2696)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                *(ADAPTER_DISPLAY **)(v33 + 2696),
                *((struct ADAPTER_RENDER **)v8 + 2));
            if ( DmmEnablePathsFromVidPnSource(
                   v8,
                   v32,
                   v44,
                   (struct COREDEVICEACCESS *)v76,
                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v75) < 0 )
              goto LABEL_21;
            v45 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(ADAPTER_DISPLAY **)(v33 + 2696), v32);
            v48 = v45;
            if ( v45 >= 0 )
              goto LABEL_21;
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
            v61[3] = v32;
            v61[4] = *(int *)(v33 + 320);
            v61[5] = *v34;
            v61[6] = v48;
          }
          WdLogEvent5_WdError(v61);
          goto LABEL_21;
        }
LABEL_30:
        LODWORD(v16) = 0;
      }
      else
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
        v58[3] = v4;
        v58[4] = a1->HighPart;
        v58[5] = a1->LowPart;
        WdLogEvent5_WdError(v58);
        LODWORD(v16) = -1073741811;
      }
    }
    if ( v62 )
      DxgkReleaseSessionModeChangeLock();
  }
LABEL_33:
  if ( v74 )
  {
    KeUnstackDetachProcess(&ApcState);
    v74 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v30);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v69);
  return (unsigned int)v16;
}

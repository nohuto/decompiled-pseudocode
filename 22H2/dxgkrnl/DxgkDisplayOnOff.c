/*
 * XREFs of DxgkDisplayOnOff @ 0x1C0186080
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000538C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0007850 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01719BC (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0183F9C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01863CC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0195BF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE3C8 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E7138 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01EA554 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0356970 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGDEVICE *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  unsigned int v12; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v14; // rdi
  DXGPROCESS *Current; // rax
  __int64 v16; // r14
  int v17; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v19; // rbx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  __int64 v21; // rdi
  __int64 v22; // r15
  unsigned int *v23; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v25; // r9
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  const wchar_t *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  const wchar_t *v34; // r9
  __int64 HighPart; // rax
  __int64 LowPart; // rcx
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v41; // rcx
  char v43; // [rsp+51h] [rbp-AFh] BYREF
  char v44; // [rsp+52h] [rbp-AEh]
  struct DXGDEVICE *v45; // [rsp+58h] [rbp-A8h]
  SESSION_VIEW *v46; // [rsp+60h] [rbp-A0h]
  _BYTE v47[8]; // [rsp+68h] [rbp-98h] BYREF
  char v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h]
  char v51; // [rsp+88h] [rbp-78h]
  _BYTE v52[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  char v54; // [rsp+D8h] [rbp-28h]
  _QWORD v55[10]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v56[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v57[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v58[88]; // [rsp+178h] [rbp+78h] BYREF

  v4 = a2;
  v44 = a3;
  memset(v55, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v55[1]);
  v49 = -1;
  v55[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v55[3]) = 53;
  LOBYTE(v55[6]) = -1;
  v50 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2183);
  v54 = 0;
  v8 = 0LL;
  v45 = 0LL;
  v9 = -1073741811;
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v11
    || (v12 = PsGetCurrentProcessSessionId(v10),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, v12),
        (v14 = SessionDataForSpecifiedSession) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v31 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    v16 = (unsigned int)PsGetCurrentProcessSessionId(v41);
    v32 = -1073741811LL;
    goto LABEL_55;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
  Current = DXGPROCESS::GetCurrent();
  v16 = (__int64)Current;
  if ( !Current )
  {
    v16 = 10148LL;
    WdLogSingleEntry1(2LL, 10148LL);
    v31 = L"Failed to get current DXGPROCESS";
LABEL_40:
    v32 = 0LL;
LABEL_55:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v16, v32, 0LL, 0LL, 0LL);
    goto LABEL_31;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL, v16);
    v9 = -1073741790;
    v31 = L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).";
    goto LABEL_40;
  }
  v43 = 0;
  v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v43, 1);
  v9 = v17;
  if ( v17 < 0 )
  {
    v33 = v17;
    WdLogSingleEntry1(2LL, v17);
    v34 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
    HighPart = 0LL;
    LowPart = 0LL;
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v14, a1, v4);
    v46 = SessionViewFromSource;
    v19 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        while ( 1 )
        {
          v21 = *((unsigned int *)PrimaryDisplaySource + 4);
          v22 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          v23 = (unsigned int *)(v22 + 404);
          if ( v8 )
          {
            DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v22 + 404), v8);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
            v45 = 0LL;
          }
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v22 + 404),
                                                   0);
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v37 = CddDeviceAndContextForCurrentSession;
            WdLogSingleEntry3(2LL, *(int *)(v22 + 408), *v23, CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
              *(int *)(v22 + 408),
              *v23,
              v37,
              0LL,
              0LL);
            v19 = v46;
            goto LABEL_25;
          }
          v8 = v45;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52, v45);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGFASTMUTEX *const)(v16 + 376), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v8, 1, v25, 0);
          v26 = COREDEVICEACCESS::AcquireExclusive((__int64)v56, 2LL);
          if ( v26 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v58);
            COREACCESS::~COREACCESS((COREACCESS *)v57);
            if ( v48 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52);
            goto LABEL_27;
          }
          if ( v26 < 0 )
            break;
          if ( v44 )
          {
            if ( a4 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v22 + 2920)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                *(ADAPTER_DISPLAY **)(v22 + 2920),
                *((struct ADAPTER_RENDER **)v8 + 2));
            if ( (int)DmmEnablePathsFromVidPnSource(
                        v8,
                        v21,
                        a4,
                        (struct COREDEVICEACCESS *)v56,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v55) < 0 )
              goto LABEL_20;
            v27 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v22 + 2920), v21);
            if ( v27 >= 0 )
              goto LABEL_20;
            v39 = v27;
            WdLogSingleEntry4(2LL, v21, *(int *)(v22 + 408), *v23, v27);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on adapter 0x%I64x%08I64x (status = 0x%I64x)",
              v21,
              *(int *)(v22 + 408),
              *v23,
              v39,
              0LL);
            goto LABEL_53;
          }
          DmmDisablePathsFromVidPnSource(v8, v21);
LABEL_20:
          COREACCESS::~COREACCESS((COREACCESS *)v58);
          COREACCESS::~COREACCESS((COREACCESS *)v57);
          if ( v48 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52);
          if ( !v8 )
            goto LABEL_26;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
LABEL_25:
          v8 = 0LL;
          v45 = 0LL;
LABEL_26:
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v19, PrimaryDisplaySource);
LABEL_27:
          if ( !PrimaryDisplaySource )
            goto LABEL_28;
        }
        v38 = v26;
        WdLogSingleEntry3(2LL, *(int *)(v22 + 408), *v23, v26);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire device lock on adapter 0x%I64x%08I64x (Status = 0x%I64x)",
          *(int *)(v22 + 408),
          *v23,
          v38,
          0LL,
          0LL);
LABEL_53:
        v19 = v46;
        goto LABEL_20;
      }
LABEL_28:
      v9 = 0;
      goto LABEL_29;
    }
    v33 = v4;
    WdLogSingleEntry3(2LL, v4, a1->HighPart, a1->LowPart);
    HighPart = a1->HighPart;
    v34 = L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.";
    LowPart = a1->LowPart;
    v9 = -1073741811;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v34, v33, HighPart, LowPart, 0LL, 0LL);
LABEL_29:
  if ( v43 )
    DxgkReleaseSessionModeChangeLock();
LABEL_31:
  if ( v54 )
  {
    KeUnstackDetachProcess(&ApcState);
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v49);
  return v9;
}

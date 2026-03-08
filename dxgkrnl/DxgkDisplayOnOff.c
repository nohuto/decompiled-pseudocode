/*
 * XREFs of DxgkDisplayOnOff @ 0x1C01C33B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0166DF0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179A9C (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01BE97C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01C167C (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01C36FC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C40F4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01C5CF0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C6250 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0351EE0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGDEVICE *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v17; // rdi
  __int64 v18; // rcx
  DXGPROCESS *Current; // rax
  __int64 v20; // r14
  int v21; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v23; // rbx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  __int64 v25; // rdi
  __int64 v26; // r15
  unsigned int *v27; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v29; // r9
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  const wchar_t *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  const wchar_t *v38; // r9
  __int64 HighPart; // rax
  __int64 LowPart; // rcx
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  char v50; // [rsp+51h] [rbp-AFh] BYREF
  char v51; // [rsp+52h] [rbp-AEh]
  struct DXGDEVICE *v52; // [rsp+58h] [rbp-A8h] BYREF
  SESSION_VIEW *v53; // [rsp+60h] [rbp-A0h]
  _BYTE v54[8]; // [rsp+68h] [rbp-98h] BYREF
  char v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h]
  char v58; // [rsp+88h] [rbp-78h]
  _BYTE v59[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  char v61; // [rsp+D8h] [rbp-28h]
  _QWORD v62[10]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v63[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v64[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v65[88]; // [rsp+178h] [rbp+78h] BYREF

  v4 = a2;
  v51 = a3;
  memset(v62, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v62[1]);
  v56 = -1;
  v62[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v62[3]) = 53;
  LOBYTE(v62[6]) = -1;
  v57 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2183);
  v61 = 0;
  v8 = 0LL;
  v52 = 0LL;
  v9 = -1073741811;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v12
    || (v15 = PsGetCurrentProcessSessionId(v11, v10, v13, v14),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, v15),
        (v17 = SessionDataForSpecifiedSession) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v13, v14);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v35 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    v20 = (unsigned int)PsGetCurrentProcessSessionId(v46, v45, v47, v48);
    v36 = -1073741811LL;
    goto LABEL_55;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
  Current = DXGPROCESS::GetCurrent(v18);
  v20 = (__int64)Current;
  if ( !Current )
  {
    v20 = 10145LL;
    WdLogSingleEntry1(2LL, 10145LL);
    v35 = L"Failed to get current DXGPROCESS";
LABEL_40:
    v36 = 0LL;
LABEL_55:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v35, v20, v36, 0LL, 0LL, 0LL);
    goto LABEL_31;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL, v20);
    v9 = -1073741790;
    v35 = L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).";
    goto LABEL_40;
  }
  v50 = 0;
  v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v50, 1);
  v9 = v21;
  if ( v21 < 0 )
  {
    v37 = v21;
    WdLogSingleEntry1(2LL, v21);
    v38 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
    HighPart = 0LL;
    LowPart = 0LL;
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v17, a1, v4);
    v53 = SessionViewFromSource;
    v23 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        while ( 1 )
        {
          v25 = *((unsigned int *)PrimaryDisplaySource + 4);
          v26 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          v27 = (unsigned int *)(v26 + 404);
          if ( v8 )
          {
            DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v26 + 404), v8);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
            v52 = 0LL;
          }
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v26 + 404),
                                                   &v52,
                                                   0LL,
                                                   0LL,
                                                   0);
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v41 = CddDeviceAndContextForCurrentSession;
            WdLogSingleEntry3(2LL, *(int *)(v26 + 408), *v27, CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
              *(int *)(v26 + 408),
              *v27,
              v41,
              0LL,
              0LL);
            v23 = v53;
            goto LABEL_25;
          }
          v8 = v52;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59, v52);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v54, (struct DXGFASTMUTEX *const)(v20 + 376), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v8, 1, v29, 0);
          v30 = COREDEVICEACCESS::AcquireExclusive((__int64)v63, 2LL);
          if ( v30 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v65);
            COREACCESS::~COREACCESS((COREACCESS *)v64);
            if ( v55 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v54);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59);
            goto LABEL_27;
          }
          if ( v30 < 0 )
            break;
          if ( v51 )
          {
            if ( a4 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v26 + 2920)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*(PERESOURCE ***)(v26 + 2920), *((PERESOURCE ***)v8 + 2));
            if ( (int)DmmEnablePathsFromVidPnSource(
                        v8,
                        v25,
                        a4,
                        (struct COREDEVICEACCESS *)v63,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v62) < 0 )
              goto LABEL_20;
            v31 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v26 + 2920), v25);
            if ( v31 >= 0 )
              goto LABEL_20;
            v43 = v31;
            WdLogSingleEntry4(2LL, v25, *(int *)(v26 + 408), *v27, v31);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on adapter 0x%I64x%08I64x (status = 0x%I64x)",
              v25,
              *(int *)(v26 + 408),
              *v27,
              v43,
              0LL);
            goto LABEL_53;
          }
          DmmDisablePathsFromVidPnSource(v8, v25);
LABEL_20:
          COREACCESS::~COREACCESS((COREACCESS *)v65);
          COREACCESS::~COREACCESS((COREACCESS *)v64);
          if ( v55 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v54);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59);
          if ( !v8 )
            goto LABEL_26;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
LABEL_25:
          v8 = 0LL;
          v52 = 0LL;
LABEL_26:
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
LABEL_27:
          if ( !PrimaryDisplaySource )
            goto LABEL_28;
        }
        v42 = v30;
        WdLogSingleEntry3(2LL, *(int *)(v26 + 408), *v27, v30);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire device lock on adapter 0x%I64x%08I64x (Status = 0x%I64x)",
          *(int *)(v26 + 408),
          *v27,
          v42,
          0LL,
          0LL);
LABEL_53:
        v23 = v53;
        goto LABEL_20;
      }
LABEL_28:
      v9 = 0;
      goto LABEL_29;
    }
    v37 = v4;
    WdLogSingleEntry3(2LL, v4, a1->HighPart, a1->LowPart);
    HighPart = a1->HighPart;
    v38 = L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.";
    LowPart = a1->LowPart;
    v9 = -1073741811;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v38, v37, HighPart, LowPart, 0LL, 0LL);
LABEL_29:
  if ( v50 )
    DxgkReleaseSessionModeChangeLock();
LABEL_31:
  if ( v61 )
  {
    KeUnstackDetachProcess(&ApcState);
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v56);
  return v9;
}

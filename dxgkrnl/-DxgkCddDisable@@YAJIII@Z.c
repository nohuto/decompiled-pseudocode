__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rsi
  PERESOURCE ***v14; // rbx
  __int64 v15; // rdi
  struct _LUID *v16; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGSESSIONMGR *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v28; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  SESSION_VIEW *v31; // r14
  unsigned int v32; // r15d
  __int64 v33; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v35; // r9
  struct DXGDEVICE *v36; // rbx
  int v37; // eax
  ADAPTER_DISPLAY *v38; // rcx
  __int64 CurrentProcess; // rax
  const wchar_t *v40; // r14
  __int64 v41; // rsi
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rbx
  const wchar_t *v45; // r9
  __int64 v46; // rax
  __int64 LowPart; // rcx
  unsigned __int8 v48; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h]
  char v59; // [rsp+78h] [rbp-88h]
  struct tagRECT v60; // [rsp+80h] [rbp-80h] BYREF
  struct _LUID *v61; // [rsp+90h] [rbp-70h]
  _BYTE v62[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v63[80]; // [rsp+B0h] [rbp-50h] BYREF
  char v64[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v65[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v66[88]; // [rsp+148h] [rbp+48h] BYREF
  char v67[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v68[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  char v69[88]; // [rsp+1E8h] [rbp+E8h] BYREF

  v57 = -1;
  v4 = (unsigned int)a3;
  v56 = a3;
  v5 = (unsigned int)a1;
  v58 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v59 = 1;
    v57 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3003);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v57, 3003);
  Current = DXGPROCESS::GetCurrent();
  v7 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v40 = L"0x%I64x Unexpected process 0x%I64x";
    v41 = PsGetCurrentProcess();
    v7 = 0LL;
LABEL_58:
    v43 = -1073741811LL;
LABEL_78:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v43, v41, v7, 0LL, 0LL);
    goto LABEL_21;
  }
  v8 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v9 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v9 >= *(_DWORD *)(v7 + 296) )
    goto LABEL_9;
  v10 = *(_QWORD *)(v7 + 280);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v42 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
  if ( !v42 )
    goto LABEL_9;
  if ( v42 != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v11 = 0LL;
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(v10 + 16LL * v9);
LABEL_10:
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  v55 = (struct DXGDEVICE *)v11;
  if ( !v11 )
  {
    LODWORD(v15) = -1073741811;
    v41 = v5;
    WdLogSingleEntry3(2LL, -1073741811LL, v5, v7);
    v40 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    goto LABEL_58;
  }
  v13 = *(_QWORD *)(v11 + 1880);
  v14 = (PERESOURCE ***)(v13 + 2920);
  if ( !v13 || !*v14 )
  {
    WdLogSingleEntry1(1LL, 627LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      627LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, v11, 1, v12, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v67);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)*v14) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*v14, *(PERESOURCE ***)(v11 + 16));
    if ( *(_DWORD *)(v13 + 200) == 1 )
      ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)*v14, v4, 0LL);
    LODWORD(v15) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v69);
    COREACCESS::~COREACCESS((COREACCESS *)v68);
    v16 = (struct _LUID *)(v13 + 404);
LABEL_18:
    Global = DXGGLOBAL::GetGlobal();
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0);
    if ( (int)v15 < 0 )
    {
      v55 = 0LL;
      DxgkLogCodePointPacket(0x41u, v16->LowPart, v4, v15, 0LL);
    }
    LODWORD(v15) = 0;
    goto LABEL_21;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    WdLogSingleEntry1(1LL, 668LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(OLD_MODE_CHANGE == Win32kCommand) || ((PRESERVE_ACTIVE_VIDPN | OLD_MODE_CHANGE) == Win32kCommand)",
      668LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v23 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v23
    || (v26 = PsGetCurrentProcessSessionId(v22, v21, v24, v25),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v23, v26)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21, v24, v25);
    LODWORD(v15) = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v40 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    v43 = (unsigned int)PsGetCurrentProcessSessionId(v51, v50, v52, v53);
    v41 = -1073741811LL;
    v7 = 0LL;
    goto LABEL_78;
  }
  v54[0] = 0;
  v28 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v54, 1);
  LODWORD(v15) = v28;
  if ( v28 < 0 )
  {
    v44 = v28;
    WdLogSingleEntry1(2LL, v28);
    v45 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
    v46 = 0LL;
    LowPart = 0LL;
  }
  else
  {
    v16 = (struct _LUID *)(v13 + 404);
    v61 = (struct _LUID *)(v13 + 404);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v13 + 404),
                              v4);
    *(_QWORD *)&v60.left = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        v31 = *(SESSION_VIEW **)&v60.left;
        do
        {
          v32 = *((_DWORD *)PrimaryDisplaySource + 4);
          v33 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v31, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v33 + 404),
                                                   0);
          v15 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            WdLogSingleEntry3(
              2LL,
              *(int *)(v33 + 408),
              *(unsigned int *)(v33 + 404),
              CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
              *(int *)(v33 + 408),
              *(unsigned int *)(v33 + 404),
              v15,
              0LL,
              0LL);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v62,
              v55);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v55, 1, v35, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v64);
            if ( *(_DWORD *)(v33 + 200) != 1 && *((_DWORD *)v55 + 152) == 4
              || *(_DWORD *)(v33 + 200) == 4
              || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL) + 200LL) == 4 )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v66);
              COREACCESS::~COREACCESS((COREACCESS *)v65);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v62);
            }
            else
            {
              if ( *(_QWORD *)(v33 + 2928) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v55 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v33 + 2928), 8LL, v32);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
                    *(ADAPTER_RENDER **)(v33 + 2928),
                    1 << v32,
                    0,
                    1 << v32,
                    0);
              }
              if ( *(_DWORD *)(v33 + 200) == 1 )
              {
                if ( (a2 & 4) != 0 )
                {
                  v36 = v55;
                  v37 = DmmDisablePathsFromVidPnSource(v55, v32);
                }
                else
                {
                  v48 = *(_BYTE *)(v33 + 2833)
                     && *(_BYTE *)(v33 + 2752)
                     && *(_DWORD *)(v33 + 412) != 1297040209
                     && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 216) + 64LL) + 1152LL);
                  v36 = v55;
                  v37 = DmmRemovePathsFromVidPnSource(v55, v32, v48);
                }
              }
              else
              {
                v36 = v55;
                v37 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v33 + 2920), v55, v32);
              }
              LODWORD(v15) = v37;
              memset(v63, 0, sizeof(v63));
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v33 + 2920), v32, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v33 + 2920),
                v32,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v63);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v33 + 2920), v32, 0);
              v38 = *(ADAPTER_DISPLAY **)(v33 + 2920);
              v60 = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v38, v32, &v60);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v33 + 2920), v32, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v66);
              COREACCESS::~COREACCESS((COREACCESS *)v65);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v62);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
            }
          }
        }
        while ( PrimaryDisplaySource );
        v16 = v61;
        LODWORD(v4) = v56;
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v16, v4, 1u);
      if ( v54[0] )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_18;
    }
    v44 = v4;
    WdLogSingleEntry3(2LL, v4, *(int *)(v13 + 408), v16->LowPart);
    v46 = *(int *)(v13 + 408);
    v45 = L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.";
    LowPart = v16->LowPart;
    LODWORD(v15) = 0;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v45, v44, v46, LowPart, 0LL, 0LL);
  if ( v54[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
  if ( v59 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v57);
  }
  return (unsigned int)v15;
}

/*
 * XREFs of NtDxgkVailConnect @ 0x1C0364970
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0048768 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C005AA48 (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C03458A0 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C03615BC (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0361A38 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0362718 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailConnect(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int VmBusHostSubscribers; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rbx
  unsigned int v21; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rcx
  struct DXGPROCESS *v30; // r15
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  char v40; // [rsp+60h] [rbp-31h]
  int v41; // [rsp+68h] [rbp-29h] BYREF
  __int64 v42; // [rsp+70h] [rbp-21h]
  char v43; // [rsp+78h] [rbp-19h]
  _BYTE v44[16]; // [rsp+80h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF
  char v46; // [rsp+C0h] [rbp+2Fh]

  v41 = -1;
  v42 = 0LL;
  v3 = 1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2216;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2216);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2216);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    LODWORD(v6) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_43;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v44, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
  if ( !*((_QWORD *)Current + 74) )
  {
    if ( (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) )
      {
        Object = 0LL;
        v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v20
          && (v21 = PsGetCurrentProcessSessionId(v19),
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, v21),
              (v23 = SessionDataForSpecifiedSession) != 0LL) )
        {
          v24 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
          v6 = v24;
          if ( v24 >= 0 )
          {
            v46 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v30 = DXGPROCESS::GetCurrent(v29);
            if ( *((_BYTE *)v30 + 600) )
            {
              WdLogSingleEntry1(3LL, -1073740528LL);
              LODWORD(v6) = -1073740528;
            }
            else
            {
              v31 = DXGSESSIONDATA::VailGuestConnect(v23);
              LODWORD(v6) = v31;
              if ( v31 < 0 )
              {
                WdLogSingleEntry1(3LL, v31);
                v3 = 0;
              }
              *((_BYTE *)v30 + 600) = v3;
            }
            if ( v46 )
              KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v25);
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, v6);
            v28 = PsGetCurrentProcessSessionId(v27);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
              v28,
              v6,
              0LL,
              0LL,
              0LL);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        else
        {
          v32 = PsGetCurrentProcessSessionId(v19);
          LODWORD(v6) = -1073741790;
          WdLogSingleEntry2(2LL, v32, -1073741790LL);
          v34 = PsGetCurrentProcessSessionId(v33);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v34,
            -1073741790LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        LODWORD(v6) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = -1071775727LL;
      }
    }
    else
    {
      LODWORD(v6) = -1073741790;
      Global = DXGGLOBAL::GetGlobal();
      WdLogSingleEntry4(
        3LL,
        -1073741790LL,
        *((_QWORD *)Current + 74) != 0LL,
        (*((_DWORD *)Current + 106) >> 2) & 1LL,
        *((_QWORD *)Global + 120));
    }
    goto LABEL_40;
  }
  v7 = (struct _EX_RUNDOWN_REF *)DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGFASTMUTEX *const)&v7[5], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
  if ( v7[14].Count )
  {
    VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers((DXGVAILOBJECT *)v7);
    LODWORD(v6) = VmBusHostSubscribers;
    if ( VmBusHostSubscribers == -1073740528 )
    {
      v13 = -1073740528LL;
    }
    else
    {
      if ( VmBusHostSubscribers >= 0 )
      {
        v14 = DXGVAILOBJECT::EnableVmBusChannel((struct _KTHREAD **)v7);
        LODWORD(v6) = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry1(3LL, v14);
          DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v7);
        }
        goto LABEL_17;
      }
      v13 = VmBusHostSubscribers;
    }
    WdLogSingleEntry1(3LL, v13);
  }
  else
  {
    LODWORD(v6) = -1071775727;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = -1071775727LL;
  }
LABEL_17:
  if ( v40 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
  if ( (int)v6 >= 0 )
    ExReInitializeRundownProtection(v7 + 11);
  FlipManagerDwmReleaseFlipManagerObject((struct FlipManagerObject *)v7);
LABEL_40:
  if ( v44[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
  KeLeaveCriticalRegion();
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    LOBYTE(v36) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v41);
  }
  return (unsigned int)v6;
}

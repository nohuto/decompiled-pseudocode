/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C0360390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0047708 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0055888 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0340E60 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C035CFA8 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DDC8 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rdi
  struct DXGVAILOBJECT *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rcx
  struct DXGPROCESS *v28; // r15
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // eax
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
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2217;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2217);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2217);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v44, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
    if ( *((_QWORD *)Current + 74) )
    {
      v7 = DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v7 + 11);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v7 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v7);
      LODWORD(v6) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v7);
      if ( v40 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
      DxgkCompositionObject::Release(v7);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      Object = 0LL;
      v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v10
        && (v13 = PsGetCurrentProcessSessionId(v9, v8, v11, v12),
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v13),
            (v15 = SessionDataForSpecifiedSession) != 0LL) )
      {
        v16 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v6 = v16;
        if ( v16 >= 0 )
        {
          v46 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v28 = DXGPROCESS::GetCurrent(v27);
          if ( *((_BYTE *)v28 + 600) )
          {
            v29 = DXGSESSIONDATA::VailGuestDisconnect(v15);
            LODWORD(v6) = v29;
            if ( v29 >= 0 )
              v3 = 0;
            else
              WdLogSingleEntry1(3LL, v29);
            *((_BYTE *)v28 + 600) = v3;
          }
          else
          {
            LODWORD(v6) = -2147483611;
            WdLogSingleEntry1(3LL, -2147483611LL);
          }
          if ( v46 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17, v19, v20);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, v6);
          v26 = PsGetCurrentProcessSessionId(v23, v22, v24, v25);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v26,
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
        v30 = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
        WdLogSingleEntry2(2LL, v30, -1073741790LL);
        v35 = PsGetCurrentProcessSessionId(v32, v31, v33, v34);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v35,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v6) = -1073741790;
      }
    }
    else
    {
      LODWORD(v6) = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
    }
    KeLeaveCriticalRegion();
    if ( v44[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
  }
  else
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    LOBYTE(v36) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v41);
  }
  return (unsigned int)v6;
}

/*
 * XREFs of NtDxgkVailConnect @ 0x1C035FEE0
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
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0059E28 (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0340E60 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C035CB2C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C035CFA8 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DC88 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGSESSIONMGR *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // eax
  __int64 v38; // rcx
  struct DXGPROCESS *v39; // r15
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  char v52; // [rsp+60h] [rbp-31h]
  int v53; // [rsp+68h] [rbp-29h] BYREF
  __int64 v54; // [rsp+70h] [rbp-21h]
  char v55; // [rsp+78h] [rbp-19h]
  _BYTE v56[16]; // [rsp+80h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF
  char v58; // [rsp+C0h] [rbp+2Fh]

  v53 = -1;
  v54 = 0LL;
  v3 = 1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2216;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2216);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2216);
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v56, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
  if ( !*((_QWORD *)Current + 74) )
  {
    if ( (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) )
      {
        Object = 0LL;
        v21 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v21
          && (v24 = PsGetCurrentProcessSessionId(v20, v19, v22, v23),
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v21, v24),
              (v26 = SessionDataForSpecifiedSession) != 0LL) )
        {
          v27 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
          v6 = v27;
          if ( v27 >= 0 )
          {
            v58 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v39 = DXGPROCESS::GetCurrent(v38);
            if ( *((_BYTE *)v39 + 600) )
            {
              WdLogSingleEntry1(3LL, -1073740528LL);
              LODWORD(v6) = -1073740528;
            }
            else
            {
              v40 = DXGSESSIONDATA::VailGuestConnect(v26);
              LODWORD(v6) = v40;
              if ( v40 < 0 )
              {
                WdLogSingleEntry1(3LL, v40);
                v3 = 0;
              }
              *((_BYTE *)v39 + 600) = v3;
            }
            if ( v58 )
              KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v29, v28, v30, v31);
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, v6);
            v37 = PsGetCurrentProcessSessionId(v34, v33, v35, v36);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
              v37,
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
          v41 = PsGetCurrentProcessSessionId(v20, v19, v22, v23);
          LODWORD(v6) = -1073741790;
          WdLogSingleEntry2(2LL, v41, -1073741790LL);
          v46 = PsGetCurrentProcessSessionId(v43, v42, v44, v45);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v46,
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
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
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
  if ( v52 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
  if ( (int)v6 >= 0 )
    ExReInitializeRundownProtection(v7 + 11);
  DxgkCompositionObject::Release((DxgkCompositionObject *)v7);
LABEL_40:
  if ( v56[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56);
  KeLeaveCriticalRegion();
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 )
  {
    LOBYTE(v48) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v53);
  }
  return (unsigned int)v6;
}

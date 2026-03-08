/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C017D64C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A702C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01C5874 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01DAD84 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01DBB30 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01DC09C (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // bl
  __int64 v4; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  int v13; // eax
  __int64 v14; // rdi
  SESSION_ADAPTER *SessionAdapterFromLuid; // r13
  struct DXGADAPTER *v16; // rbx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rax
  struct DISPLAY_SOURCE *v20; // rdx
  int v21; // eax
  bool v22; // al
  int v24; // eax
  __int64 v25; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  char v32; // [rsp+50h] [rbp-89h]
  _BYTE v34[2]; // [rsp+52h] [rbp-87h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-85h]
  SESSION_ADAPTER *v36; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v37[144]; // [rsp+60h] [rbp-79h] BYREF

  v3 = a3;
  v4 = a2;
  v35 = a2;
  v36 = 0LL;
  v32 = 0;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v8
    || (v11 = PsGetCurrentProcessSessionId(v7, v6, v9, v10),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, v11)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v9, v10);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v31 = PsGetCurrentProcessSessionId(v28, v27, v29, v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v31,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v34[0] = 0;
  v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v34, 1);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else if ( v3 )
  {
    LODWORD(v14) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, 0LL, &v36);
    if ( (int)v14 >= 0 )
    {
      SessionAdapterFromLuid = v36;
      v32 = 1;
      goto LABEL_7;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
    if ( SessionAdapterFromLuid )
    {
LABEL_7:
      if ( (_DWORD)v4 == -1 )
      {
LABEL_17:
        v22 = v3 == 0;
        goto LABEL_18;
      }
      v16 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( v16 )
      {
        if ( !*((_QWORD *)v16 + 365) )
        {
          WdLogSingleEntry1(1LL, 514LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            514LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v16, 0LL);
        v18 = COREADAPTERACCESS::AcquireExclusive((__int64)v37, (unsigned int)(v17 + 1));
        v14 = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v18);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire the lock shared on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
            a1->HighPart,
            a1->LowPart,
            v14,
            0LL,
            0LL);
        }
        else
        {
          v19 = *((_QWORD *)v16 + 365);
          if ( (unsigned int)v4 >= *(_DWORD *)(v19 + 96) )
          {
            LODWORD(v14) = -1073741811;
            WdLogSingleEntry4(2LL, (unsigned int)v4, a1->HighPart, a1->LowPart, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"The VidPnSourceId 0x%I64x caller specified does not exit on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
              (unsigned int)v4,
              a1->HighPart,
              a1->LowPart,
              -1073741811LL,
              0LL);
          }
          else
          {
            v20 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v19 + 128) + 4000 * v4);
            if ( a3 )
            {
              v21 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v20);
              v14 = v21;
              if ( v21 >= 0 )
              {
                KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v16 + 365) + 656LL), 0, 0);
LABEL_16:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
                v3 = a3;
                goto LABEL_17;
              }
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v21);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to take owner on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
                v4,
                a1->HighPart,
                a1->LowPart,
                v14,
                0LL);
            }
            else
            {
              v24 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v20);
              v14 = v24;
              if ( v24 >= 0 )
                goto LABEL_16;
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v24);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to remove the session ownership on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x,"
                          " returning 0x%I64x.",
                v4,
                a1->HighPart,
                a1->LowPart,
                v14,
                0LL);
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
      }
      else
      {
        LODWORD(v14) = -1073741811;
        v25 = v35;
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v35, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to take the adapter view ownership since adapter 0x%I64x%08I64x does not have the caller speci"
                    "fied VidPn Source ID 0x%I64x, returning 0x%I64x.",
          a1->HighPart,
          a1->LowPart,
          v25,
          -1073741811LL,
          0LL);
      }
      v22 = v32;
LABEL_18:
      if ( v22 )
        DXGSESSIONDATA::RemoveAdapterFromSession(SessionDataForSpecifiedSession, a1);
      goto LABEL_20;
    }
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the caller specified session adapter 0x%I64x%08I64x, returning 0x%I64x.",
      a1->HighPart,
      a1->LowPart,
      -1073741811LL,
      0LL,
      0LL);
    LODWORD(v14) = -1073741811;
  }
LABEL_20:
  if ( v34[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v14;
}

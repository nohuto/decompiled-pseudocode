/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C017ADDC
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01AAA60 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00053F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01AB278 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01DFA38 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01E7908 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01E8640 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01E8A9C (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // bl
  __int64 v4; // r12
  DXGSESSIONMGR *v6; // rdi
  unsigned int v7; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  int v9; // eax
  __int64 v10; // rdi
  SESSION_ADAPTER *SessionAdapterFromLuid; // r13
  struct DXGADAPTER *v12; // rbx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  struct DISPLAY_SOURCE *v16; // rdx
  int v17; // eax
  bool v18; // al
  int v20; // eax
  __int64 v21; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v23; // eax
  char v24; // [rsp+50h] [rbp-89h]
  _BYTE v26[2]; // [rsp+52h] [rbp-87h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-85h]
  SESSION_ADAPTER *v28; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v29[144]; // [rsp+60h] [rbp-79h] BYREF

  v3 = a3;
  v4 = a2;
  v27 = a2;
  v28 = 0LL;
  v24 = 0;
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v6
    || (v7 = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, v7)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v23 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v26[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v26, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else if ( v3 )
  {
    LODWORD(v10) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, 0LL, &v28);
    if ( (int)v10 >= 0 )
    {
      SessionAdapterFromLuid = v28;
      v24 = 1;
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
        v18 = v3 == 0;
        goto LABEL_18;
      }
      v12 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( v12 )
      {
        if ( !*((_QWORD *)v12 + 365) )
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
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v12, 0LL);
        v14 = COREADAPTERACCESS::AcquireExclusive((__int64)v29, (unsigned int)(v13 + 1));
        v10 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v14);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire the lock shared on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
            a1->HighPart,
            a1->LowPart,
            v10,
            0LL,
            0LL);
        }
        else
        {
          v15 = *((_QWORD *)v12 + 365);
          if ( (unsigned int)v4 >= *(_DWORD *)(v15 + 96) )
          {
            LODWORD(v10) = -1073741811;
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
            v16 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v15 + 128) + 4000 * v4);
            if ( a3 )
            {
              v17 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v16);
              v10 = v17;
              if ( v17 >= 0 )
              {
                KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v12 + 365) + 656LL), 0, 0);
LABEL_16:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
                v3 = a3;
                goto LABEL_17;
              }
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v17);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to take owner on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
                v4,
                a1->HighPart,
                a1->LowPart,
                v10,
                0LL);
            }
            else
            {
              v20 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v16);
              v10 = v20;
              if ( v20 >= 0 )
                goto LABEL_16;
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v20);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to remove the session ownership on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x,"
                          " returning 0x%I64x.",
                v4,
                a1->HighPart,
                a1->LowPart,
                v10,
                0LL);
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
      }
      else
      {
        LODWORD(v10) = -1073741811;
        v21 = v27;
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v27, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to take the adapter view ownership since adapter 0x%I64x%08I64x does not have the caller speci"
                    "fied VidPn Source ID 0x%I64x, returning 0x%I64x.",
          a1->HighPart,
          a1->LowPart,
          v21,
          -1073741811LL,
          0LL);
      }
      v18 = v24;
LABEL_18:
      if ( v18 )
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
    LODWORD(v10) = -1073741811;
  }
LABEL_20:
  if ( v26[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v10;
}

/*
 * XREFs of DxgkCreateSessionViewForCurrentSession @ 0x1C01C3F04
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C01C385C (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 */

__int64 __fastcall DxgkCreateSessionViewForCurrentSession(
        struct _LUID *a1,
        unsigned int a2,
        struct tagRECT *a3,
        unsigned __int8 a4,
        struct _LUID *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v16; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax

  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v11
    && (v14 = PsGetCurrentProcessSessionId(v10, v9, v12, v13),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, v14),
        (v16 = SessionDataForSpecifiedSession) != 0LL) )
  {
    if ( *((struct _KTHREAD **)SessionDataForSpecifiedSession + 2319) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 805LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSessionData->IsSessionModeChangeLockExclusiveOwner()",
        805LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return DXGSESSIONDATA::AddSourceViewToSession(v16, a3, a1, a2, a4, a5);
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v12, v13);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v23 = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
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
}

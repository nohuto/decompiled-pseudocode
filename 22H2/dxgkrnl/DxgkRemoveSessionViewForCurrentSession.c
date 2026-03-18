/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1C01E5564
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C01E00A0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C01E55FC (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 */

__int64 __fastcall DxgkRemoveSessionViewForCurrentSession(struct _LUID *a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  unsigned int v8; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v10; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax

  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v7
    && (v8 = PsGetCurrentProcessSessionId(v6),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, v8),
        (v10 = SessionDataForSpecifiedSession) != 0LL) )
  {
    if ( *((struct _KTHREAD **)SessionDataForSpecifiedSession + 2319) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 852LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSessionData->IsSessionModeChangeLockExclusiveOwner()",
        852LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return DXGSESSIONDATA::RemoveSourceViewFromSession(v10, a1, a2, a3);
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v14 = PsGetCurrentProcessSessionId(v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}

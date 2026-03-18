/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C01E54B4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001515C (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01DFB20 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C01E5978 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

void DxgkDestroyCsrssProcess()
{
  __int64 v0; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  SESSION_ADAPTER *v5; // rbp
  _QWORD *v6; // r14
  __int64 v7; // rcx
  _QWORD *v8; // rax

  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !SessionDataForSpecifiedSession
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v0),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                            SessionDataForSpecifiedSession,
                                            CurrentProcessSessionId)) == 0LL) )
  {
    WdLogSingleEntry1(1LL, 625LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 625LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)SessionDataForSpecifiedSession + 2331) != PsGetCurrentProcess(v3) )
  {
    WdLogSingleEntry1(1LL, 626LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSessionData->GetEProcessCSRSS() == PsGetCurrentProcess()",
      626LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v4 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2322);
  while ( v4 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18576) )
  {
    v5 = (SESSION_ADAPTER *)(v4 - 4);
    v6 = v4;
    v4 = (_QWORD *)*v4;
    SESSION_ADAPTER::Cleanup(v5);
    v7 = *v6;
    v8 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( v5 )
      SESSION_ADAPTER::`scalar deleting destructor'(v5);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2332) = 0LL;
}

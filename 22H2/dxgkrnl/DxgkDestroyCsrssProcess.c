/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C0161014
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0123534 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0019FFC (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C01614CC (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C0164B9C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkDestroyCsrssProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  SESSION_ADAPTER *v15; // rbp
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 102);
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v13 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v13 + 24) = 614LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v9 = *((_QWORD *)SessionDataForSpecifiedSession + 2329);
  if ( v9 != PsGetCurrentProcess(v3, v2, v5, v6) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v14 + 24) = 615LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v12 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2320);
  while ( v12 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18560) )
  {
    v15 = (SESSION_ADAPTER *)(v12 - 4);
    v16 = v12;
    v12 = (_QWORD *)*v12;
    SESSION_ADAPTER::Cleanup(v15);
    v17 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16) )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( v15 )
      SESSION_ADAPTER::`scalar deleting destructor'(v15);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2330) = 0LL;
}

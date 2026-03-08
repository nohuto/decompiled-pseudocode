/*
 * XREFs of ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00FF304
 * Callers:
 *     ?OnTimer@RapidHPD@@YAXXZ @ 0x1C00E0290 (-OnTimer@RapidHPD@@YAXXZ.c)
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C00E2C28 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00F62D8 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00F954C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB37C (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1C00FF2CC (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C0101F0C (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C0228FD4 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1C00FF3F8 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 */

__int64 __fastcall CMonitorTopology::CompareToCurrent(CMonitorTopology *a1, int a2)
{
  CMonitorTopology *v2; // r9
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = qword_1C0361320;
  if ( a1 == qword_1C0361320 )
    return 0LL;
  v5 = *((_DWORD *)a1 + 2);
  v6 = 0;
  if ( v5 != *((_DWORD *)qword_1C0361320 + 2) )
    return 1LL;
  v7 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !a2 )
      {
        v9 = v6 | 8;
        if ( *((_WORD *)a1 + 36 * v7 + 28) == *((_WORD *)v2 + 36 * v7 + 28) )
          v9 = v6;
        v6 = v9;
        v10 = *((_QWORD *)a1 + 9 * v7 + 3) - *((_QWORD *)v2 + 9 * v7 + 3);
        if ( !v10 )
          v10 = *((_QWORD *)a1 + 9 * v7 + 4) - *((_QWORD *)v2 + 9 * v7 + 4);
        if ( v10 )
        {
          if ( *((_QWORD *)a1 + 9 * v7 + 3) == *((_QWORD *)v2 + 9 * v7 + 3) )
            v6 = v9 | 4;
          else
            v6 = v9 | 2;
        }
        v11 = *((_QWORD *)a1 + 9 * v7 + 5) - *((_QWORD *)v2 + 9 * v7 + 5);
        if ( !v11 )
          v11 = *((_QWORD *)a1 + 9 * v7 + 6) - *((_QWORD *)v2 + 9 * v7 + 6);
        if ( v11 )
          v6 |= 0x10u;
      }
      if ( !CMonitorTopology::MonitorId::Compare(
              (CMonitorTopology *)((char *)a1 + 72 * v7 + 60),
              (CMonitorTopology *)((char *)v2 + 72 * v7 + 60)) )
        v6 |= 0x20u;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a1 + 2) )
        break;
      v2 = qword_1C0361320;
    }
  }
  return v6;
}

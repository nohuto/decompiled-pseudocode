/*
 * XREFs of ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1C00FF3F8
 * Callers:
 *     ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x1C00FF25C (-MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00FF304 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1C01022AC (-Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 * Callees:
 *     AreHashesEqual @ 0x1C00FF42C (AreHashesEqual.c)
 */

char __fastcall CMonitorTopology::MonitorId::Compare(
        const struct CMonitorTopology::MonitorId *a1,
        const struct CMonitorTopology::MonitorId *a2,
        __int64 a3)
{
  char v3; // bl

  v3 = 0;
  if ( *((_BYTE *)a1 + 21) && *((_BYTE *)a2 + 21) && *((_BYTE *)a1 + 20) == *((_BYTE *)a2 + 20) )
    return (unsigned __int8)AreHashesEqual(a1, a2, a3) != 0;
  return v3;
}

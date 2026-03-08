/*
 * XREFs of ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x1C00FF25C
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1C00FF140 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1C00FF3F8 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::MonitorDataFromId(
        CMonitorTopology *this,
        const struct CMonitorTopology::MonitorId *a2)
{
  __int64 v4; // rdi

  if ( !*((_BYTE *)a2 + 21) )
    return 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 2) )
    return 0LL;
  while ( !CMonitorTopology::MonitorId::Compare((CMonitorTopology *)((char *)this + 72 * v4 + 60), a2) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 2) )
      return 0LL;
  }
  return (CMonitorTopology *)((char *)this + 72 * v4 + 16);
}

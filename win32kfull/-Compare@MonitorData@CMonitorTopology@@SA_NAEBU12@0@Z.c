bool __fastcall CMonitorTopology::MonitorData::Compare(
        const struct CMonitorTopology::MonitorData *a1,
        const struct CMonitorTopology::MonitorData *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  v5 = *((_QWORD *)a1 + 1) - *((_QWORD *)a2 + 1);
  if ( !v5 )
    v5 = *((_QWORD *)a1 + 2) - *((_QWORD *)a2 + 2);
  if ( v5 )
    return 0;
  v6 = *((_QWORD *)a1 + 3) - *((_QWORD *)a2 + 3);
  if ( !v6 )
    v6 = *((_QWORD *)a1 + 4) - *((_QWORD *)a2 + 4);
  return !v6
      && *((_WORD *)a1 + 20) == *((_WORD *)a2 + 20)
      && CMonitorTopology::MonitorId::Compare(
           (const struct CMonitorTopology::MonitorData *)((char *)a1 + 44),
           (const struct CMonitorTopology::MonitorData *)((char *)a2 + 44),
           a3)
      && *((_DWORD *)a1 + 17) == *((_DWORD *)a2 + 17);
}

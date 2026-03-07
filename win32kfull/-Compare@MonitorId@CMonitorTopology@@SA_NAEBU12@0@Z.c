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

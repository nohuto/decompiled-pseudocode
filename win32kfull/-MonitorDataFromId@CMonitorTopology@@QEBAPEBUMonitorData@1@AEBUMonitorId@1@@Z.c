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

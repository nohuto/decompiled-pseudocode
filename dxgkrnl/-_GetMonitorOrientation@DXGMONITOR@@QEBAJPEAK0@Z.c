/*
 * XREFs of ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C01B08C8
 * Callers:
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C01B0844 (MonitorGetMonitorOrientationsFromMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetMonitorOrientation(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // eax

  if ( a2 )
  {
    v3 = 0;
    if ( *((_DWORD *)this + 84) != *((_DWORD *)this + 82) )
      v3 = *((_DWORD *)this + 84);
    *a2 = v3;
  }
  if ( a3 )
    *a3 = *((_DWORD *)this + 86);
  return 0LL;
}

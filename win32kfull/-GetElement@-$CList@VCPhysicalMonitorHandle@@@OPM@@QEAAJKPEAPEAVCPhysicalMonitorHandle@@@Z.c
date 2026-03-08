/*
 * XREFs of ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C738
 * Callers:
 *     MonitorAPIProcessTerminating @ 0x1C00D6D20 (MonitorAPIProcessTerminating.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C760 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OPM::CList<CPhysicalMonitorHandle>::GetElement(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a2 >= *(_DWORD *)(a1 + 12) )
    return 3221225473LL;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2);
  if ( !v3 )
    return 3221225473LL;
  *a3 = v3;
  return 0LL;
}

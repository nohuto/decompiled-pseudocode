/*
 * XREFs of AreHashesEqual @ 0x1C00FF42C
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C00E2DF4 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00FB828 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1C00FF3F8 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreHashesEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x14uLL) == 20;
}

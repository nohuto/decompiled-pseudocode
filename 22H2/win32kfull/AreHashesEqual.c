/*
 * XREFs of AreHashesEqual @ 0x1C00C3968
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C00BF780 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00C1800 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1C00C3934 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreHashesEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x14uLL) == 20;
}

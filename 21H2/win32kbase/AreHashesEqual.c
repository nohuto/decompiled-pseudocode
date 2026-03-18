/*
 * XREFs of AreHashesEqual @ 0x1C00681D0
 * Callers:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@XZ @ 0x1C0067FB0 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@XZ.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00680B0 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreHashesEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x14uLL) == 20;
}

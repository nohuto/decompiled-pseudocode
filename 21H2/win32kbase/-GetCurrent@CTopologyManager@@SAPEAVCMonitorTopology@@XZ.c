/*
 * XREFs of ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x1C00C5B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CMonitorTopology *CTopologyManager::GetCurrent(void)
{
  _InterlockedIncrement((volatile signed __int32 *)qword_1C02965B0);
  return (struct CMonitorTopology *)qword_1C02965B0;
}

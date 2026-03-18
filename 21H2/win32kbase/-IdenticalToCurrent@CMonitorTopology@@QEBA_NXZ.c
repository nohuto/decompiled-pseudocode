/*
 * XREFs of ?IdenticalToCurrent@CMonitorTopology@@QEBA_NXZ @ 0x1C0143030
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@XZ @ 0x1C0067FB0 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@XZ.c)
 */

bool __fastcall CMonitorTopology::IdenticalToCurrent(CMonitorTopology *this)
{
  return (unsigned int)CMonitorTopology::CompareToCurrent(this) == 0;
}

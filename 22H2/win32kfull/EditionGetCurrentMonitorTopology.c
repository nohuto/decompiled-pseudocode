/*
 * XREFs of EditionGetCurrentMonitorTopology @ 0x1C00BE690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CMonitorTopology *__fastcall EditionGetCurrentMonitorTopology(_QWORD *a1)
{
  CMonitorTopology *result; // rax

  _InterlockedIncrement((volatile signed __int32 *)qword_1C035E338);
  result = qword_1C035E338;
  *a1 = qword_1C035E338;
  return result;
}

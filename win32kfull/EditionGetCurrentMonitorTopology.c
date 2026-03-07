CMonitorTopology *__fastcall EditionGetCurrentMonitorTopology(_QWORD *a1)
{
  CMonitorTopology *result; // rax

  _InterlockedIncrement((volatile signed __int32 *)qword_1C0361320);
  result = qword_1C0361320;
  *a1 = qword_1C0361320;
  return result;
}

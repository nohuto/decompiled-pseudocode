/*
 * XREFs of GetPowerTransitionsState @ 0x1C01218A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPowerTransitionsState(_OWORD *a1)
{
  __int64 result; // rax

  result = *(_QWORD *)&gPowerTransitionsState[0];
  *a1 = gPowerTransitionsState[0];
  a1[1] = gPowerTransitionsState[1];
  a1[2] = gPowerTransitionsState[2];
  a1[3] = gPowerTransitionsState[3];
  return result;
}

/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x1405DF230
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}

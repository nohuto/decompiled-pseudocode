/*
 * XREFs of PopBatteryCheckTrigger @ 0x140870C00
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1409960BC (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x1409950E8 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140C3D140 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}

/*
 * XREFs of KiCustomAccessRoutine3 @ 0x140422A40
 * Callers:
 *     PopThermalZoneDpc @ 0x1403C7A40 (PopThermalZoneDpc.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x140422A20 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomAccessRoutine3(unsigned int *a1)
{
  return KiCustomRecurseRoutine3(((unsigned __int8)a1 & 3u) + 1, a1);
}

/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x1404094F0
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x1404091F0 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x140409510 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140409670 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}

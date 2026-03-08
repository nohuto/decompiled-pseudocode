/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x140422960
 * Callers:
 *     KiCustomAccessRoutine6 @ 0x140422980 (KiCustomAccessRoutine6.c)
 *     KiCustomRecurseRoutine5 @ 0x140422EA0 (KiCustomRecurseRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140422AE0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}

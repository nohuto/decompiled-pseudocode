/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x140422AE0
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x140422960 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x140422B00 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x140422BA0 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}

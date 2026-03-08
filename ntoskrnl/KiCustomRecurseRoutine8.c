/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x140422BA0
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x140422AE0 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x140422BC0 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x140422C60 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}

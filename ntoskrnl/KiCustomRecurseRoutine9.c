/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x140422C60
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x140422BA0 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x140422C80 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140422D20 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}

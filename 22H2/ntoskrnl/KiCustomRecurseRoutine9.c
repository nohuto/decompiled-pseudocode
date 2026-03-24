/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x1404097F0
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x140409730 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x140409810 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1404098B0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}

/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x140409370
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x140409390 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x1404098B0 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x140409430 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}

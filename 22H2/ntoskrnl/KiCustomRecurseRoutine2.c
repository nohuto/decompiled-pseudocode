/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x140409430
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x140409370 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x140409450 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x1404095B0 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}

/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x1404227E0
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x140422800 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x140422D20 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x1404228A0 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}

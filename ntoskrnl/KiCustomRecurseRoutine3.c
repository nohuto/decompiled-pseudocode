/*
 * XREFs of KiCustomRecurseRoutine3 @ 0x140422A20
 * Callers:
 *     KiCustomRecurseRoutine2 @ 0x1404228A0 (KiCustomRecurseRoutine2.c)
 *     KiCustomAccessRoutine3 @ 0x140422A40 (KiCustomAccessRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x140422DE0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomRecurseRoutine3(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine4();
  return *a2;
}

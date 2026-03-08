/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x140422DE0
 * Callers:
 *     KiCustomRecurseRoutine3 @ 0x140422A20 (KiCustomRecurseRoutine3.c)
 *     KiCustomAccessRoutine4 @ 0x140422E00 (KiCustomAccessRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x140422EA0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}

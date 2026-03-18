/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x14042B170
 * Callers:
 *     KiCustomRecurseRoutine3 @ 0x14042ADB0 (KiCustomRecurseRoutine3.c)
 *     KiCustomAccessRoutine4 @ 0x14042B190 (KiCustomAccessRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14042B230 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}

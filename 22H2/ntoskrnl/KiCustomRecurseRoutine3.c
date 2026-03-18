/*
 * XREFs of KiCustomRecurseRoutine3 @ 0x14042ADB0
 * Callers:
 *     KiCustomRecurseRoutine2 @ 0x14042AC30 (KiCustomRecurseRoutine2.c)
 *     KiCustomAccessRoutine3 @ 0x14042ADD0 (KiCustomAccessRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x14042B170 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomRecurseRoutine3(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine4();
  return *a2;
}

/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x14042AC30
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x14042AB70 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x14042AC50 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x14042ADB0 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}

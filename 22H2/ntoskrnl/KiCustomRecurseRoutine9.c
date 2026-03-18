/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x14042AFF0
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x14042AF30 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x14042B010 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14042B0B0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}

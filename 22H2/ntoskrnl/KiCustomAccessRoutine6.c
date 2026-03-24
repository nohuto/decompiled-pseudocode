/*
 * XREFs of KiCustomAccessRoutine6 @ 0x140409510
 * Callers:
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402F3240 (KiBalanceSetManagerDeferredRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1404094F0 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomAccessRoutine6(unsigned int *a1)
{
  return KiCustomRecurseRoutine6(((unsigned __int8)a1 & 3u) + 1, a1);
}

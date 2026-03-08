/*
 * XREFs of KiCustomAccessRoutine7 @ 0x140422B00
 * Callers:
 *     ExpTimeRefreshDpcRoutine @ 0x1403C7B20 (ExpTimeRefreshDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140422AE0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomAccessRoutine7(unsigned int *a1)
{
  return KiCustomRecurseRoutine7(((unsigned __int8)a1 & 3u) + 1, a1);
}

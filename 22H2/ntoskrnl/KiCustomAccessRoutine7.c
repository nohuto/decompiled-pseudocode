/*
 * XREFs of KiCustomAccessRoutine7 @ 0x140409690
 * Callers:
 *     ExpTimeRefreshDpcRoutine @ 0x1402F3120 (ExpTimeRefreshDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140409670 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomAccessRoutine7(unsigned int *a1)
{
  return KiCustomRecurseRoutine7(((unsigned __int8)a1 & 3u) + 1, a1);
}

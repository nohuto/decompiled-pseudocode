/*
 * XREFs of KiCustomAccessRoutine9 @ 0x140409810
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1402F3000 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1404097F0 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}

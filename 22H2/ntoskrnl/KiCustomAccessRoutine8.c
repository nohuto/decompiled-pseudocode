/*
 * XREFs of KiCustomAccessRoutine8 @ 0x140409750
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x1403944F0 (ExpTimeZoneDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x140409730 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomAccessRoutine8(unsigned int *a1)
{
  return KiCustomRecurseRoutine8(((unsigned __int8)a1 & 3u) + 1, a1);
}

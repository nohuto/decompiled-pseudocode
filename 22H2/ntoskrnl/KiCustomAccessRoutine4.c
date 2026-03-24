/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1404092D0
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1402F2BE0 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1404092B0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}

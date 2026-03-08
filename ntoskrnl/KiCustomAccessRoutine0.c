/*
 * XREFs of KiCustomAccessRoutine0 @ 0x140422D40
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1402FE790 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x14066A9B0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140422D20 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}

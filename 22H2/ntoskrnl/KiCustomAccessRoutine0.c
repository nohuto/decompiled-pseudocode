/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14042B0D0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140369870 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x14066D000 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14042B0B0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}

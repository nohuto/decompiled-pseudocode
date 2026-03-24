/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1404098D0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140327160 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BF600 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1404098B0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}

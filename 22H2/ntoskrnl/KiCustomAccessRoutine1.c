/*
 * XREFs of KiCustomAccessRoutine1 @ 0x14042AB90
 * Callers:
 *     IopTimerDispatch @ 0x140555D40 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x14042AB70 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}

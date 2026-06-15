/*
 * XREFs of sub_1801259DC @ 0x1801259DC
 * Callers:
 *     sub_1800D74D0 @ 0x1800D74D0 (sub_1800D74D0.c)
 *     sub_1800D8D90 @ 0x1800D8D90 (sub_1800D8D90.c)
 *     sub_1800D8E00 @ 0x1800D8E00 (sub_1800D8E00.c)
 *     sub_180126598 @ 0x180126598 (sub_180126598.c)
 * Callees:
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 */

__int64 __fastcall sub_1801259DC(_QWORD *a1)
{
  EnterCriticalSection(&stru_18019F7F0);
  sub_180047458(&qword_18019F7E8);
  *a1 = qword_18019F7E8;
  LeaveCriticalSection(&stru_18019F7F0);
  return 0LL;
}

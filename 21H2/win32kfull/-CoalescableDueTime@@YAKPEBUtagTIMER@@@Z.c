/*
 * XREFs of ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C00D0FD0
 * Callers:
 *     xxxTimersProc @ 0x1C01688E8 (xxxTimersProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalescableDueTime(const struct tagTIMER *a1)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  int v4; // r9d
  unsigned int v5; // r9d
  int v6; // eax
  unsigned int v8; // ecx

  if ( (*((_DWORD *)a1 + 12) & 0x200) == 0 )
    return *((unsigned int *)a1 + 13);
  v2 = *((_DWORD *)a1 + 11);
  if ( v2 > gCurrentTimerCoalescingTolerance )
    v3 = *((_DWORD *)a1 + 11);
  else
    v3 = gCurrentTimerCoalescingTolerance;
  v4 = *((_DWORD *)a1 + 13);
  if ( v4 + v3 >= 0x7FFFFFFF )
  {
    v5 = 0x7FFFFFFF;
  }
  else
  {
    if ( v2 <= gCurrentTimerCoalescingTolerance )
      v2 = gCurrentTimerCoalescingTolerance;
    v5 = v2 + v4;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 424LL) + 1040LL);
  if ( v6 )
  {
    v8 = v6 + v5;
    v5 = 0x7FFFFFFF;
    if ( v8 < 0x7FFFFFFF )
      return v8;
  }
  return v5;
}

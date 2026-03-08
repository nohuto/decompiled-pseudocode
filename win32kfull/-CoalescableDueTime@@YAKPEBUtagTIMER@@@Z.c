/*
 * XREFs of ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01C16A0
 * Callers:
 *     xxxTimersProc @ 0x1C007AFD0 (xxxTimersProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalescableDueTime(const struct tagTIMER *a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx
  unsigned int v3; // eax
  int v4; // r9d
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ecx

  if ( (*((_DWORD *)a1 + 12) & 0x200) == 0 )
    return *((unsigned int *)a1 + 13);
  v1 = *((_DWORD *)a1 + 11);
  v2 = gCurrentTimerCoalescingTolerance;
  v3 = gCurrentTimerCoalescingTolerance;
  v4 = *((_DWORD *)a1 + 13);
  if ( v1 > gCurrentTimerCoalescingTolerance )
    v3 = *((_DWORD *)a1 + 11);
  if ( v4 + v3 >= 0x7FFFFFFF )
  {
    v5 = 0x7FFFFFFF;
  }
  else
  {
    if ( v1 > gCurrentTimerCoalescingTolerance )
      v2 = *((_DWORD *)a1 + 11);
    v5 = v4 + v2;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 424LL) + 1024LL);
  if ( v6 )
  {
    v7 = v6 + v5;
    v5 = 0x7FFFFFFF;
    if ( v7 < 0x7FFFFFFF )
      return v7;
  }
  return v5;
}

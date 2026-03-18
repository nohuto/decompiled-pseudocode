/*
 * XREFs of ?SetDelayableTimer@@YAXKK@Z @ 0x1C01C0584
 * Callers:
 *     xxxTimersProc_Old @ 0x1C013AF08 (xxxTimersProc_Old.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDelayableTimer(int a1, int a2)
{
  __int64 v3; // rdx

  v3 = -10000LL * a1;
  if ( a1 == a2 )
    KeSetTimer(gptmrMaster, (LARGE_INTEGER)v3, 0LL);
  else
    KeSetCoalescableTimer(gptmrMaster, (LARGE_INTEGER)v3, 0, a2 - a1, 0LL);
}

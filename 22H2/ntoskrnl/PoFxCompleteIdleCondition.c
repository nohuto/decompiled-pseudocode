/*
 * XREFs of PoFxCompleteIdleCondition @ 0x14031D640
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x1403CF300 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x1404D1970 (HalpInterruptPowerComponentIdleCallback.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140260514 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140260720 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x14056932C (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  int v5; // ebx

  result = BugCheckParameter2[104];
  v4 = (unsigned int)BugCheckParameter3;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(result + 8LL * (unsigned int)BugCheckParameter3)
                                                       + 136LL));
  if ( !v5 )
  {
    PopFxAddLogEntry(BugCheckParameter2[6], BugCheckParameter3, 13, 1LL);
    result = PopFxIdleWorkerTail(BugCheckParameter2, v4, 0LL);
  }
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, v4, 2uLL);
  return result;
}

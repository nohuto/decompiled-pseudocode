/*
 * XREFs of PoFxCompleteIdleCondition @ 0x1402EB270
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x1403B0F90 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x140518420 (HalpInterruptPowerComponentIdleCallback.c)
 *     DifPoFxCompleteIdleConditionWrapper @ 0x1405E6F40 (DifPoFxCompleteIdleConditionWrapper.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140306748 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2
                                                                                                 + 832)
                                                                                     + 8LL
                                                                                     * (unsigned int)BugCheckParameter3)
                                                                         + 136LL));
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      PopFxBugCheck(0x613uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), (unsigned int)BugCheckParameter3, 13LL, 1LL);
    return PopFxIdleWorkerTail(BugCheckParameter2);
  }
  return result;
}

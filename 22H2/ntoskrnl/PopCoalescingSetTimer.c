/*
 * XREFs of PopCoalescingSetTimer @ 0x14056EBA4
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14056EB04 (PopCoalescingSetActiveState.c)
 *     PopCoalescingNotify @ 0x1408E6900 (PopCoalescingNotify.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     PopPrintEx @ 0x140364318 (PopPrintEx.c)
 */

__int64 PopCoalescingSetTimer()
{
  __int64 result; // rax

  if ( (PopCoalescingState & 1) != 0 )
  {
    PopPrintEx(3u, (__int64)"PopCoalescing: Coalescing timer activated\n");
    result = KiSetTimerEx(
               (__int64)&PopCoalescingTimer,
               -10000000LL * PopCoalescingTimerInterval,
               0,
               0,
               (__int64)&PopCoalescingTimerDpc);
    _interlockedbittestandset((volatile signed __int32 *)&PopCoalescingTimer, 9u);
  }
  return result;
}

/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x1405876D8
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x1402B90C0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1402BA43C (PopFxNotifyPreDIrpCompletion.c)
 *     PoFxCompleteDirectedPowerDown @ 0x140585A10 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1405871FC (PopFxCompleteDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDerefAndCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  LONG result; // eax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 824), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 1160));
  if ( !result )
    return PopFxCompleteDirectedPowerTransition(BugCheckParameter3, a2);
  if ( result < 0 )
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}

/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x140589C08
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14028CF30 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x14028DE9C (PopFxNotifyPreDIrpCompletion.c)
 *     PoFxCompleteDirectedPowerDown @ 0x140587F40 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14058972C (PopFxCompleteDirectedPowerTransition.c)
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

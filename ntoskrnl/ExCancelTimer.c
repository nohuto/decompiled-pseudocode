/*
 * XREFs of ExCancelTimer @ 0x140204330
 * Callers:
 *     WdtpCancelTimer @ 0x14068AA80 (WdtpCancelTimer.c)
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409E9D28 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x140204364 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}

/*
 * XREFs of ExCancelTimer @ 0x14031DCA0
 * Callers:
 *     WdtpCancelTimer @ 0x140785BDC (WdtpCancelTimer.c)
 *     EtwpStopLoggerInstance @ 0x1407F69E4 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECBC8 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x14031DCD4 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}

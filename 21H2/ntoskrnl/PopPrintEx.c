/*
 * XREFs of PopPrintEx @ 0x140369B48
 * Callers:
 *     PopCoalescingSetTimer @ 0x1405CFBF0 (PopCoalescingSetTimer.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopSessionConnectionChange @ 0x1407ED88C (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x1407EDCAC (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407EF430 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407EF514 (PopEvaluateGlobalUserStatus.c)
 *     PoFxRegisterDevice @ 0x140823470 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140850E08 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x14098F180 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1409927E0 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x140992810 (PopDiagTraceIoCoalescingOn.c)
 *     PopDeferDoze @ 0x1409974E8 (PopDeferDoze.c)
 *     PopSessionWinlogonNotification @ 0x14099CBC8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140369C50 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}

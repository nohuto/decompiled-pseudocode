/*
 * XREFs of PopPrintEx @ 0x1402BDCD4
 * Callers:
 *     PopCoalescingSetTimer @ 0x14058B4E0 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x14067F97C (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopSetSessionUserStatus @ 0x14073C8E4 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x14073CA7C (PopEvaluateGlobalUserStatus.c)
 *     PopSessionConnectionChange @ 0x14079A150 (PopSessionConnectionChange.c)
 *     PopSetSessionDisplayStatus @ 0x14079A2F0 (PopSetSessionDisplayStatus.c)
 *     PoFxRegisterDevice @ 0x140836D70 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140846B78 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x140983FE0 (PopCoalescingNotify.c)
 *     PopDeferDoze @ 0x140988614 (PopDeferDoze.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098CC08 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x14098CC38 (PopDiagTraceIoCoalescingOn.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}

/*
 * XREFs of PopPrintEx @ 0x14028411C
 * Callers:
 *     PopCoalescingSetTimer @ 0x14056EC64 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopUpdateTimeouts @ 0x14067D7CC (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x14067D980 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x14067DA64 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionInputChange @ 0x14067DE74 (PopSessionInputChange.c)
 *     PopSetSessionDisplayStatus @ 0x1407819B8 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14078D92C (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x1407B5540 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407C0714 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408E68B0 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408EA92C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408EA95C (PopDiagTraceIoCoalescingOn.c)
 *     PopDeferDoze @ 0x1408F0448 (PopDeferDoze.c)
 *     PopCheckConsoleTimeouts @ 0x1408F4FC4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402841E0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}

/*
 * XREFs of PopPrintEx @ 0x140364318
 * Callers:
 *     PopCoalescingSetTimer @ 0x14056EBA4 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x140725094 (PopSessionInputChange.c)
 *     PopUpdateTimeouts @ 0x140725430 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1407255E4 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407256C8 (PopEvaluateGlobalUserStatus.c)
 *     PopSetSessionDisplayStatus @ 0x1407818B8 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14078D82C (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x1407B4F30 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407C0ED4 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408E6900 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408EA97C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408EA9AC (PopDiagTraceIoCoalescingOn.c)
 *     PopDeferDoze @ 0x1408F0498 (PopDeferDoze.c)
 *     PopCheckConsoleTimeouts @ 0x1408F5014 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403643E0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}

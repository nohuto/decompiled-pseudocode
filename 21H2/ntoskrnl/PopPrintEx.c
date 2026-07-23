/*
 * XREFs of PopPrintEx @ 0x140272730
 * Callers:
 *     PopCoalescingSetTimer @ 0x14056EEA4 (PopCoalescingSetTimer.c)
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopUpdateTimeouts @ 0x1406715BC (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140671770 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x140671854 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionInputChange @ 0x140671C64 (PopSessionInputChange.c)
 *     PopSetSessionDisplayStatus @ 0x140781B78 (PopSetSessionDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14078DAEC (PopSessionConnectionChange.c)
 *     PoFxRegisterDevice @ 0x1407B4C90 (PoFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407C0C34 (PopCheckThermalPolicy.c)
 *     PopCoalescingNotify @ 0x1408E6A10 (PopCoalescingNotify.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408EAA8C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408EAABC (PopDiagTraceIoCoalescingOn.c)
 *     PopDeferDoze @ 0x1408F05A8 (PopDeferDoze.c)
 *     PopCheckConsoleTimeouts @ 0x1408F5124 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 PopPrintEx(ULONG Level, __int64 a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x92u, Level, va, 1);
}

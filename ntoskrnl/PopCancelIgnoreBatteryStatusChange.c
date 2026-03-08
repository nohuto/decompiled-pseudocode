/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x140818B6C
 * Callers:
 *     PoEnableCriticalShutdown @ 0x140818B24 (PoEnableCriticalShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140C3CC48);
  _InterlockedExchange(&dword_140C3CBC0, 1);
  return KiSetTimerEx((__int64)&stru_140C3CBC8, -300000000LL, 0, 0, (__int64)&dword_140C3CC08);
}

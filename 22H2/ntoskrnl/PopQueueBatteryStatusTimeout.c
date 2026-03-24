/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14078EB1C
 * Callers:
 *     PoEnableCriticalShutdown @ 0x14079A600 (PoEnableCriticalShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140C23D28);
  _InterlockedExchange(&dword_140C23CA0, 1);
  return KiSetTimerEx((__int64)&stru_140C23CA8, -300000000LL, 0, 0, (__int64)&dword_140C23CE8);
}

/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14078EC1C
 * Callers:
 *     PoEnableCriticalShutdown @ 0x14079039C (PoEnableCriticalShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140C23728);
  _InterlockedExchange(&dword_140C236A0, 1);
  return KiSetTimerEx((__int64)&stru_140C236A8, -300000000LL, 0, 0, (__int64)&dword_140C236E8);
}

/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x14078EDDC
 * Callers:
 *     PoEnableCriticalShutdown @ 0x14079194C (PoEnableCriticalShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140C23D48);
  _InterlockedExchange(&dword_140C23CC0, 1);
  return KiSetTimerEx((__int64)&stru_140C23CC8, -300000000LL, 0, 0, (__int64)&dword_140C23D08);
}

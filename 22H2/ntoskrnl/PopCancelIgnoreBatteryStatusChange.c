/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x1408647DC
 * Callers:
 *     PoEnableCriticalShutdown @ 0x140864794 (PoEnableCriticalShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140C3D1E8);
  _InterlockedExchange(&dword_140C3D160, 1);
  return KiSetTimerEx((__int64)&stru_140C3D168, -300000000LL, 0, 0, (__int64)&dword_140C3D1A8);
}

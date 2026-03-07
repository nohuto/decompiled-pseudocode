__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140C3CC48);
  _InterlockedExchange(&dword_140C3CBC0, 1);
  return KiSetTimerEx((__int64)&stru_140C3CBC8, -300000000LL, 0, 0, (__int64)&dword_140C3CC08);
}

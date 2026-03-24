/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14038D670
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x14025FAA0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C23CA0, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C23CA8);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C23D28, Executive, 0, 0, 0LL);
  }
  byte_140C23D40 = 1;
  return v0;
}

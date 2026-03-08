/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14059681C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C3CBC0, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C3CBC8);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C3CC48, Executive, 0, 0, 0LL);
  }
  byte_140C3CC80 = 1;
  return v0;
}

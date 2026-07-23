/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14038DEC0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C23CC0, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C23CC8);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C23D48, Executive, 0, 0, 0LL);
  }
  byte_140C23D60 = 1;
  return v0;
}

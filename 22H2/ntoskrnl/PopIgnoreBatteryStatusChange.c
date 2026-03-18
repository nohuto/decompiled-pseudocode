/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x140598D3C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C3D160, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C3D168);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C3D1E8, Executive, 0, 0, 0LL);
  }
  byte_140C3D220 = 1;
  return v0;
}

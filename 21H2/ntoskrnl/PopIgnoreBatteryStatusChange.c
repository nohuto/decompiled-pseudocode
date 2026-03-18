/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x140399318
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C22A20, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C22A28);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C22AA8, Executive, 0, 0, 0LL);
  }
  byte_140C22AC0 = 1;
  return v0;
}

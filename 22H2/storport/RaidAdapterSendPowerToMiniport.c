/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C003ED2C
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0014A10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0014A80 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013D84 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0019480 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 320);
  return v2;
}

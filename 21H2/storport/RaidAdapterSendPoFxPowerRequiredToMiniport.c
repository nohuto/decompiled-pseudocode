/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003ECCC
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C00403C0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C0040740 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0040EB0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0041170 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013DF4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00194F0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 320);
  return v2;
}

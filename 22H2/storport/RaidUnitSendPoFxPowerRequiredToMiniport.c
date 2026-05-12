/*
 * XREFs of RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003FF80
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x1C0041350 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0041810 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0042100 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0042490 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00063A0 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001903C (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 5) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 320LL);
  return v2;
}

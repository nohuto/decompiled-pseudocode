/*
 * XREFs of RaidUnitSendPoFxIdleStateToMiniport @ 0x1C003FE38
 * Callers:
 *     StorPortUnitIdleState @ 0x1C0041B50 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00063B0 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00190AC (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 7) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 320LL);
  return v2;
}

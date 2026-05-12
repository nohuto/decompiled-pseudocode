/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003EC48
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C0040AE0 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013DF4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00194F0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 320);
  return v2;
}

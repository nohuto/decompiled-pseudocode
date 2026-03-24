/*
 * XREFs of VslInitSystem @ 0x140A72D70
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpIumPhase4Initialize @ 0x1403CEDD8 (VslpIumPhase4Initialize.c)
 *     VslpIumPhase0Initialize @ 0x140A8F5C8 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall VslInitSystem(int a1, __int64 a2)
{
  if ( a1 )
    return VslpIumPhase4Initialize();
  else
    return VslpIumPhase0Initialize(a2);
}

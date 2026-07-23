/*
 * XREFs of VslInitSystem @ 0x140A73D70
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpIumPhase4Initialize @ 0x1403CEF48 (VslpIumPhase4Initialize.c)
 *     VslpIumPhase0Initialize @ 0x140A905C8 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall VslInitSystem(int a1, __int64 a2)
{
  if ( a1 )
    return VslpIumPhase4Initialize();
  else
    return VslpIumPhase0Initialize(a2);
}

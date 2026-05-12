/*
 * XREFs of RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0037FE8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D80 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponentFromMiniport(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // bl

  v4 = RaidUnitPoFxActivateComponent(a1, a2, a3, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return v4 == 0 ? 0xC100000C : 0;
}

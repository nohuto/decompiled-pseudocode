/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0032FE4
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006778 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019D9C (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A660 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0005CA4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  bool v3; // bl

  v3 = RaidUnitPoFxIdleComponent(a1, a2, 0, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return !v3 ? 0xC100000C : 0;
}

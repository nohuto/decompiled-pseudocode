/*
 * XREFs of RaUnitStoragePowerActive @ 0x1C0002218
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D74 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitStoragePowerActive(__int64 a1, IRP *a2)
{
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxActivateComponent(a1, 0LL, 2LL);
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return RaidCompleteRequestEx(a2);
}

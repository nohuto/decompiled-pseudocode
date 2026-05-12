/*
 * XREFs of RaidUnitPoFxIdleComponent @ 0x1C0005CB0
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C000218C (RaUnitStoragePowerIdle.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005C08 (RaUnitScsiMiniportIoctl.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0013E38 (StorPortUnitPoFxD0Completion.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019E0C (RaidPnPPassToMiniPort.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001AB28 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0033004 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C003F950 (RaidUnitEndMaintenanceTime.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1C00419E0 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0042624 (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitEndDeviceBusy @ 0x1C004A948 (RaidUnitEndDeviceBusy.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C007376C (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D640 (RaidAdapterPoFxIdleComponent.c)
 */

bool __fastcall RaidUnitPoFxIdleComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v5; // r15
  bool v6; // di
  bool v10; // bl
  int v11; // edi
  char v13; // cl

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  if ( !a4 || (v10 = (*a4 & 2) != 0, (*a4 & 1) != 0) )
  {
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    {
      PoFxIdleComponent(**(_QWORD **)(a1 + 1744), a2, a3);
      v5 = 1;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
      v6 = (v11 & 2) == 0;
    }
  }
  if ( v10 )
  {
    if ( *(_QWORD *)(v4 + 5088) )
    {
      v13 = RaidAdapterPoFxIdleComponent(v4, 0LL, a3);
      if ( !v5 )
        return v13;
    }
  }
  return v6;
}

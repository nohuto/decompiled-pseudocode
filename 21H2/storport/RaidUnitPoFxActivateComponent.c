/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0005D80
 * Callers:
 *     RaUnitStoragePowerActive @ 0x1C0002218 (RaUnitStoragePowerActive.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005C08 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019E0C (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0036930 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0037FE8 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C003FB34 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0042000 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C007376C (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C00752D4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D5DC (RaidAdapterPoFxActivateComponent.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // r14d
  char v9; // si
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 5088) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL, a3);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( *(char *)(v4 + 108) < 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
    }
    v10 = *(_QWORD *)(a1 + 1744);
    if ( (*(_DWORD *)(v10 + 140) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 136));
      v10 = *(_QWORD *)(a1 + 1744);
    }
    if ( *(_DWORD *)(a1 + 916) && (v6 & 1) != 0 )
      v6 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v10, a2, v6);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return v9;
}

/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C001F220
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00107D0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0011198 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00151E0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     EnableDisableCMOSRegions @ 0x1C0016500 (EnableDisableCMOSRegions.c)
 *     GetPciAddressWorker @ 0x1C0018A70 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019FB0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIDockIrpQueryPower @ 0x1C004A630 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C004D4F0 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C004F490 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0051CA0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051E50 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055790 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005ECB0 (ACPIRootIrpQueryPower.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009C9F4 (ACPIInternalSetProximityDomain.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009E3F4 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E538 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009E770 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009EB30 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB810 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v6 != 0LL;
}

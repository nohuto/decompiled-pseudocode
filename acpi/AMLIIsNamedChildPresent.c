/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C00487BC
 * Callers:
 *     ACPIDockIrpQueryPower @ 0x1C0009440 (ACPIDockIrpQueryPower.c)
 *     ACPIBuildPdo @ 0x1C000DC84 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F000 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBusIrpQueryPower @ 0x1C0016B50 (ACPIBusIrpQueryPower.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0017830 (ACPIDispatchIrpDepPdoQueryID.c)
 *     CmosGetOpRegionType @ 0x1C0019D58 (CmosGetOpRegionType.c)
 *     EnableDisableCMOSRegions @ 0x1C0019E94 (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0021870 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0021A10 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0028770 (ACPIFilterIrpQueryPower.c)
 *     GetPciAddressWorker @ 0x1C0034E00 (GetPciAddressWorker.c)
 *     ACPIRootIrpQueryPower @ 0x1C003D0E0 (ACPIRootIrpQueryPower.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C007AD60 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C007DF10 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C0082888 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIInternalSetProximityDomain @ 0x1C00883E8 (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(_QWORD *a1, int a2)
{
  KIRQL v4; // al
  __int64 **v5; // r8
  __int64 *i; // rbx

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = (__int64 **)(*a1 + 24LL);
  for ( i = *v5; v5 != (__int64 **)i; i = (__int64 *)*i )
  {
    if ( a2 == *((_DWORD *)i + 10) )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return i != 0LL;
}

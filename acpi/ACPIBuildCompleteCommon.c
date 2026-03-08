/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C000BC30
 * Callers:
 *     ACPIBuildCompleteGeneric @ 0x1C000BC80 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C000CD20 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C000CE10 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C000E320 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C000E470 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000E740 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F000 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F290 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F780 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C000FC90 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0010470 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0010FD0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011120 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0011300 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0012BD0 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C0013794 (ACPIBuildScheduleDpc.c)
 */

void __fastcall ACPIBuildCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  ACPIBuildScheduleDpc();
  KeReleaseSpinLock(&AcpiBuildQueueLock, v2);
}

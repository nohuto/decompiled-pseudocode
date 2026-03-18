/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C00482E4
 * Callers:
 *     ACPIAmliEvaluateOsc @ 0x1C007C7E8 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C007C978 (ACPIAmliEvaluatePcch.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0081C18 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0082BE0 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C00835D4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C0083678 (ACPIEcGetUid.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0084970 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIFanSetTripPoints @ 0x1C0085088 (ACPIFanSetTripPoints.c)
 *     ACPIGetUniqueId @ 0x1C00891A0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C0089270 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C0089350 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C0089428 (ACPIQuerySpareDsm.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0089CCC (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0089EC4 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C008A9C0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C008ACDC (ACPIPepPlatformEntryExitNotify.c)
 *     ACPIProcessorDeviceControl @ 0x1C008C580 (ACPIProcessorDeviceControl.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FD4 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIThermalBuildConstraints @ 0x1C0095648 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1C0095DE0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C00962F0 (ACPIThermalWorker.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098144 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00984C0 (ACPIProcessPhysicalDeviceLocationPackage.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C004B52C (FreeDataBuffs.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C006F938 = 0;
  pszDest = 0;
  return FreeDataBuffs(a1, 1LL);
}

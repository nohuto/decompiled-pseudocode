/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C00482C4
 * Callers:
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C007C968 (ACPIAmliEvaluatePcch.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0081C08 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0082BD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C00835C4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C0083668 (ACPIEcGetUid.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0084960 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIFanSetTripPoints @ 0x1C0085078 (ACPIFanSetTripPoints.c)
 *     ACPIGetUniqueId @ 0x1C0089190 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C0089260 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C0089340 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C0089418 (ACPIQuerySpareDsm.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0089CBC (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0089EB4 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C008A9B0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C008ACCC (ACPIPepPlatformEntryExitNotify.c)
 *     ACPIProcessorDeviceControl @ 0x1C008C570 (ACPIProcessorDeviceControl.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FC4 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIThermalBuildConstraints @ 0x1C0095638 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1C0095DD0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00984B0 (ACPIProcessPhysicalDeviceLocationPackage.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C006F938 = 0;
  pszDest = 0;
  return FreeDataBuffs(a1, 1LL);
}

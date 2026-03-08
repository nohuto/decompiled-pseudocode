/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C00483B8
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIDockIsDockDevice @ 0x1C0009A34 (ACPIDockIsDockDevice.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000C5A4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C000CAD0 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00140F0 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00143C8 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C0014914 (AreDependenciesSatisfied.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0022140 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0022428 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C00251B0 (ACPIEcInitOpRegionHandler.c)
 *     ACPIGpeBuildEventMasks @ 0x1C002BE44 (ACPIGpeBuildEventMasks.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002FE58 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0030194 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00304D4 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0030814 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0030F58 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003FAD8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C003FC80 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BB0 (ACPIThermalGetSensorDevice.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C0083FF0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00842D4 (ExternalRequestBiosNameDeviceAssociation.c)
 *     RegisterOperationRegionHandler @ 0x1C008BB24 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BDF0 (UnRegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7BFC (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484D0 (AMLIGetNameSpaceObjectNoLock.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rdi
  KIRQL v10; // bl
  unsigned int v11; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = AMLIGetNameSpaceObjectNoLock(Pool2, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}

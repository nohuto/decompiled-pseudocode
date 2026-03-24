/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C000B01C
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B5F4 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DE20 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C000E3E4 (ACPIThermalActivateConstraint.c)
 *     LinkNodeCrackPrt @ 0x1C000EC74 (LinkNodeCrackPrt.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00118D8 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011B70 (ACPIThermalGetSensorDevice.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C00147A8 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015E24 (ACPIBuildDevicePowerNodes.c)
 *     ACPIGpeBuildEventMasks @ 0x1C001718C (ACPIGpeBuildEventMasks.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0026060 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0026A58 (ACPIEcInitOpRegionHandler.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C002971C (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029BB4 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C6AC (ACPIIoctlGetDeviceSpecificData.c)
 *     AreDependenciesSatisfied @ 0x1C002E8F4 (AreDependenciesSatisfied.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002EB38 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004B128 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004BB44 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C584 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0057978 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057CE8 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1CB0 (RegisterOperationRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AF420 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AF6D4 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1C74 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDF8C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AF30 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 *a2, unsigned __int64 *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v10; // bl
  unsigned int v11; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v8);
  PoolWithTag[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = AMLIGetNameSpaceObjectNoLock(PoolWithTag, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}

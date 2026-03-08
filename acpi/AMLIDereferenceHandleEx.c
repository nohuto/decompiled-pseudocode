/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C0047B40
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00028E0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000C5A4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C000CAD0 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000E740 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8D0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EF00 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000F130 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000F4D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000F6A0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F930 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0010890 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C00109B0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0010B20 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C0010C40 (ACPIBuildProcessGenericComplete.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0010EE0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011120 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011540 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011DE0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012930 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0012E40 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIReserveDependencies @ 0x1C00145EC (ACPIReserveDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C0014914 (AreDependenciesSatisfied.c)
 *     CmosConfigSpaceHandler @ 0x1C0019B90 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C0019CC4 (CmosConfigSpaceHandlerWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C0019E94 (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001F100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001F780 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C001FC60 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0020880 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0020B10 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00212B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0021450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0022140 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0022428 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIEcRemoveDevice @ 0x1C00253C0 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C0025AC4 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C002759C (ACPIFanLoop.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B10 (ACPIFilterIrpSetPower.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIGetProcessorStatus @ 0x1C002B0A4 (ACPIGetProcessorStatus.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C002CD08 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C002D140 (ACPIInitDosDeviceName.c)
 *     ACPIInitRemovePowerNodes @ 0x1C002D6CC (ACPIInitRemovePowerNodes.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002FE58 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0030194 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00304D4 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0030814 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0030F58 (ACPIIoctlGetDeviceSpecificData.c)
 *     OSNotifyCreateDevice @ 0x1C0032738 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C003285C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ABC (OSNotifyCreateProcessor.c)
 *     OSNotifyDeviceCheck @ 0x1C0032C80 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C0032E9C (OSNotifyDeviceEnum.c)
 *     GetOpRegionScopeWorker @ 0x1C0034C20 (GetOpRegionScopeWorker.c)
 *     GetPciAddressWorker @ 0x1C0034E00 (GetPciAddressWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0035350 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0035980 (IsPciDeviceWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0036080 (PciConfigSpaceHandlerWorker.c)
 *     AcpiHandleInternalNotify @ 0x1C0037468 (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0037710 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0037A5C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0037EA0 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0039900 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CC0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C003D0E0 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C003F540 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003FAD8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C003FC80 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BB0 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0041F9C (ACPIThermalStopZoneWorker.c)
 *     AMLIIterateParentNext @ 0x1C00488A4 (AMLIIterateParentNext.c)
 *     AMLIIterateSiblingsNext @ 0x1C00488D8 (AMLIIterateSiblingsNext.c)
 *     Simulator_RemoveNode @ 0x1C00498D0 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C004B81C (FreeOwnedObjects.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C005D940 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C005DB40 (LinkNodepRunSrsWorker.c)
 *     ACPIDockIrpEject @ 0x1C007AAC0 (ACPIDockIrpEject.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C007C968 (ACPIAmliEvaluatePcch.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB64 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0082BD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C00835C4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C0083668 (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C0083FF0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00842D4 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C008879C (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C0089190 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C0089260 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C0089340 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C0089418 (ACPIQuerySpareDsm.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 *     RegisterOperationRegionHandler @ 0x1C008BB24 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BDF0 (UnRegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C00995D0 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0099720 (LinkNodepAddLinkNodeWorker.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7BFC (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  dword_1C006F938 = 0;
  result = (unsigned int)gdwfAMLI;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v4 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v4 + 120) )
      {
        return DereferenceObjectEx(v4, a2);
      }
      else
      {
        DereferenceObjectEx(v4, a2);
        return HeapFree(a1);
      }
    }
  }
  return result;
}

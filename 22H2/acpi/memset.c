/*
 * XREFs of memset @ 0x1C0032480
 * Callers:
 *     RtlStringCbPrintfExW @ 0x1C0002788 (RtlStringCbPrintfExW.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006720 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C00097A0 (GetObjectPathNoLock.c)
 *     Buffer @ 0x1C000B340 (Buffer.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B5F4 (ACPIIoctlEvalPreProcessingV1.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C000C2C8 (AcpiIoctlArgumentToPackageObjV1.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C70C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C000CB58 (ACPIWakeInitializePmeRouting.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C000E79C (ACPIThermalQueryCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C000EC74 (LinkNodeCrackPrt.c)
 *     InitMutex @ 0x1C0010410 (InitMutex.c)
 *     SetLogSize @ 0x1C00104C8 (SetLogSize.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013E40 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     FindNSObj @ 0x1C0014150 (FindNSObj.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015900 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015E24 (ACPIBuildDevicePowerNodes.c)
 *     EnableDisableCMOSRegions @ 0x1C0016500 (EnableDisableCMOSRegions.c)
 *     IsPciBusAsync @ 0x1C0017610 (IsPciBusAsync.c)
 *     IsPciDevice @ 0x1C0017E30 (IsPciDevice.c)
 *     PciConfigInternal @ 0x1C001815C (PciConfigInternal.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00184A0 (PciConfigSpaceHandlerWorker.c)
 *     ACPIDetectPdoDevices @ 0x1C0019338 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A800 (ACPIDetectDockDevices.c)
 *     ACPIBuildDeviceRequest @ 0x1C001B46C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001BA9C (ACPIBuildDeviceExtension.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C75C (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C9E4 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F520 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F800 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     Package @ 0x1C0021320 (Package.c)
 *     PushCall @ 0x1C00219CC (PushCall.c)
 *     Field @ 0x1C0021B10 (Field.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     ParseOpcode @ 0x1C0022530 (ParseOpcode.c)
 *     CopyObjBuffer @ 0x1C0022C68 (CopyObjBuffer.c)
 *     Processor @ 0x1C0023330 (Processor.c)
 *     NewObjOwner @ 0x1C0023628 (NewObjOwner.c)
 *     IndexField @ 0x1C00237F0 (IndexField.c)
 *     PowerRes @ 0x1C0023BB0 (PowerRes.c)
 *     NewContext @ 0x1C0023FE8 (NewContext.c)
 *     InitContext @ 0x1C00240E4 (InitContext.c)
 *     NewGlobalHeap @ 0x1C0024270 (NewGlobalHeap.c)
 *     ReadField @ 0x1C0024420 (ReadField.c)
 *     ACPIDispatchAddDevice @ 0x1C0025260 (ACPIDispatchAddDevice.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0025AF4 (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C0025C40 (ACPIGpeClearEventMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0026398 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGetProcessorIDWide @ 0x1C00276E0 (ACPIGetProcessorIDWide.c)
 *     RtlStringCchPrintfExA @ 0x1C0027B70 (RtlStringCchPrintfExA.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027D58 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00281E0 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0028368 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002866C (ACPIGetConvertToInstanceIDWide.c)
 *     Method @ 0x1C0028A20 (Method.c)
 *     RtlStringCchPrintfExW @ 0x1C0028C9C (RtlStringCchPrintfExW.c)
 *     PushTerm @ 0x1C0028F14 (PushTerm.c)
 *     CreateXField @ 0x1C00291A8 (CreateXField.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029BB4 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     OpRegion @ 0x1C0029EA0 (OpRegion.c)
 *     NewNameSpaceObject @ 0x1C002BD38 (NewNameSpaceObject.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C8F0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002D3A0 (ACPIInternalQueryExtendedAddress.c)
 *     IrqLibpGetVectorInput @ 0x1C002DD90 (IrqLibpGetVectorInput.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002DF88 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002E058 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002E158 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     GetPciAddress @ 0x1C002EC0C (GetPciAddress.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F564 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F9E0 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002FAC4 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0030590 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWmiRegisterGuids @ 0x1C0030B2C (ACPIWmiRegisterGuids.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x1C0030E70 (AcpiHandleDeviceFirmwareLock.c)
 *     AcpiDeviceResetInterface @ 0x1C0031180 (AcpiDeviceResetInterface.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004B068 (RtlStringExHandleOtherFlagsW.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004D120 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004EE50 (ACPICMLidPowerStateCallBack.c)
 *     CmosConfigSpaceHandler @ 0x1C004F2A0 (CmosConfigSpaceHandler.c)
 *     ACPIDetectEjectDevices @ 0x1C004F600 (ACPIDetectEjectDevices.c)
 *     PerformHandlerInvocation @ 0x1C004FF48 (PerformHandlerInvocation.c)
 *     ACPIEcOpRegionHandler @ 0x1C0053540 (ACPIEcOpRegionHandler.c)
 *     ACPIEcCreateEcData @ 0x1C0053848 (ACPIEcCreateEcData.c)
 *     ACPIEcLogError @ 0x1C00542D8 (ACPIEcLogError.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054C98 (ACPIWriteEventLogEntry.c)
 *     ACPIGetConvertToStringWide @ 0x1C0055C48 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0055D3C (ACPIGetConvertToStringWideWithPrepend.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C0055EC0 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0055F80 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0056110 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C005688C (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056CB4 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0057978 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057CE8 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C005804C (ACPIIoctlGetDeviceInformation.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058444 (AcpiIoctlArgumentToPackageObjV2.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x1C005A880 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C005AE58 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005B9C0 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C880 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005CA50 (InternalRawAccessOpRegionHandler.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E6AC (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C006101C (ACPIVectorGetEntry.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C00611B8 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C00619AC (ACPIWakeDisableAsync.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0062C40 (AcpiRecordBlackboxInformationWorker.c)
 *     Simulator_AllocAndInitTestData @ 0x1C006381C (Simulator_AllocAndInitTestData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0064348 (AMLICreateNativeNamespaceObject.c)
 *     FreeObjOwner @ 0x1C006517C (FreeObjOwner.c)
 *     ParseDLMObjectInternal @ 0x1C00658A8 (ParseDLMObjectInternal.c)
 *     Debugger @ 0x1C0066C38 (Debugger.c)
 *     BankField @ 0x1C0066FD0 (BankField.c)
 *     InitEvent @ 0x1C0067370 (InitEvent.c)
 *     LinkNodepRunSrsAsync @ 0x1C006C1D0 (LinkNodepRunSrsAsync.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F720 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008FCF0 (ACPIRegReadAMLRegistryEntry.c)
 *     PcisuppInitializePciRouting @ 0x1C00907B0 (PcisuppInitializePciRouting.c)
 *     ACPIThermalBuildConstraints @ 0x1C0091BD0 (ACPIThermalBuildConstraints.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0092350 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C00924E4 (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0092578 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C0092810 (IrqArbAddAllocation.c)
 *     PcisuppIsPciDevice @ 0x1C0093BD0 (PcisuppIsPciDevice.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C0094A38 (IrqPolicyGetDevicePolicy.c)
 *     ArbBootAllocation @ 0x1C00954B0 (ArbBootAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C0095670 (ArbpBuildAllocationStack.c)
 *     MsiGetTargetInfo @ 0x1C0095864 (MsiGetTargetInfo.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0096300 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009670C (ACPIBusIrpQueryCompatibleId.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0097104 (AcpiIrqLibSetupSciInterrupt.c)
 *     IcAddSecondaryIcInstance @ 0x1C0097938 (IcAddSecondaryIcInstance.c)
 *     ProcessorAddInstance @ 0x1C0097B80 (ProcessorAddInstance.c)
 *     ACPIPccLegacyInitialize @ 0x1C00982D0 (ACPIPccLegacyInitialize.c)
 *     AcpiQueryPciBusInterface @ 0x1C0098B00 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0098CEC (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIBusIommuBusInterface @ 0x1C00995C4 (ACPIBusIommuBusInterface.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0099B3C (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099F08 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A3A0 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C009A540 (ACPIThermalStartDevice.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C009BAE0 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C009BEAC (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C009BF88 (ACPIInternalGrowBuffer.c)
 *     PnpiGrowResourceList @ 0x1C009CBF8 (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C009CDEC (PnpiGrowResourceDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DDA4 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E538 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009F074 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessHardwareInformation @ 0x1C009F214 (ACPIProcessHardwareInformation.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C009F5D0 (AcpiSetupNativeMethodInterface.c)
 *     QueryExternalTranslatorInterface @ 0x1C009F8E4 (QueryExternalTranslatorInterface.c)
 *     ArbInitializeOrderingList @ 0x1C00A0590 (ArbInitializeOrderingList.c)
 *     ACPIMatchHardwareId @ 0x1C00A141C (ACPIMatchHardwareId.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1CB0 (RegisterOperationRegionHandler.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A2000 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C00A226C (ACPIInternalGetDeviceCapabilities.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C00A3418 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 *     WppTraceCallback @ 0x1C00ACA30 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACD30 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AE854 (ACPIEcConnectGpioInterrupt.c)
 *     ACPIInitMultiString @ 0x1C00AFCD4 (ACPIInitMultiString.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00B0320 (ACPIEvaluateSpareDsm.c)
 *     ACPIPccInitialize @ 0x1C00B0788 (ACPIPccInitialize.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1C74 (UnRegisterOperationRegionHandler.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B2278 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIConnectWakeInterrupt @ 0x1C00B6214 (ACPIConnectWakeInterrupt.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B6480 (IrqLibAllocateMessageTarget.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B752C (IrqArbpQueryConflictIsa.c)
 *     IcAddGicInstance @ 0x1C00B75E0 (IcAddGicInstance.c)
 *     ArbQueryConflict @ 0x1C00B8080 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B8460 (ArbRetestAllocation.c)
 *     DriverEntry @ 0x1C00BB98C (DriverEntry.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD2FC (ACPIInitReadRegistryKeys.c)
 *     IcAddApicInstance @ 0x1C00BD844 (IcAddApicInstance.c)
 *     OSInterruptVector @ 0x1C00BD980 (OSInterruptVector.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BDA5C (InitIllegalIOAddressListFromHAL.c)
 *     ProcessorInitGlobalState @ 0x1C00BF064 (ProcessorInitGlobalState.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C06CC (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}

/*
 * XREFs of memset @ 0x1C0002180
 * Callers:
 *     ACPIEcOpRegionHandler @ 0x1C0002BC0 (ACPIEcOpRegionHandler.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C000518C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     RtlStringCchPrintfExW @ 0x1C000B730 (RtlStringCchPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C000B94C (RtlStringExHandleOtherFlagsW.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C000BD28 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C000C314 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x1C000C9C0 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C000E0EC (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011DE0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0013564 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C00137D8 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0013BE0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0013FE0 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C0016120 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     RtlStringCbPrintfExW @ 0x1C0017B4C (RtlStringCbPrintfExW.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C00196E0 (ACPICMLidPowerStateCallBack.c)
 *     EnableDisableCMOSRegions @ 0x1C0019EB4 (EnableDisableCMOSRegions.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x1C001B680 (AcpiHandleDeviceFirmwareLock.c)
 *     PerformHandlerInvocation @ 0x1C001BDF0 (PerformHandlerInvocation.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CFB8 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDispatchAddDevice @ 0x1C0023F50 (ACPIDispatchAddDevice.c)
 *     ACPIEcLogError @ 0x1C0025BB8 (ACPIEcLogError.c)
 *     ACPIWriteEventLogEntry @ 0x1C0025F7C (ACPIWriteEventLogEntry.c)
 *     RtlStringCchPrintfExA @ 0x1C002BB6C (RtlStringCchPrintfExA.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C002BD24 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeClearEventMasks @ 0x1C002C0F8 (ACPIGpeClearEventMasks.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C002C320 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C002C850 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C002E2FC (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C002E580 (ACPIInternalEvaluateOST.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002ECE0 (ACPIInternalQueryExtendedAddress.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C002FC98 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0030D08 (ACPIIoctlGetDeviceInformation.c)
 *     IsPciBusAsync @ 0x1C0035290 (IsPciBusAsync.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00360A0 (PciConfigSpaceHandlerWorker.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0037EC0 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0039920 (EnableDisableDeviceRegionSpace.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C004433C (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0044CE8 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0045368 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C0045E48 (ACPIWakeInitializePmeRouting.c)
 *     ACPIWmiRegisterGuids @ 0x1C0047134 (ACPIWmiRegisterGuids.c)
 *     Simulator_AllocAndInitTestData @ 0x1C0048EE4 (Simulator_AllocAndInitTestData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0049A18 (AMLICreateNativeNamespaceObject.c)
 *     FindNSObj @ 0x1C004B0BC (FindNSObj.c)
 *     FreeObjOwner @ 0x1C004B670 (FreeObjOwner.c)
 *     NewObjOwner @ 0x1C004C344 (NewObjOwner.c)
 *     ParseDLMObjectInternal @ 0x1C004C738 (ParseDLMObjectInternal.c)
 *     SetLogSize @ 0x1C004E6CC (SetLogSize.c)
 *     Debugger @ 0x1C004E9C4 (Debugger.c)
 *     HeapAlloc @ 0x1C004EC58 (HeapAlloc.c)
 *     NewGlobalHeap @ 0x1C004EFC4 (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C004F07C (NewLocalHeap.c)
 *     NewNameSpaceObject @ 0x1C004FE10 (NewNameSpaceObject.c)
 *     BankField @ 0x1C004FED0 (BankField.c)
 *     CreateXField @ 0x1C0050394 (CreateXField.c)
 *     Field @ 0x1C00505D0 (Field.c)
 *     IndexField @ 0x1C0050760 (IndexField.c)
 *     InitEvent @ 0x1C005095C (InitEvent.c)
 *     InitMutex @ 0x1C0050A1C (InitMutex.c)
 *     Method @ 0x1C0050B00 (Method.c)
 *     OpRegion @ 0x1C0050D20 (OpRegion.c)
 *     PowerRes @ 0x1C0050EA0 (PowerRes.c)
 *     Processor @ 0x1C0051010 (Processor.c)
 *     ReadField @ 0x1C0052B00 (ReadField.c)
 *     InitContext @ 0x1C0053858 (InitContext.c)
 *     NewContext @ 0x1C0053A0C (NewContext.c)
 *     PushCall @ 0x1C0053B18 (PushCall.c)
 *     PushTerm @ 0x1C0053E38 (PushTerm.c)
 *     Buffer @ 0x1C0055E10 (Buffer.c)
 *     Package @ 0x1C0058010 (Package.c)
 *     ParseField @ 0x1C005AB50 (ParseField.c)
 *     IrqLibpGetVectorInput @ 0x1C005CD70 (IrqLibpGetVectorInput.c)
 *     LinkNodeCrackPrt @ 0x1C005CEBC (LinkNodeCrackPrt.c)
 *     WppTraceCallback @ 0x1C007C3E0 (WppTraceCallback.c)
 *     AcpiArblibIsAliasedRangeAvailable @ 0x1C007D0E8 (AcpiArblibIsAliasedRangeAvailable.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C007EE94 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0081D18 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C0083404 (ACPIEcConnectGpioInterrupt.c)
 *     QueryExternalTranslatorInterface @ 0x1C00844A4 (QueryExternalTranslatorInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0086F48 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0087F70 (ACPIInternalGetDeviceCapabilities.c)
 *     EnableDisableIPMIRegions @ 0x1C00887AC (EnableDisableIPMIRegions.c)
 *     ACPIMatchHardwareAddress @ 0x1C0088CF8 (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1C0088E10 (ACPIMatchHardwareId.c)
 *     ACPIEvaluateSpareDsm @ 0x1C0089078 (ACPIEvaluateSpareDsm.c)
 *     AcpiQueryPciBusInterface @ 0x1C008A39C (AcpiQueryPciBusInterface.c)
 *     EnableDisableRegions @ 0x1C008A58C (EnableDisableRegions.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C008B2DC (AcpiSetupNativeMethodInterface.c)
 *     RegisterOperationRegionHandler @ 0x1C008BB34 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BE00 (UnRegisterOperationRegionHandler.c)
 *     AcpiQueryPrmInterface @ 0x1C008CE48 (AcpiQueryPrmInterface.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952FC (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098144 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIConnectWakeInterrupt @ 0x1C0098AC4 (ACPIConnectWakeInterrupt.c)
 *     PcisuppInitializePciRouting @ 0x1C0099E7C (PcisuppInitializePciRouting.c)
 *     PcisuppIsPciDevice @ 0x1C0099F78 (PcisuppIsPciDevice.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C009A6CC (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009E550 (IrqArbpQueryConflictIsa.c)
 *     IcClearPossibleData @ 0x1C009EFE0 (IcClearPossibleData.c)
 *     IcUpdateControllers @ 0x1C009F7AC (IcUpdateControllers.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009F8B4 (IrqPolicyGetDevicePolicy.c)
 *     MsiGetTargetInfo @ 0x1C00A06A8 (MsiGetTargetInfo.c)
 *     ArbBootAllocation @ 0x1C00A1090 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x1C00A2350 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A2740 (ArbRetestAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C00A2D90 (ArbpBuildAllocationStack.c)
 *     memset$thunk$772440563353939046 @ 0x1C00A4010 (memset$thunk$772440563353939046.c)
 *     DriverEntry @ 0x1C00A7310 (DriverEntry.c)
 *     OSInterruptVector @ 0x1C00A8324 (OSInterruptVector.c)
 *     AMLIInitialize @ 0x1C00AAAC0 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AB370 (Simulator_NotifyTablesAreLoaded.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00AB6B0 (InitIllegalIOAddressListFromHAL.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00ABE24 (IrqLibpSetSciConnectionData.c)
 *     ProcessorInitGlobalState @ 0x1C00ABF4C (ProcessorInitGlobalState.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}

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
 *     EnableDisableCMOSRegions @ 0x1C0019E94 (EnableDisableCMOSRegions.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x1C001B660 (AcpiHandleDeviceFirmwareLock.c)
 *     PerformHandlerInvocation @ 0x1C001BDD0 (PerformHandlerInvocation.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CF98 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDispatchAddDevice @ 0x1C0023F30 (ACPIDispatchAddDevice.c)
 *     ACPIEcLogError @ 0x1C0025B98 (ACPIEcLogError.c)
 *     ACPIWriteEventLogEntry @ 0x1C0025F5C (ACPIWriteEventLogEntry.c)
 *     RtlStringCchPrintfExA @ 0x1C002BB4C (RtlStringCchPrintfExA.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C002BD04 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeClearEventMasks @ 0x1C002C0D8 (ACPIGpeClearEventMasks.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C002C300 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C002C830 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C002E2DC (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002ECC0 (ACPIInternalQueryExtendedAddress.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C002FC78 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0030CE8 (ACPIIoctlGetDeviceInformation.c)
 *     IsPciBusAsync @ 0x1C0035270 (IsPciBusAsync.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0036080 (PciConfigSpaceHandlerWorker.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0037EA0 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0039900 (EnableDisableDeviceRegionSpace.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C004431C (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0044CC8 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0045348 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C0045E28 (ACPIWakeInitializePmeRouting.c)
 *     ACPIWmiRegisterGuids @ 0x1C0047114 (ACPIWmiRegisterGuids.c)
 *     Simulator_AllocAndInitTestData @ 0x1C0048EC4 (Simulator_AllocAndInitTestData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00499F8 (AMLICreateNativeNamespaceObject.c)
 *     FindNSObj @ 0x1C004B09C (FindNSObj.c)
 *     FreeObjOwner @ 0x1C004B650 (FreeObjOwner.c)
 *     NewObjOwner @ 0x1C004C324 (NewObjOwner.c)
 *     ParseDLMObjectInternal @ 0x1C004C718 (ParseDLMObjectInternal.c)
 *     SetLogSize @ 0x1C004E6AC (SetLogSize.c)
 *     Debugger @ 0x1C004E9A4 (Debugger.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     NewGlobalHeap @ 0x1C004EFA4 (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C004F05C (NewLocalHeap.c)
 *     NewNameSpaceObject @ 0x1C004FDF0 (NewNameSpaceObject.c)
 *     BankField @ 0x1C004FEB0 (BankField.c)
 *     CreateXField @ 0x1C0050374 (CreateXField.c)
 *     Field @ 0x1C00505B0 (Field.c)
 *     IndexField @ 0x1C0050740 (IndexField.c)
 *     InitEvent @ 0x1C005093C (InitEvent.c)
 *     InitMutex @ 0x1C00509FC (InitMutex.c)
 *     Method @ 0x1C0050AE0 (Method.c)
 *     OpRegion @ 0x1C0050D00 (OpRegion.c)
 *     PowerRes @ 0x1C0050E80 (PowerRes.c)
 *     Processor @ 0x1C0050FF0 (Processor.c)
 *     ReadField @ 0x1C0052AE0 (ReadField.c)
 *     InitContext @ 0x1C0053838 (InitContext.c)
 *     NewContext @ 0x1C00539EC (NewContext.c)
 *     PushCall @ 0x1C0053AF8 (PushCall.c)
 *     PushTerm @ 0x1C0053E18 (PushTerm.c)
 *     Buffer @ 0x1C0055DF0 (Buffer.c)
 *     Package @ 0x1C0057FF0 (Package.c)
 *     ParseField @ 0x1C005AB30 (ParseField.c)
 *     IrqLibpGetVectorInput @ 0x1C005CD50 (IrqLibpGetVectorInput.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     WppTraceCallback @ 0x1C007C3D0 (WppTraceCallback.c)
 *     AcpiArblibIsAliasedRangeAvailable @ 0x1C007D0D8 (AcpiArblibIsAliasedRangeAvailable.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C007EE84 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0081D08 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00833F4 (ACPIEcConnectGpioInterrupt.c)
 *     QueryExternalTranslatorInterface @ 0x1C0084494 (QueryExternalTranslatorInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0086F38 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0087F60 (ACPIInternalGetDeviceCapabilities.c)
 *     EnableDisableIPMIRegions @ 0x1C008879C (EnableDisableIPMIRegions.c)
 *     ACPIMatchHardwareAddress @ 0x1C0088CE8 (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1C0088E00 (ACPIMatchHardwareId.c)
 *     ACPIEvaluateSpareDsm @ 0x1C0089068 (ACPIEvaluateSpareDsm.c)
 *     AcpiQueryPciBusInterface @ 0x1C008A38C (AcpiQueryPciBusInterface.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C008B2CC (AcpiSetupNativeMethodInterface.c)
 *     RegisterOperationRegionHandler @ 0x1C008BB24 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BDF0 (UnRegisterOperationRegionHandler.c)
 *     AcpiQueryPrmInterface @ 0x1C008CE38 (AcpiQueryPrmInterface.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIConnectWakeInterrupt @ 0x1C0098AB4 (ACPIConnectWakeInterrupt.c)
 *     PcisuppInitializePciRouting @ 0x1C0099E6C (PcisuppInitializePciRouting.c)
 *     PcisuppIsPciDevice @ 0x1C0099F68 (PcisuppIsPciDevice.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C009A6BC (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009E540 (IrqArbpQueryConflictIsa.c)
 *     IcClearPossibleData @ 0x1C009EFD0 (IcClearPossibleData.c)
 *     IcUpdateControllers @ 0x1C009F79C (IcUpdateControllers.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009F8A4 (IrqPolicyGetDevicePolicy.c)
 *     MsiGetTargetInfo @ 0x1C00A0698 (MsiGetTargetInfo.c)
 *     ArbBootAllocation @ 0x1C00A1080 (ArbBootAllocation.c)
 *     ArbQueryConflict @ 0x1C00A2340 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A2730 (ArbRetestAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C00A2D80 (ArbpBuildAllocationStack.c)
 *     memset$thunk$772440563353939046 @ 0x1C00A4010 (memset$thunk$772440563353939046.c)
 *     DriverEntry @ 0x1C00A7300 (DriverEntry.c)
 *     OSInterruptVector @ 0x1C00A8314 (OSInterruptVector.c)
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AB360 (Simulator_NotifyTablesAreLoaded.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00AB6A0 (InitIllegalIOAddressListFromHAL.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00ABE14 (IrqLibpSetSciConnectionData.c)
 *     ProcessorInitGlobalState @ 0x1C00ABF3C (ProcessorInitGlobalState.c)
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

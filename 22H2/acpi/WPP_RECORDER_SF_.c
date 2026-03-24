/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C001D78C
 * Callers:
 *     ACPIStartNextGlobalLockRequest @ 0x1C000EAE0 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIEnableEnterACPIMode @ 0x1C000FF0C (ACPIEnableEnterACPIMode.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C00136BC (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerDpc @ 0x1C0020030 (ACPIDevicePowerDpc.c)
 *     ACPIDispatchAddDevice @ 0x1C0025260 (ACPIDispatchAddDevice.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0029674 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C002971C (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIRangeValidatePciResources @ 0x1C002B280 (ACPIRangeValidatePciResources.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C002B9D4 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIUnload @ 0x1C0052F10 (ACPIUnload.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054C98 (ACPIWriteEventLogEntry.c)
 *     OSNotifyDeviceCheck @ 0x1C0058AC4 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058F78 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0059198 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIIgnoreResourceMapValidation @ 0x1C005DA44 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005EE60 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F7C0 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x1C0060B20 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0060DF0 (ACPIVectorDisconnect.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0090950 (PnpCmResourcesToBiosResources.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0090D94 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1C00912B4 (ACPIProcessorBuildHiddenApicIds.c)
 *     IrqArbAddAllocation @ 0x1C0092810 (IrqArbAddAllocation.c)
 *     IcCheckIrqConflict @ 0x1C0096050 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0096AB8 (IrqArbpFindSuitableRangePci.c)
 *     ACPIInterruptInitialize @ 0x1C0097F74 (ACPIInterruptInitialize.c)
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1C00982D0 (ACPIPccLegacyInitialize.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009D6AC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIProcessHardwareInformation @ 0x1C009F214 (ACPIProcessHardwareInformation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A26F8 (PnpiBiosAddressToIoDescriptor.c)
 *     ACPIEnumerateTables @ 0x1C00A2E40 (ACPIEnumerateTables.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AF1D0 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIPccInitialize @ 0x1C00B0788 (ACPIPccInitialize.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B35FC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B3A44 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIInitStartACPI @ 0x1C00BB534 (ACPIInitStartACPI.c)
 *     ACPIGlobalInitialize @ 0x1C00BC294 (ACPIGlobalInitialize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC3BC (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTables @ 0x1C00BC580 (ACPIRegDumpAcpiTables.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDF8C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPILoadProcessRSDT @ 0x1C00BE744 (ACPILoadProcessRSDT.c)
 *     ACPIInitializeDDBs @ 0x1C00BE9B0 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessFACS @ 0x1C00BEB28 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessDSDT @ 0x1C00BEC08 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFADT @ 0x1C00BECCC (ACPILoadProcessFADT.c)
 *     ACPIInitialize @ 0x1C00BED6C (ACPIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, 0LL);
}

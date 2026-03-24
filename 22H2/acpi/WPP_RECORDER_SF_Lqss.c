/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C00209B0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000CC70 (ACPICMButtonStartWorker.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000D230 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInitStartDevice @ 0x1C000D968 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0014DE0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014FF0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00151E0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015460 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00155F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C00157E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015900 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessorExtension @ 0x1C0016024 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C0016A68 (ACPIInitDosDeviceName.c)
 *     ACPIDetectFilterDevices @ 0x1C0019004 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0019338 (ACPIDetectPdoDevices.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0019C4C (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019FB0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001A170 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001A380 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001A480 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A5C0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIDetectDockDevices @ 0x1C001A800 (ACPIDetectDockDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001AAF0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F520 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F800 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001FB30 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001FD20 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FEE0 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDispatchAddDevice @ 0x1C0025260 (ACPIDispatchAddDevice.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0028BD0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C002AB10 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C002BBB0 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002BF90 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C002E710 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F564 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002FAC4 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C002FD30 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00300B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030F90 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0031080 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildDockExtension @ 0x1C004B57C (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004BF20 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C004C180 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004C250 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C584 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004D120 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C004EC60 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C004F140 (ACPICMLidWorker.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C00505E0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     OSNotifyDeviceWake @ 0x1C0058CEC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058F78 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C00619AC (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061EE0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIInitStopDevice @ 0x1C0090C3C (ACPIInitStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0091310 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C009A540 (ACPIThermalStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009EB30 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009F074 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C00A0F00 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1C00A1914 (ACPISystemPowerProcessSxD.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C00A22F0 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AB810 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD9B0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C00ADD90 (ACPIBusIrpQueryBusInformationEIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  char *v19; // r10
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-78h]

  v9 = a9;
  v10 = a8;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = a2;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v19 = (char *)WPP_GLOBAL_Control + 80 * v12;
    if ( (unsigned __int8)v19[41] >= a2 )
    {
      if ( a9 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *(_BYTE *)(a9 + v20) );
      }
      if ( a8 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *(_BYTE *)(a8 + v21) );
      }
      pfnWppTraceMessage(*((_QWORD *)v19 + 3), 43LL, a5, a4, &a6, 4LL, &a7);
    }
  }
  if ( v9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v9 + v17) );
  }
  if ( v10 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v10 + v15) );
  }
  LOWORD(v22) = a4;
  return WppAutoLogTrace(a1, v13, a3, a5, v22, &a6);
}

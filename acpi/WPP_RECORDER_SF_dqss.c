/*
 * XREFs of WPP_RECORDER_SF_dqss @ 0x1C0009A6C
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C000518C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIBuildDockExtension @ 0x1C000CEDC (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C000E320 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C000E470 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C000ED30 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F000 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000F130 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F290 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000F4D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F780 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F930 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FB40 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C000FC90 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0010470 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0010780 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C00109B0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0011430 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011540 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C00116D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0011880 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0011B70 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C0011C70 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011DE0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C0012100 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012930 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0012BD0 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0012CA0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0012E40 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildProcessorExtension @ 0x1C0012FA8 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C0013D70 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C00140F0 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0016248 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonNotify @ 0x1C0018AC8 (ACPICMButtonNotify.c)
 *     ACPICMButtonStartWorker @ 0x1C0018F20 (ACPICMButtonStartWorker.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C0019520 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C001961C (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C00196E0 (ACPICMLidPowerStateCallBack.c)
 *     ACPICMLidWorker @ 0x1C00199B0 (ACPICMLidWorker.c)
 *     ACPIDetectDockDevices @ 0x1C0019FD0 (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C001C450 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDispatchAddDevice @ 0x1C0023F30 (ACPIDispatchAddDevice.c)
 *     ACPIFanEvent @ 0x1C0026EA0 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C0026F60 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1C0027860 (ACPIFanPowerCallback.c)
 *     ACPIFanWorker @ 0x1C00279F0 (ACPIFanWorker.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C002CD08 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C002D140 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C002ED94 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C002EF0C (ACPIInternalSetDeviceInterface.c)
 *     OSNotifyDeviceWake @ 0x1C0032FFC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0033280 (OSNotifyDeviceWakeByGPEEvent.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0036080 (PciConfigSpaceHandlerWorker.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1C003A1C0 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIRootEvent @ 0x1C003D000 (ACPIRootEvent.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C003DAE0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C003DEA4 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C003E114 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIWakeDisableAsync @ 0x1C0044CC8 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0045348 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0045850 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C007AD60 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C007DD9C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C007EA40 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C007EB60 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0084960 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIFanSetTripPoints @ 0x1C0085078 (ACPIFanSetTripPoints.c)
 *     ACPIFanStartDevice @ 0x1C0085270 (ACPIFanStartDevice.c)
 *     ACPIFanValidateImpactZoneSupport @ 0x1C0085554 (ACPIFanValidateImpactZoneSupport.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C0087050 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C008C748 (ACPIProcessorGetInitialApicId.c)
 *     ACPISystemPowerProcessSxD @ 0x1C00951C8 (ACPISystemPowerProcessSxD.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIThermalStartDevice @ 0x1C0095DD0 (ACPIThermalStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rsi
  const char *v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v14; // r14
  unsigned int v15; // ebp
  unsigned int v16; // r12d
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-78h]

  v9 = a8;
  v11 = a9;
  v12 = -1LL;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = a2;
  v16 = a4;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, (a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a9[v20] );
      v19 = v20 + 1;
    }
    v21 = a9;
    if ( !a9 )
      v21 = "NULL";
    if ( a8 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a8[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a8;
    if ( !a8 )
      v24 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      v16,
      &a6,
      4LL,
      &a7,
      8LL,
      v24,
      v23,
      v21,
      v19,
      0LL);
  }
  if ( v11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v9 )
  {
    do
      ++v12;
    while ( v9[v12] );
    v27 = v12 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  LOWORD(v29) = v16;
  return WppAutoLogTrace(a1, v15, a3, a5, v29, &a6, 4LL, &a7, 8LL, v9, v27, v11, v26, 0LL);
}

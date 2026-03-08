/*
 * XREFs of AMLIGetNamedChild @ 0x1C0048698
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00028E0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000E740 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8D0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EF00 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000F130 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000F4D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000F6A0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F930 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FB40 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0010300 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0010470 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0010890 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C00109B0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0010B20 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0010EE0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011120 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011540 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011DE0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012930 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0012E40 (ACPIBuildProcessThermalZoneUid.c)
 *     EnableDisableCMOSRegions @ 0x1C0019E94 (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001F100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001F780 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C001FC60 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0020880 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0020B10 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00212B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0021450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0025AC4 (ACPIEcRunQueryMethod.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B10 (ACPIFilterIrpSetPower.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIGetConvertToDevicePresence @ 0x1C0029F4C (ACPIGetConvertToDevicePresence.c)
 *     ACPIGetProcessorStatus @ 0x1C002B0A4 (ACPIGetProcessorStatus.c)
 *     ACPIInitDosDeviceName @ 0x1C002D140 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 *     IsPciBusAsyncWorker @ 0x1C0035350 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0035980 (IsPciDeviceWorker.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0039900 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C003A614 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BB0 (ACPIThermalGetSensorDevice.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C005D940 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C005DB40 (LinkNodepRunSrsWorker.c)
 *     ACPIDockIrpEject @ 0x1C007AAC0 (ACPIDockIrpEject.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C007C968 (ACPIAmliEvaluatePcch.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0081C08 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0082BD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C00835C4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C0083668 (ACPIEcGetUid.c)
 *     ACPIFanStartDevice @ 0x1C0085270 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C008879C (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C0089190 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C0089260 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C0089340 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C0089418 (ACPIQuerySpareDsm.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 *     ACPIThermalStartDevice @ 0x1C0095DD0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C00995D0 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0099720 (LinkNodepAddLinkNodeWorker.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(_QWORD *a1, int a2)
{
  KIRQL v4; // al
  __int64 **v5; // r8
  __int64 *i; // rbx

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = (__int64 **)(*a1 + 24LL);
  for ( i = *v5; v5 != (__int64 **)i; i = (__int64 *)*i )
  {
    if ( a2 == *((_DWORD *)i + 10) )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( i )
  {
    dword_1C006F938 = 0;
    i += 15;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)i + 2);
  }
  return i;
}

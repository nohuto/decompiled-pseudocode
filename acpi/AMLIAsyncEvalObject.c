/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C00478E8
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00028E0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000E740 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8D0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000F130 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0010EE0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011120 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011540 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011DE0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012930 (ACPIBuildProcessThermalZoneDep.c)
 *     EnableDisableCMOSRegions @ 0x1C0019E94 (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001F100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C001F370 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001F780 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C001FC60 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001FEA4 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0020650 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0020880 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0020B10 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00212B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0021450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0025AC4 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C002759C (ACPIFanLoop.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 *     ACPIWakeDisableAsync @ 0x1C0044CC8 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0045348 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0045850 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C005D940 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C005DB40 (LinkNodepRunSrsWorker.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C0082E50 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C008879C (EnableDisableIPMIRegions.c)
 *     RegisterOperationRegionHandler @ 0x1C008BB24 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 * Callees:
 *     Simulator_Free_Arguments @ 0x1C0049214 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C00495FC (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_TestNotifyRet @ 0x1C00499A8 (Simulator_TestNotifyRet.c)
 *     GetBaseObject @ 0x1C004B918 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, __int64 a2, int a3, ...)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 BaseObject; // rax
  __int64 v11; // rsi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v14; // r8
  void *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF
  va_list va2; // [rsp+A8h] [rbp+58h]
  va_list va3; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v3 = 0LL;
  v17 = 0LL;
  dword_1C006F938 = 0;
  v18 = 0LL;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
    v3 = v18;
  }
  v7 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_8;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  result = Simulator_Pre_AsyncEvalObject(
             v7,
             a2,
             a3,
             (unsigned int)va,
             (__int64)&v17,
             (__int64)va1,
             (__int64)va2,
             (__int64)&v18);
  if ( !(_DWORD)result )
  {
    v3 = v18;
LABEL_8:
    if ( (*(_BYTE *)(v7 + 64) & 4) != 0 )
    {
      v9 = -1073741738;
    }
    else
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
      }
      BaseObject = GetBaseObject(v7);
      v11 = BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v14 = &unk_1C00622D0;
        v15 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v14) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v14, 0, 0LL);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        v3 = v18;
      }
      v9 = AsyncEvalObject(v11, a2, a3, v19, v21, v23, 1);
      DereferenceObjectEx(v11, v16);
      if ( v9 == 32772 )
        v9 = 259;
    }
    if ( g_SimulatorCallbackObject && v9 != 259 )
    {
      if ( v3 )
      {
        v9 = Simulator_TestNotifyRet((PVOID)v3);
        if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
          Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
        ExFreePoolWithTag((PVOID)v3, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v9;
  }
  return result;
}

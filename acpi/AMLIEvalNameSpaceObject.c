/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C0047B9C
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIInitDosDeviceName @ 0x1C002D140 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0030F58 (ACPIIoctlGetDeviceSpecificData.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0039900 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C003A614 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BB0 (ACPIThermalGetSensorDevice.c)
 *     Simulator_EvaluateNode @ 0x1C00491A0 (Simulator_EvaluateNode.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C007C968 (ACPIAmliEvaluatePcch.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0081C08 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0082BD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C00835C4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C0083668 (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C0089068 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C0089190 (ACPIGetUniqueId.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BDF0 (UnRegisterOperationRegionHandler.c)
 *     ACPIProcessorDeviceControl @ 0x1C008C570 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalBuildConstraints @ 0x1C0095638 (ACPIThermalBuildConstraints.c)
 *     LinkNodeWriteStateToHardware @ 0x1C00995D0 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0099720 (LinkNodepAddLinkNodeWorker.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7BFC (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     Simulator_Free_Arguments @ 0x1C0049214 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C00496F8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C00499A8 (Simulator_TestNotifyRet.c)
 *     GetBaseObject @ 0x1C004B918 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     SyncEvalObject @ 0x1C0054E8C (SyncEvalObject.c)
 */

__int64 AMLIEvalNameSpaceObject(__int64 *a1, __int64 a2, unsigned int a3, ...)
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
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v3 = 0LL;
  v17[0] = 0LL;
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
  result = Simulator_Pre_EvalNameSpaceObject(v7, a2, a3, (unsigned int)va, (__int64)v17, (__int64)&v18);
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
        PrintDebugMessage(44, CurrentThread, (_DWORD)v14, 0, 0LL);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        v3 = v18;
      }
      v9 = SyncEvalObject(v11, a2, a3, v19);
      DereferenceObjectEx(v11, v16);
      if ( v9 == 32772 )
        v9 = 259;
    }
    if ( g_SimulatorCallbackObject )
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

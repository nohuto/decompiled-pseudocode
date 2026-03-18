/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C0047BBC
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIGet @ 0x1C00293A4 (ACPIGet.c)
 *     ACPIInitDosDeviceName @ 0x1C002D160 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C002DA4C (ACPIInitStartDevice.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0030F78 (ACPIIoctlGetDeviceSpecificData.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0039920 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C003A634 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BD0 (ACPIThermalGetSensorDevice.c)
 *     Simulator_EvaluateNode @ 0x1C00491C0 (Simulator_EvaluateNode.c)
 *     LinkNodeCrackPrt @ 0x1C005CEBC (LinkNodeCrackPrt.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C66C (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7E8 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C007C978 (ACPIAmliEvaluatePcch.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0081C18 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0082BE0 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C00835D4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C0083678 (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C0087AF4 (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C0089078 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C00891A0 (ACPIGetUniqueId.c)
 *     EnableDisableRegions @ 0x1C008A58C (EnableDisableRegions.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BE00 (UnRegisterOperationRegionHandler.c)
 *     ACPIProcessorDeviceControl @ 0x1C008C580 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalBuildConstraints @ 0x1C0095648 (ACPIThermalBuildConstraints.c)
 *     LinkNodeWriteStateToHardware @ 0x1C00995E0 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0099730 (LinkNodepAddLinkNodeWorker.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7C0C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     Simulator_Free_Arguments @ 0x1C0049234 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0049718 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C00499C8 (Simulator_TestNotifyRet.c)
 *     GetBaseObject @ 0x1C004B938 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C004BB90 (GetObjectPath.c)
 *     AMLIDebugger @ 0x1C004D650 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7D8 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C004EB9C (PrintDebugMessage.c)
 *     DereferenceObjectEx @ 0x1C004F6C8 (DereferenceObjectEx.c)
 *     SyncEvalObject @ 0x1C0054EAC (SyncEvalObject.c)
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

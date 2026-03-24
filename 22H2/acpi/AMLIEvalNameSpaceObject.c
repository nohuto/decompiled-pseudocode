/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C000BCA0
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C000BAC4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIInitStartDevice @ 0x1C000D968 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000EC74 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011B70 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0016A68 (ACPIInitDosDeviceName.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C6AC (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004BB44 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C880 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005D200 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     Simulator_EvaluateNode @ 0x1C0063B00 (Simulator_EvaluateNode.c)
 *     ACPIInitStopDevice @ 0x1C0090C3C (ACPIInitStopDevice.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0091AF0 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C0091BD0 (ACPIThermalBuildConstraints.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0095F18 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0098400 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099F08 (ACPIAmliEvaluateDsm.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C009A070 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A3A0 (ACPIAmliEvaluateOsc.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A990 (ACPIProcessorDeviceControl.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009CB40 (AcpiGetIdleWakeInfo.c)
 *     EnableDisableRegions @ 0x1C009D934 (EnableDisableRegions.c)
 *     ACPIEcGetGpeVector @ 0x1C00AEA1C (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AEAC0 (ACPIEcGetUid.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00B0320 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C00B0440 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1C74 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDF8C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     SyncEvalObject @ 0x1C0004490 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C0023A98 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     Simulator_Free_Arguments @ 0x1C0063B74 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0064048 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C00642F8 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0065C80 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 */

__int64 AMLIEvalNameSpaceObject(unsigned __int64 *a1, __int64 a2, int a3, ...)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v15; // r8
  void *v16; // rsi
  _QWORD *v17; // rbx
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  P[0] = 0LL;
  v19 = 0LL;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v10, v9, v11, v12);
  }
  v6 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  result = Simulator_Pre_EvalNameSpaceObject(v6, a2, a3, (unsigned int)va, (__int64)&v19, (__int64)P);
  if ( !(_DWORD)result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v7 = -1073741738;
    }
    else
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
      }
      while ( *(_WORD *)(v6 + 66) == 128 )
        v6 = *(_QWORD *)(v6 + 80);
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v6);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v15 = &unk_1C00701BA;
        v16 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v15) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v15, 0, 0LL);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
      }
      v7 = SyncEvalObject(v6, a2, a3, v20);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v6 + 64) |= 4u;
        if ( (*(_WORD *)(v6 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v6);
      }
      if ( v7 == 32772 )
        v7 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      v17 = P[0];
      if ( P[0] )
      {
        v7 = Simulator_TestNotifyRet(P[0]);
        if ( (unsigned int)(*((_DWORD *)v17 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v17 + 8), v17[5]);
        ExFreePoolWithTag(P[0], 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v7;
  }
  return result;
}

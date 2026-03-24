/*
 * XREFs of FreeDataBuffs @ 0x1C0003350
 * Callers:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     ConvertToInteger @ 0x1C000C190 (ConvertToInteger.c)
 *     ACPIInitStartDevice @ 0x1C000D968 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000EC74 (LinkNodeCrackPrt.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0010534 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011B70 (ACPIThermalGetSensorDevice.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     ACPIThermalTMPCallback @ 0x1C00124B0 (ACPIThermalTMPCallback.c)
 *     ACPIIoctlEnumChildren @ 0x1C0013C10 (ACPIIoctlEnumChildren.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00151E0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00155F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C00157E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015900 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIInitDosDeviceName @ 0x1C0016A68 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019FB0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001A170 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A5C0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001ED50 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026CF0 (ACPIGetWorkerForInteger.c)
 *     ProcessIncDec @ 0x1C002A480 (ProcessIncDec.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C002AB10 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002B060 (ACPIGetWorkerForBuffer.c)
 *     ACPIGetWorkerForData @ 0x1C002B520 (ACPIGetWorkerForData.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C6AC (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002F7E0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00300B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIGetWorkerForNothing @ 0x1C0030690 (ACPIGetWorkerForNothing.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004BB44 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004BF20 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C0055370 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C00572F4 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0057540 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C0063910 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C00658A8 (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C0068074 (FreeContext.c)
 *     Concat @ 0x1C0068C00 (Concat.c)
 *     Match_32 @ 0x1C0069AF8 (Match_32.c)
 *     Match_64 @ 0x1C0069C1C (Match_64.c)
 *     ConvertToBuffer @ 0x1C006B288 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006B3C0 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C006B458 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C006BCF0 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDF8C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 )
  {
    v3 = a2;
    do
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v5 & 8) != 0 )
          FreeData();
      }
      else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
      {
        if ( *(_WORD *)(a1 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
        FreeObjData(a1);
      }
      result = 0LL;
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

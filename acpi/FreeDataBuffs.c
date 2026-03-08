/*
 * XREFs of FreeDataBuffs @ 0x1C004B50C
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F000 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F290 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F930 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FB40 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C000FC90 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0010300 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0010470 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0011300 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0011880 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0011B70 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001F510 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIFanFSTCallback @ 0x1C0026F60 (ACPIFanFSTCallback.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002B2F0 (ACPIGetWorkerForBuffer.c)
 *     ACPIGetWorkerForData @ 0x1C002B4A0 (ACPIGetWorkerForData.c)
 *     ACPIGetWorkerForInteger @ 0x1C002B5C0 (ACPIGetWorkerForInteger.c)
 *     ACPIGetWorkerForNothing @ 0x1C002B780 (ACPIGetWorkerForNothing.c)
 *     ACPIGetWorkerForString @ 0x1C002B860 (ACPIGetWorkerForString.c)
 *     ACPIInitDosDeviceName @ 0x1C002D140 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C002F6B0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlEnumChildren @ 0x1C002FA10 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0030F58 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C003CA48 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BB0 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalTMPCallback @ 0x1C00421C0 (ACPIThermalTMPCallback.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     Simulator_CallbackWorker @ 0x1C0048FB0 (Simulator_CallbackWorker.c)
 *     FreeData @ 0x1C004B498 (FreeData.c)
 *     ParseDLMObjectInternal @ 0x1C004C718 (ParseDLMObjectInternal.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     FreeContext @ 0x1C0053624 (FreeContext.c)
 *     Concat @ 0x1C0055F60 (Concat.c)
 *     Match_32 @ 0x1C00578E8 (Match_32.c)
 *     Match_64 @ 0x1C0057A00 (Match_64.c)
 *     ProcessIncDec @ 0x1C0058510 (ProcessIncDec.c)
 *     ConvertToBuffer @ 0x1C0059884 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C00599BC (ConvertToDDBHandle.c)
 *     ConvertToInteger @ 0x1C0059A54 (ConvertToInteger.c)
 *     ConvertToString @ 0x1C0059B20 (ConvertToString.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseNestedContext @ 0x1C005BB50 (ParseNestedContext.c)
 *     ParseScope @ 0x1C005C220 (ParseScope.c)
 *     ParseTerm @ 0x1C005C790 (ParseTerm.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7BFC (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C004B498 (FreeData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = FreeData(a1);
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

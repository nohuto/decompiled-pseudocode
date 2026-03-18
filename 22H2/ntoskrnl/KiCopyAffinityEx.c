/*
 * XREFs of KiCopyAffinityEx @ 0x1402544A0
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KeFreezeExecution @ 0x14020D560 (KeFreezeExecution.c)
 *     KeIntSteerPeriodic @ 0x140221460 (KeIntSteerPeriodic.c)
 *     KiIpiSetTargetAffinity @ 0x1402543D4 (KiIpiSetTargetAffinity.c)
 *     HalpInterruptSendIpi @ 0x140254C30 (HalpInterruptSendIpi.c)
 *     PpmParkSteerInterrupts @ 0x140256900 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256D60 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x1402BF804 (KiComputeThreadAffinity.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402BFCC0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C000C (KeFlushProcessWriteBuffers.c)
 *     KiComputeCpuSetAffinity @ 0x1402C0414 (KiComputeCpuSetAffinity.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C3090 (KiUpdateProcessConcurrencyCount.c)
 *     KxFlushSingleTb @ 0x1402EB340 (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EB4C4 (KxFlushNonGlobalTb.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     KiSetSystemAffinityThread @ 0x14030702C (KiSetSystemAffinityThread.c)
 *     KeQueryUserAffinityThread @ 0x14032956C (KeQueryUserAffinityThread.c)
 *     KeQueryAffinityProcess @ 0x14034BB10 (KeQueryAffinityProcess.c)
 *     KeSynchronizeSecurityDomain @ 0x140356384 (KeSynchronizeSecurityDomain.c)
 *     PpmParkReportMask @ 0x14035A760 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x1403602AC (KeSynchronizeAddressPolicy.c)
 *     KeCopyAffinityEx2 @ 0x140368060 (KeCopyAffinityEx2.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KiStartPrcbThread @ 0x140383070 (KiStartPrcbThread.c)
 *     KxFlushMultipleTb @ 0x14038E914 (KxFlushMultipleTb.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403917B4 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140391BF0 (KeQueryActiveProcessorAffinity2.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeQueryCpuPartitionAffinity @ 0x1403AD9D8 (KeQueryCpuPartitionAffinity.c)
 *     KeSetAffinityProcess @ 0x1403AE3D8 (KeSetAffinityProcess.c)
 *     KxFlushEntireTb @ 0x1403B241C (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x1403CB080 (KiForwardTick.c)
 *     HalpNmiReboot @ 0x14051BE10 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x14051C9B0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405288D0 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KeCopyAffinityEx @ 0x14056F460 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x140570840 (KeQueryActiveProcessorAffinity.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140579C88 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A84C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D054 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140583DB0 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1405858E0 (PpmInstallNewIdleDomains.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 *     PspSetEffectiveJobLimits @ 0x1407D9D74 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14083009C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140973378 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeInitializeProfile @ 0x140974F54 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x140975010 (KeInitializeProfileCallback.c)
 *     KeDeleteCpuPartition @ 0x1409753D8 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140981E80 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E46DC (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140A03D28 (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140B4423C (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KiCopyAffinityEx(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  unsigned __int16 v5; // cx
  unsigned __int16 result; // ax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  char *v9; // r10
  __int64 v10; // rcx

  v5 = *a3;
  if ( *a3 > a2 )
    v5 = a2;
  *(_WORD *)a1 = v5;
  *(_WORD *)(a1 + 2) = a2;
  result = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v5 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = v5;
    v9 = (char *)a3 - a1;
    result = v5;
    do
    {
      *v7 = *(_QWORD *)((char *)v7 + (_QWORD)v9);
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  for ( ; result < *(_WORD *)(a1 + 2); *(_QWORD *)(a1 + 8 * v10 + 8) = 0LL )
    v10 = result++;
  return result;
}

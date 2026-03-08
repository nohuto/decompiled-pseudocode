/*
 * XREFs of KiCopyAffinityEx @ 0x1402337D0
 * Callers:
 *     KxFlushSingleTb @ 0x1402120DC (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x140212260 (KxFlushNonGlobalTb.c)
 *     KiUpdateProcessConcurrencyCount @ 0x14022B7A0 (KiUpdateProcessConcurrencyCount.c)
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     KiIpiSetTargetAffinity @ 0x140233704 (KiIpiSetTargetAffinity.c)
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140236F18 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     KiComputeCpuSetAffinity @ 0x140237838 (KiComputeCpuSetAffinity.c)
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KeCopyAffinityEx2 @ 0x140296060 (KeCopyAffinityEx2.c)
 *     KeQueryAffinityProcess @ 0x14029A300 (KeQueryAffinityProcess.c)
 *     KeIntSteerPeriodic @ 0x1402A8BB0 (KeIntSteerPeriodic.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1402AFA28 (KiSetAffinityThread.c)
 *     KeSynchronizeSecurityDomain @ 0x1402EAE28 (KeSynchronizeSecurityDomain.c)
 *     PpmParkReportMask @ 0x1402EDF00 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x1402F550C (KeSynchronizeAddressPolicy.c)
 *     KeQueryUserAffinityThread @ 0x140301774 (KeQueryUserAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     KiStartPrcbThread @ 0x14037F580 (KiStartPrcbThread.c)
 *     KxFlushMultipleTb @ 0x14038C454 (KxFlushMultipleTb.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x14038F314 (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x14038F750 (KeQueryActiveProcessorAffinity2.c)
 *     KeQueryCpuPartitionAffinity @ 0x1403A8718 (KeQueryCpuPartitionAffinity.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403A9688 (KeSetAffinityProcess.c)
 *     KxFlushEntireTb @ 0x1403AD5FC (KxFlushEntireTb.c)
 *     KiForwardTick @ 0x1403C61D0 (KiForwardTick.c)
 *     HalpNmiReboot @ 0x1405198E0 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x14051A480 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405263A0 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KeCopyAffinityEx @ 0x14056CDF0 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x14056E1D0 (KeQueryActiveProcessorAffinity.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140577778 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057833C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057AB44 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140581880 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1405833B0 (PpmInstallNewIdleDomains.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     KeInitializeProcess @ 0x14070A0C8 (KeInitializeProcess.c)
 *     PspSetEffectiveJobLimits @ 0x14078B504 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x140970358 (KiPrepareUpdateCoresHeteroMask.c)
 *     KeInitializeProfile @ 0x140971EAC (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x140971F68 (KeInitializeProfileCallback.c)
 *     KeDeleteCpuPartition @ 0x140972338 (KeDeleteCpuPartition.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14097EDD0 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E183C (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140A01038 (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140B35B2C (HalpReportResourceUsage.c)
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

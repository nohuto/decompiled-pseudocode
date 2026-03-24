/*
 * XREFs of KeCopyAffinityEx @ 0x1402BBAE0
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402201D0 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220B90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140227F90 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x140228E20 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140229440 (KeIntSteerPeriodic.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140229B00 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushEntireTb @ 0x14022F2F0 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403097E4 (KxFlushNonGlobalTb.c)
 *     PpmParkReportMask @ 0x14030F3B0 (PpmParkReportMask.c)
 *     KeSynchronizeSecurityDomain @ 0x1403154EC (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x14031B76C (KeSynchronizeAddressPolicy.c)
 *     KxFlushSingleTb @ 0x140334B68 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x140343EE0 (KiIpiSendRequest.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C2090 (KeQueryActiveProcessorAffinity.c)
 *     HalpNmiReboot @ 0x1404D2BC8 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x1404D2D00 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD400 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051D630 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522428 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405233F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140565450 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140567190 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA3A8 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408BC108 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1408BC194 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408E1D50 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093A8C0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x14095A5AC (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140A391C0 (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 result; // ax
  __int64 v4; // rcx

  *(_WORD *)a1 = *a2;
  *(_WORD *)(a1 + 2) = a2[1];
  result = 0;
  for ( *(_DWORD *)(a1 + 4) = 0; result < *a2; *(_QWORD *)(8 * v4 + a1 + 8) = *(_QWORD *)&a2[4 * v4 + 4] )
    v4 = result++;
  return result;
}

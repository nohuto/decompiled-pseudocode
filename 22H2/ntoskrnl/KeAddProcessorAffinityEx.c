/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140229340
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402201D0 (HalpInterruptSendIpi.c)
 *     PoIdle @ 0x140221E90 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x140224F50 (PpmIdlePrepare.c)
 *     PoExecuteIdleCheck @ 0x140227E10 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x140228E20 (PpmParkSteerInterrupts.c)
 *     KeQueryTotalCycleTimeThread @ 0x14022E860 (KeQueryTotalCycleTimeThread.c)
 *     KiSendClockInterruptToClockOwner @ 0x1402F03A4 (KiSendClockInterruptToClockOwner.c)
 *     KiCheckKeepAlive @ 0x140310D70 (KiCheckKeepAlive.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14031CAE4 (PoGetPerfStateAndParkingInfo.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140343C78 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoGetIdleTimes @ 0x140344D4C (PoGetIdleTimes.c)
 *     KeDisableTimer2 @ 0x140348C40 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14035C460 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x14035DC40 (KeFlushQueuedDpcs.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KeUpdateThreadTag @ 0x14036B8A0 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x140394E80 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A360C (HalpInterruptInitializeLocalUnit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1DF4 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1403C3E70 (PpmInstallNewIdleStates.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404C26A0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSynchronizeStibpPairing @ 0x14051B618 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x14051C2A0 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x14051E190 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522428 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmRemoveIdleStates @ 0x140567430 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x14056796C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140567C38 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140568170 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405683E0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140576B5C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14057BD54 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmUpdateIdleStates @ 0x1407913F0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407BA4A0 (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x1408642D0 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA3A8 (KeConfigureHeteroProcessors.c)
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x14099F1EC (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x1409A0330 (EmonInitializeProfiling.c)
 *     DefaultInitializeProfiling @ 0x1409A7190 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A9860 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AF4D0 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140A4D1CC (KiIntSteerInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(_WORD *a1, int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( (unsigned __int16)*a1 <= (unsigned int)v4 )
    *a1 = v4 + 1;
  v5 = *(_QWORD *)&a1[4 * v4 + 4];
  v6 = &a1[4 * v4];
  result = v3;
  _bittestandset64(&v5, v3);
  *((_QWORD *)v6 + 1) = v5;
  return result;
}

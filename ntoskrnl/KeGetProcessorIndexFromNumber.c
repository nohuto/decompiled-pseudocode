/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140236BF0
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     PoGetIdleTimes @ 0x140236ABC (PoGetIdleTimes.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     HalpInterruptDestinationToTarget @ 0x14028EC7C (HalpInterruptDestinationToTarget.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402F74A8 (PoGetPerfStateAndParkingInfo.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403007C0 (KeSetTargetProcessorDpcEx.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSelectIdealProcessor @ 0x140359930 (KeSelectIdealProcessor.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     HalSendNMI @ 0x14036B5E0 (HalSendNMI.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x14037FFF4 (IntPartGetProcessorEfficiencyClass.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403C91E4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptDpReplaceBegin @ 0x14051E4CC (HalpInterruptDpReplaceBegin.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056BAF0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 *     PpmClearSimulatedIdle @ 0x140581BAC (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405837CC (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140584430 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 *     PspBuildCreateProcessContext @ 0x1407EEDE0 (PspBuildCreateProcessContext.c)
 *     PpmUpdateIdleStates @ 0x14080D6D0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14097F410 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1409837F0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x140983918 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x140983BA4 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140A923CC (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A95000 (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     PopReadSimulateProcessorClass @ 0x140B934E4 (PopReadSimulateProcessorClass.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  __int64 Group; // rax
  __int64 Number; // rdx
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !(_WORD)Group && !ProcNumber->Number )
    return 0;
  if ( (unsigned __int16)Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( (unsigned __int8)Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}

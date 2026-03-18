/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140255090
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeSelectIdealProcessor @ 0x14020385C (KeSelectIdealProcessor.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     HalSendNMI @ 0x14020CF00 (HalSendNMI.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     PoGetIdleTimes @ 0x140252500 (PoGetIdleTimes.c)
 *     HalpInterruptSendIpi @ 0x140254C30 (HalpInterruptSendIpi.c)
 *     KeRemoveQueueEx @ 0x1402A9F20 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E40 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA48 (KiCheckForThreadDispatch.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317CE0 (KiAbThreadUnboostCpuPriority.c)
 *     HalpInterruptDestinationToTarget @ 0x14031FA9C (HalpInterruptDestinationToTarget.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14032A290 (PoGetPerfStateAndParkingInfo.c)
 *     KiReadyOutSwappedThreads @ 0x14034CBF4 (KiReadyOutSwappedThreads.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036B680 (KeSetTargetProcessorDpcEx.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036BAC8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036C524 (KeSetSystemMultipleGroupAffinityThread.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x140387714 (IntPartGetProcessorEfficiencyClass.c)
 *     KeSetCpuSetsProcess @ 0x14039C834 (KeSetCpuSetsProcess.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CE794 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptDpReplaceBegin @ 0x1405209FC (HalpInterruptDpReplaceBegin.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056E0E0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405752F4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 *     PpmClearSimulatedIdle @ 0x1405840DC (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140585CFC (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140586960 (PpmUpdateProcessorIdleVeto.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x140771678 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14078EC70 (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x140822320 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1409824C0 (PpmInstallPlatformIdleStates.c)
 *     PpmClearSimulatedLoad @ 0x1409868A0 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1409869C8 (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x140986C54 (PpmSetSimulatedLoad.c)
 *     HalpInterruptReinitialize @ 0x140A9550C (HalpInterruptReinitialize.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140A98140 (HalpInterruptUpdateLocalUnitIdentifier.c)
 *     PopReadSimulateProcessorClass @ 0x140B976F4 (PopReadSimulateProcessorClass.c)
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

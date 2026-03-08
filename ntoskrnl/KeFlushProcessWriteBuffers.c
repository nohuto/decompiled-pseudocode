/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1402373CC
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402288B0 (KeQueryTotalCycleTimeThread.c)
 *     NtFlushProcessWriteBuffers @ 0x1402373B0 (NtFlushProcessWriteBuffers.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402D1FF0 (PoFxSendSystemLatencyUpdate.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140581B64 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405836EC (PpmSetExitLatencySamplingPercentage.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140789FC0 (PsQueryTotalCycleTimeProcess.c)
 *     PspTerminateAllThreads @ 0x1407DB73C (PspTerminateAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AB970 (PspEnableProcessOptionalXStateFeatures.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140237680 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402376C0 (KiIpiSendPacket.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  int v3; // r15d
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rsi
  _KPROCESS *Process; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v10) = 4096;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  p_StaticAffinity = &CurrentPrcb->StaticAffinity;
  if ( a1 )
  {
    v3 = 1;
    v6 = KeNumberProcessors_0 - 1;
    LODWORD(p_StaticAffinity) = 0;
  }
  else
  {
    Process = CurrentPrcb->CurrentThread->ApcState.Process;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&p_StaticAffinity->KeFlushTbAffinity.Count = 2097153;
    memset(
      &CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8,
      0,
      sizeof(CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      (__int64)&CurrentPrcb->StaticAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      &Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v6 = KeCountSetBitsAffinityEx(&CurrentPrcb->StaticAffinity);
  }
  if ( v6 )
  {
    KiIpiSendPacket(v3, (_DWORD)p_StaticAffinity, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v7, CurrentPrcb);
  }
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

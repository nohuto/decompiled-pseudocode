/*
 * XREFs of KeCancelTimer2 @ 0x140204390
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1402037D0 (ExpShutdownWorkerFactory.c)
 *     ExCancelTimer @ 0x140204330 (ExCancelTimer.c)
 *     ExpSetTimerObject2 @ 0x1402CF9D4 (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14036D07C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403901F8 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140584B8C (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14058D598 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14058DE90 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopUpdatePdcSystemIdleState @ 0x14073B8FC (PopUpdatePdcSystemIdleState.c)
 *     EtwpDisableKernelTrace @ 0x1407864C4 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageFlushPending @ 0x140799B84 (EtwpCoverageFlushPending.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x140849E40 (SshpAlpcOpenTraceSessionUnsafe.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408523C0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x14097E560 (PopPowerRequestDebounceTimerWorker.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140993A30 (PopNetWnfLowPowerEpochCallback.c)
 *     PdcPoNetworkResiliency @ 0x140994930 (PdcPoNetworkResiliency.c)
 *     ExpPartitionDestroy @ 0x1409FDA98 (ExpPartitionDestroy.c)
 * Callees:
 *     KiUpdateTimer2Flags @ 0x1402044C8 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x140248860 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14024EA84 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14024EAC8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KiTraceCancelTimer2 @ 0x14045A3E8 (KiTraceCancelTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeCancelTimer2(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // r12d
  char v6; // si
  unsigned int v7; // r14d
  char v8; // r15
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v12; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  v4 = 0;
  v6 = 0;
  v7 = 2;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 96);
    v8 = 1;
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      a2 = 4LL;
    else
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1, a2, a3, SchedulerAssist) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_7:
        KiUpdateTimer2Flags(a1, v4, v7);
        goto LABEL_8;
      }
      v4 = 4;
    }
    v6 = 1;
    v7 = 0;
    goto LABEL_7;
  }
LABEL_8:
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v8 && v6 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ v9, KiWaitNever)));
  return v6;
}

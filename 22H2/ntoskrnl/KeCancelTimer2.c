/*
 * XREFs of KeCancelTimer2 @ 0x140348B50
 * Callers:
 *     ExCancelTimer @ 0x1403488A0 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x1403489E8 (ExpShutdownWorkerFactory.c)
 *     ExpSetTimerObject2 @ 0x14034927C (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381684 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D458 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403AF158 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140568A8C (PopDirectedDripsStartDisengageTimer.c)
 *     EtwpCoverageFlushPending @ 0x1406A4A30 (EtwpCoverageFlushPending.c)
 *     EtwpDisableKernelTrace @ 0x1407932FC (EtwpDisableKernelTrace.c)
 *     PdcPoNetworkResiliency @ 0x1408EF8E0 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408F2100 (PopNetWnfLowPowerEpochCallback.c)
 *     ExpPartitionDestroy @ 0x140955EC4 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiRemoveTimer2 @ 0x14024AD50 (KiRemoveTimer2.c)
 *     KiUpdateTimer2Flags @ 0x140348E54 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140348EF0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140348F1C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x140523A04 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned int v1; // r14d
  char v3; // si
  char v4; // r15
  __int64 v5; // r13
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v1 = 0;
  v3 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
        goto LABEL_8;
      v1 = 4;
    }
    v3 = 1;
LABEL_8:
    KiUpdateTimer2Flags(a1, v1);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v4 && v3 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v5 ^ KiWaitNever, KiWaitNever)));
  return v3;
}

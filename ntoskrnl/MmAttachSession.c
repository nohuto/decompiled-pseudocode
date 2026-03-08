/*
 * XREFs of MmAttachSession @ 0x1402EA500
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x140394CFC (MiLockStealSystemVm.c)
 *     PopWatchdogWorker @ 0x1403D0490 (PopWatchdogWorker.c)
 *     PopPowerButtonWorkCallback @ 0x140596C60 (PopPowerButtonWorkCallback.c)
 *     MmPrefetchVirtualMemory @ 0x14067E690 (MmPrefetchVirtualMemory.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x140776AB8 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     TtmpSessionWorker @ 0x1409A2950 (TtmpSessionWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140A24E40 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyPristineToAllSession @ 0x140AD82CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140AD844C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  unsigned __int64 v2; // rdi
  struct _KPROCESS *v4; // rbx
  _KPROCESS *v5; // rsi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE v19[2]; // [rsp+20h] [rbp-38h] BYREF

  v2 = PROCESS[1].Affinity.StaticBitmap[25];
  memset(v19, 0, 24);
  v4 = PROCESS;
  v5 = KeGetCurrentThread()->ApcState.Process;
  v6 = v5[1].Affinity.StaticBitmap[25];
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, v19);
  if ( (*(_DWORD *)(v2 + 4) & 2) != 0 )
  {
    KxReleaseQueuedSpinLock(v19);
    OldIrql = v19[0].OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v19[0].OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v19[0].OldIrql + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v2 + 76);
    KxReleaseQueuedSpinLock(v19);
    v7 = v19[0].OldIrql;
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && v19[0].OldIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (v19[0].OldIrql + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    __writecr8(v7);
    if ( v6 && (HIDWORD(v5[2].Header.WaitListHead.Flink) & 0x1000) == 0 && v6 == v2 )
      v4 = v5;
    KeStackAttachProcess(v4, ApcState);
    return 0LL;
  }
}

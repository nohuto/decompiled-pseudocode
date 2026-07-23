/*
 * XREFs of PopQueueQuerySetIrp @ 0x140398494
 * Callers:
 *     PopRequestPowerIrp @ 0x14036DED0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x14099390C (PopNotifyDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PopDeepSleepSetDisengageReason @ 0x14026F788 (PopDeepSleepSetDisengageReason.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     PopDiagTraceIrpStart @ 0x14036E594 (PopDiagTraceIrpStart.c)
 *     PopEnableIrpWatchdog @ 0x14039865C (PopEnableIrpWatchdog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall PopQueueQuerySetIrp(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  char v2; // r14
  PIRP v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbp
  struct _DEVICE_OBJECT *v7; // r12
  int v8; // eax
  __int64 v9; // rdi
  PIRP *v10; // rdi
  PIRP v11; // rax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  unsigned __int64 OldIrql; // rdi
  KIRQL v15; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  struct _LIST_ENTRY *v17; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  IRP *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v24; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = Irp;
  v4 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  if ( *(_BYTE *)(v4 + 184) == 2
    && *(_DWORD *)(v4 + 188) == 1
    && _InterlockedIncrement(&PopPendingSetPowerDeviceIrps) == 1 )
  {
    PopDeepSleepSetDisengageReason(2u);
  }
  v8 = *(_DWORD *)(v4 + 188);
  v9 = 264LL;
  if ( v8 != 1 )
    v9 = 280LL;
  v10 = (PIRP *)(v6 + v9);
  if ( v8 == 1 && *(_BYTE *)(v4 + 184) == 2 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
  {
    v15 = KeAcquireQueuedSpinLock(0xAuLL);
    AttachedTo = v7;
    if ( v7 )
    {
      while ( (AttachedTo->Flags & 0x4000) == 0 )
      {
        AttachedTo = AttachedTo->DeviceObjectExtension->AttachedTo;
        if ( !AttachedTo )
          goto LABEL_24;
      }
      v2 = 1;
    }
LABEL_24:
    KeReleaseQueuedSpinLock(0xAuLL, v15);
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  if ( v2 )
  {
    v17 = (struct _LIST_ENTRY *)qword_140C22FA8;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
    if ( *(__int64 **)qword_140C22FA8 != &PopInrushIrpList )
      goto LABEL_38;
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v17;
    v17->Flink = &p_ListEntry->ListEntry;
    qword_140C22FA8 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  v11 = v10[1];
  if ( v11 )
  {
    for ( i = (IRP *)v11->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
          i;
          i = (IRP *)i->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
    {
      v11 = i;
    }
    v11->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v3;
    goto LABEL_25;
  }
  v10[1] = v3;
  if ( *v10 )
  {
LABEL_25:
    v3 = 0LL;
    goto LABEL_15;
  }
  if ( v2 )
  {
    if ( !PopInrushIrp )
    {
      PopInrushIrp = (__int64)v3;
      Flink = v3->Tail.Overlay.ListEntry.Flink;
      Blink = v3->Tail.Overlay.ListEntry.Blink;
      if ( (PVOID *)Flink->Blink == &v3->Tail.CompletionKey + 6 && (PVOID *)Blink->Flink == &v3->Tail.CompletionKey + 6 )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        goto LABEL_14;
      }
LABEL_38:
      __fastfail(3u);
    }
    goto LABEL_25;
  }
LABEL_14:
  v10[1] = 0LL;
  *v10 = v3;
LABEL_15:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = (unsigned int)LockHandle.OldIrql + 1;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v24 = (result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v24 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v12, (__int64)v3);
    PopEnableIrpWatchdog(v3);
    return IofCallDriver(v7, v3);
  }
  return result;
}

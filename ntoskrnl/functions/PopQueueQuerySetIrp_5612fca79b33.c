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
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  PIRP v12; // rcx
  NTSTATUS result; // eax
  __int64 v14; // rcx
  unsigned __int64 OldIrql; // rdi
  __int64 v16; // rdx
  KIRQL v17; // al
  struct _DEVICE_OBJECT *AttachedTo; // rdx
  struct _LIST_ENTRY *v19; // rcx
  IRP *i; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v25; // zf
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
    PopDeepSleepSetDisengageReason(2LL);
  }
  v8 = *(_DWORD *)(v4 + 188);
  v9 = 264LL;
  if ( v8 != 1 )
    v9 = 280LL;
  v10 = (PIRP *)(v6 + v9);
  if ( *(_BYTE *)(v4 + 184) == 2 && v8 == 1 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
  {
    v17 = KeAcquireQueuedSpinLock(0xAuLL);
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
    KeReleaseQueuedSpinLock(0xAuLL, v17);
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
  if ( v2 )
  {
    v19 = (struct _LIST_ENTRY *)qword_140C3D278;
    if ( *(__int64 **)qword_140C3D278 != &PopInrushIrpList )
      goto LABEL_38;
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v19;
    v19->Flink = &p_ListEntry->ListEntry;
    qword_140C3D278 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  v12 = v10[1];
  if ( v12 )
  {
    for ( i = (IRP *)v12->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
          i;
          i = (IRP *)i->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink )
    {
      v12 = i;
    }
    v12->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v3;
    goto LABEL_33;
  }
  v10[1] = v3;
  if ( *v10 )
  {
LABEL_33:
    v3 = 0LL;
    goto LABEL_17;
  }
  if ( v2 )
  {
    if ( !PopInrushIrp )
    {
      Flink = p_ListEntry->ListEntry.Flink;
      Blink = v3->Tail.Overlay.ListEntry.Blink;
      PopInrushIrp = (__int64)v3;
      if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Flink->Blink == p_ListEntry
        && (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Blink->Flink == p_ListEntry )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        goto LABEL_16;
      }
LABEL_38:
      __fastfail(3u);
    }
    goto LABEL_33;
  }
LABEL_16:
  v10[1] = 0LL;
  *v10 = v3;
LABEL_17:
  PopIrpLockThread = 0LL;
  result = KxReleaseQueuedSpinLock(&LockHandle);
  v14 = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = (unsigned int)LockHandle.OldIrql + 1;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v25 = (result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v25 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v14, v3);
    PopEnableIrpWatchdog(v3, v16);
    return IofCallDriver(v7, v3);
  }
  return result;
}

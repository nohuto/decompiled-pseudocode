/*
 * XREFs of PoHandleIrp @ 0x1402B986C
 * Callers:
 *     IopPoHandleIrp @ 0x1402B981C (IopPoHandleIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     PoDeviceReleaseIrp @ 0x1402B9A0C (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x1402B9AA8 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x1402B9B64 (PopDispatchQuerySetIrp.c)
 *     PopEnableIrpWatchdog @ 0x1402BB290 (PopEnableIrpWatchdog.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140590058 (PopDiagTraceDIrpAfterSx.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, __int64 a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _DWORD *v3; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  PDEVICE_OBJECT DeviceObject; // r15
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  char v12; // si
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (_DWORD *)a2;
  v5 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(v5 + 40);
  DeviceObject = CurrentStackLocation->DeviceObject;
  if ( !v8 )
  {
    if ( *(_BYTE *)(v5 + 184) == 2 && !*(_DWORD *)(v5 + 188) && *(_DWORD *)(v5 + 192) == 1 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      _InterlockedAnd((volatile signed __int32 *)(v7 + 296), 0xFFFF7FFF);
      v16 = *(_QWORD *)(v7 + 264);
      if ( v16 )
        PopEnableIrpWatchdog(v16, v15);
      PopIrpLockThread = 0LL;
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          a2 = -1LL << (LockHandle.OldIrql + 1);
          v21 = ~(unsigned __int16)a2;
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
    if ( *(_BYTE *)(v5 + 184) == 2 && *(_DWORD *)(v5 + 188) == 1 )
    {
      _m_prefetchw((const void *)(v7 + 296));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 296), 0) & 0x8000) != 0 )
        PopDiagTraceDIrpAfterSx(Irp);
    }
LABEL_16:
    p_Flags = &DeviceObject->Flags;
    v12 = 1;
    if ( (DeviceObject->Flags & 0x8000) == 0 )
      goto LABEL_17;
    goto LABEL_8;
  }
  LOBYTE(a2) = *(_BYTE *)(v5 + 184);
  PoDeviceReleaseIrp(Irp, a2, v8);
  p_Flags = &DeviceObject->Flags;
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x8000) != 0 || (Flags & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
    goto LABEL_16;
  v12 = 0;
LABEL_8:
  LOBYTE(a2) = CurrentStackLocation->MinorFunction;
  PoDeviceAcquireIrp(Irp, a2, DeviceObject);
  if ( !v12 )
    return v12;
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v3 = 0;
    return v12;
  }
LABEL_17:
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  PopDispatchQuerySetIrp(Irp);
  PopIrpLockThread = 0LL;
  KxReleaseQueuedSpinLock(&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v22 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
  __writecr8(v14);
  *v3 = 259;
  return v12;
}

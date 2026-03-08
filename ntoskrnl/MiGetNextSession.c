/*
 * XREFs of MiGetNextSession @ 0x14035C308
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MmGetNextSession @ 0x14035C2F0 (MmGetNextSession.c)
 *     PsQueryCpuQuotaInformation @ 0x1403B1468 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     MiSelectSessionAttachProcess @ 0x14022A5A8 (MiSelectSessionAttachProcess.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiGetNextSession(_QWORD *Object)
{
  _QWORD *v2; // rdi
  __int64 CurrentServerSilo; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( Object )
    v4 = Object[171];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 120);
    goto LABEL_5;
  }
  v5 = (__int64 *)qword_140C69580;
  if ( qword_140C69580 )
  {
LABEL_5:
    while ( v5 != &qword_140C69580 )
    {
      v6 = MiSelectSessionAttachProcess((__int64)(v5 - 15));
      v2 = v6;
      if ( v6 )
      {
        if ( !CurrentServerSilo || v5[83] == CurrentServerSilo )
          break;
        ObfDereferenceObject(v6);
        v2 = 0LL;
      }
      v5 = (__int64 *)*v5;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( Object )
      ObfDereferenceObject(Object);
    return v2;
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    __writecr8(v9);
    return 0LL;
  }
}

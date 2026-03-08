/*
 * XREFs of MmGetSessionById @ 0x14022A4F0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmGetSessionObjectById @ 0x1402BE684 (MmGetSessionObjectById.c)
 *     PopWatchdogWorker @ 0x1403D0490 (PopWatchdogWorker.c)
 *     PopPowerButtonWorkCallback @ 0x140596C60 (PopPowerButtonWorkCallback.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     PsGetSiloBySessionId @ 0x1406CDDA8 (PsGetSiloBySessionId.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071A42C (ExpWnfCaptureScopeInstanceId.c)
 *     PspAttachSession @ 0x140776AB8 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     PiUEventBroadcastEventWorker @ 0x1407F80C0 (PiUEventBroadcastEventWorker.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140956B40 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140956BCC (PiUEventBroadcastPortsChangedEvent.c)
 *     TtmpSessionWorker @ 0x1409A2950 (TtmpSessionWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140A24E40 (CmFcpChangeSubscriptionWrapper.c)
 * Callees:
 *     MiSelectSessionAttachProcess @ 0x14022A5A8 (MiSelectSessionAttachProcess.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 CurrentServerSilo; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo(a1, a2);
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v5 = (_QWORD *)qword_140C65670;
  while ( v5 )
  {
    if ( v2 > *((_DWORD *)v5 - 32) )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( v2 >= *((_DWORD *)v5 - 32) )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 )
  {
    v6 = v5 - 17;
    if ( (!CurrentServerSilo || v6[98] == CurrentServerSilo) && *((_DWORD *)v6 + 2) == v2 )
      v3 = MiSelectSessionAttachProcess();
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v3;
}

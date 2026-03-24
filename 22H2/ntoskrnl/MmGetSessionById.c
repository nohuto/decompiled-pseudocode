/*
 * XREFs of MmGetSessionById @ 0x1402063D0
 * Callers:
 *     MmGetSessionObjectById @ 0x140206324 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x140578790 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140578DB0 (PopWatchdogWorker.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FD88 (ExpWnfCaptureScopeInstanceId.c)
 *     PspAttachSession @ 0x140660A48 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x140660AC8 (ExCallSessionCallBack.c)
 *     PsGetSiloBySessionId @ 0x1406AD300 (PsGetSiloBySessionId.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1407178F4 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x14071B694 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastEventWorker @ 0x140773AE0 (PiUEventBroadcastEventWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E410 (CmFcpChangeSubscriptionWrapper.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A2B50 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2BDC (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408F5204 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140900080 (TtmpSessionWorker.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14020653C (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 ThreadServerSilo; // rdi
  _QWORD *v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = 0LL;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(a1, a2) )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v5 = (_QWORD *)qword_140C4DDE8;
  if ( !qword_140C4DDE8 )
    goto LABEL_16;
  while ( 1 )
  {
    v6 = *((_DWORD *)v5 - 34);
    if ( v2 > v6 )
    {
      v5 = (_QWORD *)v5[1];
      goto LABEL_9;
    }
    if ( v2 >= v6 )
      break;
    v5 = (_QWORD *)*v5;
LABEL_9:
    if ( !v5 )
      goto LABEL_16;
  }
  if ( v5 && (!ThreadServerSilo || v5[113] == ThreadServerSilo) && v6 == v2 )
    v3 = MiSelectSessionAttachProcess(v5 - 18);
LABEL_16:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v3;
}

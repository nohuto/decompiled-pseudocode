/*
 * XREFs of PopPowerRequestHandleClose @ 0x1402BBD4C
 * Callers:
 *     PopPowerRequestClose @ 0x14073ABE0 (PopPowerRequestClose.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PoDeletePowerRequest @ 0x140872C60 (PoDeletePowerRequest.c)
 * Callees:
 *     PopPowerRequestCallbackWorker @ 0x1402BC180 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1402BCCE4 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPowerRequestHandleClose(_BYTE *Object)
{
  bool v2; // di
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  Object[32] = 1;
  PopPowerRequestEvaluatePendingRequestStatus(Object);
  v2 = v8[0] != (_QWORD)v8;
  result = KxReleaseQueuedSpinLock(&LockHandle);
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
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v2 )
    return PopPowerRequestCallbackWorker(v8);
  return result;
}

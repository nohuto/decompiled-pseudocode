__int64 __fastcall MiDereferenceAnyActiveHugeContext(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(unsigned int **)(a1 + 344);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
  {
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 168LL) + 48LL) + 16LL)
                  + 25408LL * v1[80]
                  + 23024),
      &LockHandle);
    MiDecrementHugeContext(v1);
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
    *(_QWORD *)(a1 + 344) = 0LL;
  }
  return result;
}

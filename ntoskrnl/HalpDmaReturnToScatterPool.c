__int64 __fastcall HalpDmaReturnToScatterPool(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF

  memset(&v12, 0, sizeof(v12));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &v12);
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 8) = result;
  ++*(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = a2;
  if ( a3 )
    ++*(_DWORD *)(a1 + 216);
  if ( CurrentIrql != 15 )
  {
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v12);
    OldIrql = v12.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && v12.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (v12.OldIrql + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}

LONG_PTR __fastcall ExpFreeAsid(unsigned int a1, void *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  LONG_PTR result; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF

  memset(&v12, 0, sizeof(v12));
  KeAcquireInStackQueuedSpinLock(&qword_140C2CFD8, &v12);
  v4 = (char *)qword_140C2CFD0 + 16 * a1;
  v5 = v4[1] - 1LL;
  v4[1] = v5;
  if ( v5 )
  {
    v4[1] = v5 | 0x8000000000000000uLL;
    v6 = 0;
  }
  else
  {
    *v4 = 0LL;
    v6 = 1;
    --dword_140C2CFC8;
  }
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
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v6 == 1 )
  {
    if ( a2 )
      return ObfDereferenceObject(a2);
  }
  return result;
}

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

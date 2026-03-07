__int64 *__fastcall HalpDmaDequeueAdapter(__int64 a1, char a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  __int64 *result; // rax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r11
  _DWORD *v18; // r9
  int v19; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v4 = (__int64 **)(a1 + 176);
  if ( !a2 )
    v4 = (__int64 **)(a1 + 160);
  v5 = *v4;
  if ( *v4 == (__int64 *)v4 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = 0LL;
    __writecr8(OldIrql);
  }
  else
  {
    v13 = *v5;
    if ( (__int64 **)v5[1] != v4 || *(__int64 **)(v13 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v13;
    v14 = v5 - 21;
    *(_QWORD *)(v13 + 8) = v4;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    __writecr8(v15);
    return v14;
  }
  return result;
}

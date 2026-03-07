__int64 __fastcall IopIoRingGetAvailableCqSlots(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  KIRQL v3; // al
  __int64 v4; // r10
  unsigned __int64 v5; // rdi
  _DWORD *v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v1 = (volatile signed __int64 *)(a1 + 104);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v4 = *(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 120);
  v5 = v3;
  v6 = *(_DWORD **)(a1 + 80);
  v7 = *(unsigned int *)(a1 + 28);
  v8 = v4 + (unsigned int)(v6[1] - *v6);
  if ( v8 < v7 )
    v9 = v7 - v8;
  else
    v9 = 0;
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return v9;
}

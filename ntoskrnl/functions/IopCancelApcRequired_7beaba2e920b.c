__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int64 *v3; // r14
  KIRQL v7; // al
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rcx
  unsigned int v11; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  bool v17; // zf

  v3 = (volatile signed __int64 *)(a1 + 1496);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1496));
  v8 = (_QWORD *)(a1 + 1280);
  v9 = v7;
  v10 = *(_QWORD **)(a1 + 1280);
  if ( v10 == (_QWORD *)(a1 + 1280) )
  {
LABEL_2:
    v11 = 0;
  }
  else if ( a3 || (v11 = 1, a2) )
  {
    while ( (*(_DWORD *)(v10 - 2) & 2) != 0 || (v10[5] != a3 || a2 && v10[20] != a2) && (a3 || v10[20] != a2) )
    {
      v10 = (_QWORD *)*v10;
      if ( v8 == v10 )
        goto LABEL_2;
    }
    v11 = 1;
  }
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return v11;
}

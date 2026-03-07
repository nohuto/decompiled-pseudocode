__int64 __fastcall KeCpuPartitionMoveCpus(__int64 a1, __int64 a2, char *a3, char a4)
{
  int v8; // edi
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  volatile signed __int64 *v12; // rsi
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // r9

  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v11 = 4;
    if ( CurrentIrql != 2 )
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  v12 = (volatile signed __int64 *)(a2 + 264);
  KxAcquireSpinLock((PKSPIN_LOCK)(a2 + 264));
  if ( (unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)a3, (unsigned __int16 *)a2)
    && (a4 || !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)a3, (unsigned __int16 *)a2)) )
  {
    if ( a2 == a1 )
    {
      v8 = 0;
    }
    else
    {
      v19 = 0;
      if ( a2 )
        v19 = *(_WORD *)(a2 + 2);
      KiSubtractAffinityEx((unsigned __int16 *)a2, a3, (_BYTE *)a2, v19);
      if ( a2 != KiSystemCpuPartition
        || (v8 = KiModifySystemAllowedCpuSetsWithLock(0, 0LL, (unsigned __int16 *)a3, 0, 2), v8 >= 0) )
      {
        KxReleaseSpinLock((volatile signed __int64 *)(a2 + 264));
        v12 = (volatile signed __int64 *)(a1 + 264);
        KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 264));
        v20 = 0;
        if ( a1 )
          v20 = *(_WORD *)(a1 + 2);
        KiOrAffinityEx((char *)a1, a3, (_BYTE *)a1, v20);
        if ( a1 == KiSystemCpuPartition )
          v8 = KiModifySystemAllowedCpuSetsWithLock(0, 0LL, (unsigned __int16 *)a3, 0, 1);
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  KxReleaseSpinLock(v12);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return (unsigned int)v8;
}

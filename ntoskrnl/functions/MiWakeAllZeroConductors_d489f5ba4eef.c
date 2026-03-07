__int64 *MiWakeAllZeroConductors()
{
  __int64 *result; // rax
  unsigned int v1; // ebx
  __int64 i; // r15
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 *v11; // rsi

  for ( result = (__int64 *)PsGetNextPartition(0LL); ; result = (__int64 *)PsGetNextPartition(v11) )
  {
    v11 = result;
    if ( !result )
      break;
    v1 = 0;
    for ( i = *result; v1 < (unsigned __int16)KeNumberNodes; ++v1 )
    {
      v3 = *(_QWORD *)(i + 16) + 25408LL * v1;
      v4 = *(_QWORD *)(v3 + 23152);
      if ( v4 )
      {
        v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 23160));
        KeSetEvent((PRKEVENT)(v4 + 64), 0, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 23160));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v10 = (v9 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v9;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v5);
      }
    }
  }
  return result;
}

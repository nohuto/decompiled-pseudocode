unsigned __int16 *__fastcall VF_FIND_BUFFER(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax
  unsigned __int16 *v7; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax

  v2 = (volatile signed __int64 *)(a1 + 16);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v6 = *(_QWORD **)a1;
  v7 = (unsigned __int16 *)(*(_QWORD *)a1 - 48LL);
  while ( 1 )
  {
    if ( (_QWORD *)a1 == v6 )
    {
      KxReleaseSpinLock(v2);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      v7 = 0LL;
      goto LABEL_13;
    }
    if ( *((_QWORD *)v7 + 2) + *v7 == a2 )
      break;
    v7 = (unsigned __int16 *)(*v6 - 48LL);
    v6 = (_QWORD *)*v6;
  }
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v12 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
  }
LABEL_13:
  __writecr8(v5);
  return v7;
}

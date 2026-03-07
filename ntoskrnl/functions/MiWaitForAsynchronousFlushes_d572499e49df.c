__int64 __fastcall MiWaitForAsynchronousFlushes(unsigned int *a1)
{
  unsigned int *v1; // rdi
  PVOID *v2; // r14
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // ebx
  unsigned __int8 v5; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // cl
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax

  v1 = a1;
  v2 = (PVOID *)(a1 + 528);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v4 = 0;
  do
  {
    if ( !*((_QWORD *)a1 + 2) || a1[13] )
    {
      a1 += 66;
    }
    else
    {
      if ( KiIrqlFlags )
      {
        v5 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      KeWaitForMultipleObjects(8u, v2, WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(v1 + 544));
      a1 = v1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
    }
  }
  while ( a1 < (unsigned int *)v2 );
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v9 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  __writecr8(CurrentIrql);
  while ( (*v1 & 0x80000000) == 0 )
  {
    v1 += 66;
    if ( v1 >= (unsigned int *)v2 )
      return v4;
  }
  return *v1;
}

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v4 = ExAcquireSpinLockShared(&dword_140C66EE0);
  v5 = (_QWORD *)qword_140C66EE8;
  v6 = 0;
  v7 = v4;
  while ( v5 )
  {
    if ( a1 <= v5[7] )
    {
      if ( a1 >= v5[7] )
        break;
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[1];
    }
  }
  if ( v5 && (!v5[4] || a2 < v5[5] || a2 > v5[6]) )
    v5 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66EE0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  LOBYTE(v6) = v5 != 0LL;
  return v6;
}

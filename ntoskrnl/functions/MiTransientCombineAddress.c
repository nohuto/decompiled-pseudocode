__int64 __fastcall MiTransientCombineAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  KIRQL v5; // al
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v2 = 0;
  if ( !dword_140C66EC4 )
    return 0LL;
  v5 = ExAcquireSpinLockShared(&dword_140C66EC0);
  v6 = (_QWORD *)qword_140C66EC8;
  v7 = v5;
  while ( v6 )
  {
    if ( a1 <= v6[3] )
    {
      if ( a1 >= v6[3] )
        break;
      v6 = (_QWORD *)*v6;
    }
    else
    {
      v6 = (_QWORD *)v6[1];
    }
  }
  if ( v6 && v6[5] != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v6 = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66EC0);
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
  LOBYTE(v2) = v6 != 0LL;
  return v2;
}

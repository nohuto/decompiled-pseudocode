void __fastcall MiObtainParkedCoreMasks(_OWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  __int16 *v5; // rax
  __int128 v6; // xmm1
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = ExAcquireSpinLockShared(&dword_140C66840);
  v3 = 2LL;
  v4 = v2;
  v5 = &word_140C66848;
  do
  {
    *a1 = *(_OWORD *)v5;
    a1[1] = *((_OWORD *)v5 + 1);
    a1[2] = *((_OWORD *)v5 + 2);
    a1[3] = *((_OWORD *)v5 + 3);
    a1[4] = *((_OWORD *)v5 + 4);
    a1[5] = *((_OWORD *)v5 + 5);
    a1[6] = *((_OWORD *)v5 + 6);
    a1 += 8;
    v6 = *((_OWORD *)v5 + 7);
    v5 += 64;
    *(a1 - 1) = v6;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)a1 = *(_QWORD *)v5;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66840);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
}

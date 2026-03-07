char __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  int v1; // eax
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v5; // rdi
  volatile LONG *v6; // r15
  bool v7; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned int v11; // r13d
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax

  v1 = *(_DWORD *)(a1 + 4);
  if ( (v1 & 0x10) == 0 )
  {
    LOBYTE(v1) = MiPageCombiningActive(a1);
    if ( !v1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v9) = 4;
        else
          v9 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v9;
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v5 = *(_QWORD *)(a1 + 16) + 25408LL * i;
        v6 = (volatile LONG *)(v5 + 23104);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 23104));
        if ( !*(_BYTE *)(v5 + 3249) )
        {
          v7 = (*(_BYTE *)(v5 + 3248))-- == 1;
          if ( v7 )
          {
            v10 = 0LL;
            v11 = 0;
            v12 = (-(__int64)(*(_BYTE *)(v5 + 3251) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
            if ( MmNumberOfChannels )
            {
              v13 = MmNumberOfChannels;
              do
                v10 += MiNodeFreeZeroPages((_QWORD *)v5, v11++, 0);
              while ( v11 < v13 );
              v6 = (volatile LONG *)(v5 + 23104);
            }
            if ( v10 < v12
              || (MiFlags & 0x30) == 0
              || (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v5, 4u, 2) >> 3 >= v10
              || (v14 = MiWakeLargePageRebuild(a1, i, 1LL)) == 0 )
            {
              *(_BYTE *)(v5 + 3250) = 8;
              *(_BYTE *)(v5 + 3248) = 8;
            }
          }
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      }
      if ( KiIrqlFlags )
      {
        v15 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v7 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v1) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return v1;
}

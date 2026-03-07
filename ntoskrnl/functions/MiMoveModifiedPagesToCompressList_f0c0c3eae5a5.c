void __fastcall MiMoveModifiedPagesToCompressList(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  int v5; // r9d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  for ( i = *(_QWORD *)(a1 + 3664); i != 0x3FFFFFFFFFLL; i = *(_QWORD *)(a1 + 3664) )
  {
    v3 = 48 * i - 0x220000000000LL;
    v4 = (unsigned __int8)MiLockPageInline(v3);
    if ( i == *(_QWORD *)(a1 + 3664) )
    {
      MiUnlinkPageFromListEx(48 * i - 0x220000000000LL, 0LL);
      *(_QWORD *)(v3 + 16) = MiTransferSoftwarePte(
                               *(_QWORD *)(v3 + 16),
                               *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1188) + 17056),
                               3u,
                               0);
      MiInsertPageInList(48 * i - 0x220000000000LL, v5 + 8);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
}

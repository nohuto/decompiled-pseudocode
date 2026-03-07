void __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int16 v2; // ax
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 i; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  __int64 v20; // [rsp+50h] [rbp+8h]

  v2 = *(_WORD *)(a1 + 204);
  if ( (v2 & 0x40) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 248);
    v4 = v20 + 88LL * (v2 & 0xF);
    v5 = 0LL;
    v6 = *(_QWORD *)(v4 + 3920);
    for ( i = a2 == 0 ? 0x10000 : 0; v6 != 0x3FFFFFFFFFLL; v6 = *(_QWORD *)(v4 + 3920) )
    {
      v8 = 48 * v6 - 0x220000000000LL;
      v9 = (unsigned __int8)MiLockPageInline(v8);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 3936));
      if ( v6 == *(_QWORD *)(v4 + 3920) )
      {
        MiUnlinkPageFromListEx(48 * v6 - 0x220000000000LL, 1uLL);
        v15 = *(_QWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 16) = v15 & 0xFFFFFFFFFFFFFFFDuLL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 3936));
        MiInsertPageInList(v8, 8u);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo(v20, v15, 1);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v9);
        ++v5;
        if ( !a2 && v5 >= i )
          return;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 3936));
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v10 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v10 >= 2u )
          {
            v11 = KeGetCurrentPrcb();
            v12 = v11->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v13 & v12[5]) == 0;
            v12[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v11);
          }
        }
        __writecr8(v9);
      }
    }
  }
}

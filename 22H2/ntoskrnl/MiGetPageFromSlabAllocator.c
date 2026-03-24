/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x140359630
 * Callers:
 *     MiGetSlabPage @ 0x14035959C (MiGetSlabPage.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140376108 (MiUpdateSlabPagePlaceholderState.c)
 *     MiGetPageFromSlabEntry @ 0x1403799E4 (MiGetPageFromSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabStandbyPage @ 0x14055300C (MiGetSlabStandbyPage.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocator(__int64 a1)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 PageFromSlabEntry; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8

  if ( !(*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 64)) )
    return -1LL;
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 24);
  v5 = v3;
  if ( !v4 )
    goto LABEL_11;
  PageFromSlabEntry = MiGetPageFromSlabEntry(v4, a1);
  if ( PageFromSlabEntry == -1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
LABEL_11:
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v11 & 1) != 0 )
    {
      if ( v11 != 1 )
      {
        v12 = (_QWORD *)(v11 ^ (a1 | 1));
        goto LABEL_15;
      }
    }
    else
    {
      v12 = *(_QWORD **)(a1 + 8);
LABEL_15:
      while ( v12 )
      {
        PageFromSlabEntry = MiGetPageFromSlabEntry(v12, a1);
        if ( PageFromSlabEntry != -1 )
        {
          *(_QWORD *)(a1 + 24) = v12;
          goto LABEL_5;
        }
        v13 = (_QWORD *)v12[1];
        v14 = v12;
        if ( v13 )
        {
          do
          {
            v12 = v13;
            v13 = (_QWORD *)*v13;
          }
          while ( v13 );
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v12 || (_QWORD *)*v12 == v14 )
              break;
            v14 = v12;
          }
        }
      }
    }
    PageFromSlabEntry = -1LL;
  }
LABEL_5:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = -1LL << ((unsigned __int8)v5 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)v7;
        v18 = (v17 & SchedulerAssist[5]) == 0;
        v8 = (unsigned int)v17 & SchedulerAssist[5];
        SchedulerAssist[5] = v8;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( PageFromSlabEntry == -1 )
    return MiGetSlabStandbyPage(a1);
  v10 = (unsigned __int8)MiLockPageInline(48 * PageFromSlabEntry - 0x58000000000LL, v7, v8, SchedulerAssist);
  MiUpdateSlabPagePlaceholderState(a1, PageFromSlabEntry, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * PageFromSlabEntry - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v22 = v20->SchedulerAssist;
        v18 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v10);
  return PageFromSlabEntry;
}

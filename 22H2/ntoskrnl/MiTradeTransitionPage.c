/*
 * XREFs of MiTradeTransitionPage @ 0x1403346F8
 * Callers:
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiCanPageMove @ 0x1403349A0 (MiCanPageMove.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTradeTransitionPage(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  int v11; // ebp
  int PfnChannel; // eax
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 Page; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r13
  __int64 v20; // r12
  unsigned __int64 v21; // rbp
  BOOL IsPfnFromSlabAllocation; // eax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  unsigned int v26; // r15d
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  int v38; // edx
  _DWORD *v39; // r9
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  int v42; // eax
  _DWORD *v43; // r8
  __int64 v44; // [rsp+50h] [rbp+8h]

  v6 = (unsigned __int8)a2;
  if ( *(_WORD *)(BugCheckParameter2 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (unsigned int)MiCanPageMove(BugCheckParameter2, a2) && !MiIsPfnFromSlabAllocation(BugCheckParameter2) )
    {
      v9 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
      v44 = v9;
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v31 = (v35 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v35;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( a4 == -1 )
      {
        v11 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2);
        PfnChannel = MiGetPfnChannel(BugCheckParameter2);
        v13 = 128LL;
        v14 = (PfnChannel << byte_140C4DE8D) | dword_140C4DEF8 & v10 | (v11 << byte_140C4DE8C);
        if ( (a5 & 0x3000000) != 0 )
          v13 = 65664LL;
      }
      else
      {
        v13 = 48LL;
        v14 = dword_140C4DEF8 & v10 | a4 & ~dword_140C4DEF8;
      }
      Page = MiGetPage(v9, v14, v13);
      v19 = Page;
      if ( Page == -1 )
        return 1LL;
      v20 = 48 * Page - 0x58000000000LL;
      v21 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v16, v17, v18);
      if ( v20 == BugCheckParameter2 )
      {
        v19 = -1LL;
LABEL_19:
        *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v40 >= 2u )
            {
              v41 = KeGetCurrentPrcb();
              v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
              v43 = v41->SchedulerAssist;
              v31 = (v42 & v43[5]) == 0;
              v43[5] &= v42;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick(v41);
            }
          }
        }
        __writecr8(v21);
        if ( a6 )
          *a6 = v19;
        return 3LL;
      }
      if ( v10 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || MiIsPfnFileOnly(BugCheckParameter2) )
      {
        v24 = 0;
      }
      else
      {
        IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
        v24 = 0;
        if ( !IsPfnFromSlabAllocation
          && !*(_WORD *)(BugCheckParameter2 + 32)
          && v44 == *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
          && (unsigned int)MiCanPageMove(BugCheckParameter2, v23) )
        {
          if ( (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) <= 2u )
          {
            MiReplaceTransitionPage(BugCheckParameter2);
            goto LABEL_19;
          }
          v26 = 2;
          goto LABEL_24;
        }
      }
      v26 = v24;
LABEL_24:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v39 = v37->SchedulerAssist;
            v31 = (v38 & v39[5]) == 0;
            v39[5] &= v38;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(v21);
      MiReleaseFreshPage(v20);
      return v26;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v31 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}

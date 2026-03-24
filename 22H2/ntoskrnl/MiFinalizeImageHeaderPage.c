/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x14035914C
 * Callers:
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x140298818 (MiUseSlabAllocator.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiGetSlabPage @ 0x14035959C (MiGetSlabPage.c)
 *     MiCheckSlabPage @ 0x14037CA40 (MiCheckSlabPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  unsigned int v10; // esi
  __int64 SlabPage; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 SchedulerAssist; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 result; // rax
  BOOL IsPfnFromSlabAllocation; // eax
  bool v18; // zf
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v19 = 0;
  if ( qword_140C4DF40 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DF40;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, (_BYTE *)v4, *v1, &v19) )
  {
    v10 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !MiIsPfnFromSlabAllocation(BugCheckParameter2)
      || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v19, v10) && !v19 )
    {
      SlabPage = MiGetSlabPage(v6, v10, v19, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v12 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v7, v8, v9);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2);
  if ( v5 && !*(_WORD *)(BugCheckParameter2 + 32) )
  {
    IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
    MiReplaceTransitionPage(BugCheckParameter2, v5, IsPfnFromSlabAllocation, 0LL);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1);
    v5 = BugCheckParameter2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        v18 = ((unsigned int)result & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        v13 = (unsigned int)result & *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v13;
        if ( v18 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( v5 )
    return MiReleaseFreshPage(v5, v13, SchedulerAssist, CurrentPrcb);
  return result;
}

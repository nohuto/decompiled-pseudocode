/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x1402C6548
 * Callers:
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 * Callees:
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUseSlabAllocator @ 0x140289310 (MiUseSlabAllocator.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCheckSlabPage @ 0x1402A6DE4 (MiCheckSlabPage.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR BugCheckParameter2)
{
  __int64 *v1; // r15
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  int v9; // esi
  int v10; // edi
  int PfnChannel; // eax
  __int64 SlabPage; // rax
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v18; // zf
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h]

  v1 = (__int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v19 = 0;
  if ( qword_140C657C0 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C657C0;
  v4 = *v1;
  v5 = v2 >> 16;
  v6 = 0LL;
  v20 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v5 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v20, (__int64 *)v5, v4, &v19)
    && (!(unsigned int)MiCheckSlabPfnBitmap(BugCheckParameter2, 1LL, 0)
     || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v19) && v19 <= 3) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)v5 + 56LL);
    v10 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
                    + 8);
    PfnChannel = MiGetPfnChannel(BugCheckParameter2);
    SlabPage = MiGetSlabPage(
                 v20,
                 v19,
                 (PfnChannel << byte_140C6570E) | (v10 << byte_140C6570D) | (-1431655765
                                                                           * ((__int64)(BugCheckParameter2
                                                                                      + 0x220000000000LL) >> 4)) & dword_140C65778,
                 (v9 & 0x7F00000) == 0 ? 2 : 0,
                 (__int64 *)0xFFFFFFFFFFFFFFFFLL);
    if ( SlabPage != -1 )
      v6 = 48 * SlabPage - 0x220000000000LL;
  }
  v7 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2);
  if ( v6 )
  {
    if ( !*(_WORD *)(BugCheckParameter2 + 32) && *(char *)(BugCheckParameter2 + 35) >= 0 )
    {
      v13 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
      if ( v13 >= 2u && v13 <= 3u && (unsigned int)MiCheckSlabPfnBitmap(v6, 1LL, 0) )
      {
        MiCheckSlabPfnBitmap(BugCheckParameter2, 1LL, 0);
        MiReplaceTransitionPage(BugCheckParameter2);
        *v1 = ZeroPte;
        MiSetOriginalPtePfnFromFreeList(v1, v14, v15);
        v6 = BugCheckParameter2;
      }
    }
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( v6 )
    return MiReleaseFreshPage(v6);
  return result;
}

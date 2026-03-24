/*
 * XREFs of MiFreeContiguousPages @ 0x1402E91B8
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1402E9070 (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1408C63C0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1408C6AB0 (MiRemoveMdlPages.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x1408DA794 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x14027ECD4 (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiResidentPageDangleFree @ 0x1403F6714 (MiResidentPageDangleFree.c)
 *     MiFreeLargePageCharges @ 0x14055E3BC (MiFreeLargePageCharges.c)
 */

__int64 __fastcall MiFreeContiguousPages(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v16; // eax
  bool v17; // zf

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 48 * a1 - 0x58000000000LL;
  do
  {
    v9 = v6;
    v10 = v7;
    if ( (v5 & 0x1FF) != 0 || v4 < 0x200 || !(unsigned int)MiResidentPageDangleFree(v5, 1LL) )
    {
      v13 = (unsigned __int8)MiLockPageInline(v8, a2, a3, SchedulerAssist);
      v7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      if ( v10 )
        v7 = v10;
      --*(_WORD *)(v8 + 32);
      ++v6;
      if ( *(_WORD *)(v8 + 32) != 1 )
        v6 = v9;
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v8);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v16 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
      result = 48LL;
      v12 = -1LL;
      a2 = 1LL;
    }
    else
    {
      if ( !v7 )
        v7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      MiFreeLargePageMemory(v5, a2, 6u);
      result = 24576LL;
      v12 = -512LL;
      a2 = 512LL;
    }
    v8 += result;
    v5 += a2;
    v4 += v12;
  }
  while ( v4 );
  if ( v6 )
    return MiFreeLargePageCharges(v7, v6);
  return result;
}

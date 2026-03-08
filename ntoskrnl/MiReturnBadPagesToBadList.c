/*
 * XREFs of MiReturnBadPagesToBadList @ 0x14062878C
 * Callers:
 *     MiRemoveBadPages @ 0x140628020 (MiRemoveBadPages.c)
 *     MmRemovePhysicalMemory @ 0x140A2A520 (MmRemovePhysicalMemory.c)
 * Callees:
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReturnBadPagesToBadList(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x220000000000LL;
    do
    {
      v4 = (unsigned __int8)MiLockPageInline(v3);
      if ( !*(_QWORD *)(v3 + 8) )
        *(_QWORD *)(v3 + 8) = -4LL;
      *(_WORD *)(v3 + 32) = 0;
      MiSetPfnPteFrame(v3, 0LL);
      MiInsertPageInList(v5, 0x20u);
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
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v4);
      v3 += 48LL;
      --v2;
    }
    while ( v2 );
  }
}
